#include "lwip/opt.h"
#include "lwip/tcpip.h"
#include "netif/etharp.h"
#include "lwip/ethip6.h"
#include "mbed_interface.h"
#include "etharp.h"
#include "lwip/stats.h"
#include "lwip/snmp.h"
#include "lwip/dhcp.h"
#include "lwip/autoip.h"
#include "lwip/prot/iana.h"
#include "netif/ethernet.h"

#include <kernel.h>
#include <t_syslog.h>
#include <t_stdlib.h>
#include <string.h>
#include "btstack-interface.h"

static struct netif *netif = NULL;
err_t etharp_output(struct netif *netif, struct pbuf *q, const ip4_addr_t *ipaddr);

void bnep_channel_receive_callback(uint8_t *packet, uint16_t size) {
    // TODO: is zero copy possible?
    if (netif == NULL) {
        assert(false);  // FIXME: handle this
        return;
    }

//    SYSUTM utm1, utm2;
//    get_utm(&utm1);

    struct pbuf *p = pbuf_alloc(PBUF_RAW, size, PBUF_RAM);
    memcpy(p->payload, packet, size);
    p->len = size;
    /* full packet send to tcpip_thread to process */
    if (netif->input(p, netif) != ERR_OK) {
        /* Free buffer */
        pbuf_free(p);
        assert(false); // FIXME: handle this
    }
//    get_utm(&utm2);
//    syslog(LOG_ERROR, "%s costs %d us", __FUNCTION__, utm2 - utm1);
}

static err_t btstack_linkoutput(struct netif *netif, struct pbuf *p) {
    struct pbuf *q;
    s32_t       cnt;
    err_t       err        = ERR_MEM;
    s32_t       write_size = 0;

    static char buf[4096]; // FIXME: zero copy
    int len = 0;

    if ((p->payload != NULL) && (p->len != 0)) {
        for (q = p; q != NULL; q = q->next) {
            memcpy(buf + len, q->payload, q->len);
            len += q->len;
        }
            if (!bnep_channel_send(buf, len)) {
                assert(false); // FIXME: handle this
            } else
        err = ERR_OK;
    }

    return err;
}

err_t eth_arch_enetif_init(struct netif *_netif)
{
    netif = _netif;

    /* set MAC hardware address */
#if (MBED_MAC_ADDRESS_SUM != MBED_MAC_ADDR_INTERFACE)
    netif->hwaddr[0] = MBED_MAC_ADDR_0;
    netif->hwaddr[1] = MBED_MAC_ADDR_1;
    netif->hwaddr[2] = MBED_MAC_ADDR_2;
    netif->hwaddr[3] = MBED_MAC_ADDR_3;
    netif->hwaddr[4] = MBED_MAC_ADDR_4;
    netif->hwaddr[5] = MBED_MAC_ADDR_5;
#else
    mbed_mac_address((char *)netif->hwaddr);
#endif
    netif->hwaddr_len = ETH_HWADDR_LEN;

    /* maximum transfer unit */
    netif->mtu = 1500; // FIXME: check this

    /* device capabilities */
    netif->flags = NETIF_FLAG_BROADCAST | NETIF_FLAG_ETHARP | NETIF_FLAG_ETHERNET;
#ifdef LWIP_IGMP
    netif->flags |= NETIF_FLAG_IGMP;
#endif
#if LWIP_IPV6_MLD
    netif->flags |= NETIF_FLAG_MLD6;
#endif

#if LWIP_NETIF_HOSTNAME
    /* Initialize interface hostname */
    netif->hostname = "lwiprza1";
#endif /* LWIP_NETIF_HOSTNAME */

    netif->name[0] = 'e';
    netif->name[1] = 'n';

#if LWIP_IPV4
    netif->output = etharp_output; // FIXME: check IF status like rza1_etharp_output_ipv4?
#endif
#if LWIP_IPV6
  netif->output_ip6 = rza1_etharp_output_ipv6;
#endif

    netif->linkoutput = btstack_linkoutput;

    netif_set_link_up(netif);

    return ERR_OK;
}

void eth_arch_enable_interrupts(void) {
    // FIXME: support this
    // ethernetext_start_stop(1);
}

void eth_arch_disable_interrupts(void) {
    // ethernetext_start_stop(0);
}

err_t
etharp_output(struct netif *netif, struct pbuf *q, const ip4_addr_t *ipaddr)
{
  const struct eth_addr *dest;
  struct eth_addr mcastaddr;
  const ip4_addr_t *dst_addr = ipaddr;

  LWIP_ASSERT_CORE_LOCKED();
  LWIP_ASSERT("netif != NULL", netif != NULL);
  LWIP_ASSERT("q != NULL", q != NULL);
  LWIP_ASSERT("ipaddr != NULL", ipaddr != NULL);

  /* Determine on destination hardware address. Broadcasts and multicasts
   * are special, other IP addresses are looked up in the ARP table. */

  /* broadcast destination IP address? */
  if (ip4_addr_isbroadcast(ipaddr, netif)) {
    /* broadcast on Ethernet also */
    dest = (const struct eth_addr *)&ethbroadcast;
    /* multicast destination IP address? */
  } else if (ip4_addr_ismulticast(ipaddr)) {
    /* Hash IP multicast address to MAC address.*/
    mcastaddr.addr[0] = LL_IP4_MULTICAST_ADDR_0;
    mcastaddr.addr[1] = LL_IP4_MULTICAST_ADDR_1;
    mcastaddr.addr[2] = LL_IP4_MULTICAST_ADDR_2;
    mcastaddr.addr[3] = ip4_addr2(ipaddr) & 0x7f;
    mcastaddr.addr[4] = ip4_addr3(ipaddr);
    mcastaddr.addr[5] = ip4_addr4(ipaddr);
    /* destination Ethernet address is multicast */
    dest = &mcastaddr;
    /* unicast destination IP address? */
  } else {
    netif_addr_idx_t i;
    /* outside local network? if so, this can neither be a global broadcast nor
       a subnet broadcast. */
    if (!ip4_addr_netcmp(ipaddr, netif_ip4_addr(netif), netif_ip4_netmask(netif)) &&
        !ip4_addr_islinklocal(ipaddr)) {
#if LWIP_AUTOIP
      struct ip_hdr *iphdr = LWIP_ALIGNMENT_CAST(struct ip_hdr *, q->payload);
      /* According to RFC 3297, chapter 2.6.2 (Forwarding Rules), a packet with
         a link-local source address must always be "directly to its destination
         on the same physical link. The host MUST NOT send the packet to any
         router for forwarding". */
      if (!ip4_addr_islinklocal(&iphdr->src))
#endif /* LWIP_AUTOIP */
      {
#ifdef LWIP_HOOK_ETHARP_GET_GW
        /* For advanced routing, a single default gateway might not be enough, so get
           the IP address of the gateway to handle the current destination address. */
        dst_addr = LWIP_HOOK_ETHARP_GET_GW(netif, ipaddr);
        if (dst_addr == NULL)
#endif /* LWIP_HOOK_ETHARP_GET_GW */
        {
          /* interface has default gateway? */
          if (!ip4_addr_isany_val(*netif_ip4_gw(netif))) {
            /* send to hardware address of default gateway IP address */
            dst_addr = netif_ip4_gw(netif);
            /* no default gateway available */
          } else {
            /* no route to destination error (default gateway missing) */
            return ERR_RTE;
          }
        }
      }
    }
#if LWIP_NETIF_HWADDRHINT
    if (netif->hints != NULL) {
      /* per-pcb cached entry was given */
      netif_addr_idx_t etharp_cached_entry = netif->hints->addr_hint;
      if (etharp_cached_entry < ARP_TABLE_SIZE) {
#endif /* LWIP_NETIF_HWADDRHINT */
        if ((arp_table[etharp_cached_entry].state >= ETHARP_STATE_STABLE) &&
#if ETHARP_TABLE_MATCH_NETIF
            (arp_table[etharp_cached_entry].netif == netif) &&
#endif
            (ip4_addr_cmp(dst_addr, &arp_table[etharp_cached_entry].ipaddr))) {
          /* the per-pcb-cached entry is stable and the right one! */
          ETHARP_STATS_INC(etharp.cachehit);
          return etharp_output_to_arp_index(netif, q, etharp_cached_entry);
        }
#if LWIP_NETIF_HWADDRHINT
      }
    }
#endif /* LWIP_NETIF_HWADDRHINT */

    /* find stable entry: do this here since this is a critical path for
       throughput and etharp_find_entry() is kind of slow */
    for (i = 0; i < ARP_TABLE_SIZE; i++) {
      if ((arp_table[i].state >= ETHARP_STATE_STABLE) &&
#if ETHARP_TABLE_MATCH_NETIF
          (arp_table[i].netif == netif) &&
#endif
          (ip4_addr_cmp(dst_addr, &arp_table[i].ipaddr))) {
        /* found an existing, stable entry */
        ETHARP_SET_ADDRHINT(netif, i);
        return etharp_output_to_arp_index(netif, q, i);
      }
    }
    /* no stable entry found, use the (slower) query function:
       queue on destination Ethernet address belonging to ipaddr */
    return etharp_query(netif, dst_addr, q);
  }

  /* continuation for multicast/broadcast destinations */
  /* obtain source Ethernet address of the given interface */
  /* send packet directly on the link */
  return ethernet_output(netif, q, (struct eth_addr *)(netif->hwaddr), dest, ETHTYPE_IP);
}
