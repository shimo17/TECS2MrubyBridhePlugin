/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tDataqueuePeer_tecsgen.h"
#include "tDataqueuePeer_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eDataqueue */
struct tag_tDataqueuePeer_eDataqueue_DES {
    const struct tag_sDataqueue_VMT *vmt;
    tDataqueuePeer_IDX  idx;
};

/* eiDataqueue : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eDataqueue */
ER             tDataqueuePeer_eDataqueue_send_skel( const struct tag_sDataqueue_VDES *epd, intptr_t data)
{
    struct tag_tDataqueuePeer_eDataqueue_DES *lepd
        = (struct tag_tDataqueuePeer_eDataqueue_DES *)epd;
    return tDataqueuePeer_eDataqueue_send( lepd->idx, data );
}
ER             tDataqueuePeer_eDataqueue_sendPolling_skel( const struct tag_sDataqueue_VDES *epd, intptr_t data)
{
    struct tag_tDataqueuePeer_eDataqueue_DES *lepd
        = (struct tag_tDataqueuePeer_eDataqueue_DES *)epd;
    return tDataqueuePeer_eDataqueue_sendPolling( lepd->idx, data );
}
ER             tDataqueuePeer_eDataqueue_sendTimeout_skel( const struct tag_sDataqueue_VDES *epd, intptr_t data, TMO timeout)
{
    struct tag_tDataqueuePeer_eDataqueue_DES *lepd
        = (struct tag_tDataqueuePeer_eDataqueue_DES *)epd;
    return tDataqueuePeer_eDataqueue_sendTimeout( lepd->idx, data, timeout );
}
ER             tDataqueuePeer_eDataqueue_sendForce_skel( const struct tag_sDataqueue_VDES *epd, intptr_t data)
{
    struct tag_tDataqueuePeer_eDataqueue_DES *lepd
        = (struct tag_tDataqueuePeer_eDataqueue_DES *)epd;
    return tDataqueuePeer_eDataqueue_sendForce( lepd->idx, data );
}
ER             tDataqueuePeer_eDataqueue_receive_skel( const struct tag_sDataqueue_VDES *epd, intptr_t* p_data)
{
    struct tag_tDataqueuePeer_eDataqueue_DES *lepd
        = (struct tag_tDataqueuePeer_eDataqueue_DES *)epd;
    return tDataqueuePeer_eDataqueue_receive( lepd->idx, p_data );
}
ER             tDataqueuePeer_eDataqueue_receivePolling_skel( const struct tag_sDataqueue_VDES *epd, intptr_t* p_data)
{
    struct tag_tDataqueuePeer_eDataqueue_DES *lepd
        = (struct tag_tDataqueuePeer_eDataqueue_DES *)epd;
    return tDataqueuePeer_eDataqueue_receivePolling( lepd->idx, p_data );
}
ER             tDataqueuePeer_eDataqueue_receiveTimeout_skel( const struct tag_sDataqueue_VDES *epd, intptr_t* p_data, TMO timeout)
{
    struct tag_tDataqueuePeer_eDataqueue_DES *lepd
        = (struct tag_tDataqueuePeer_eDataqueue_DES *)epd;
    return tDataqueuePeer_eDataqueue_receiveTimeout( lepd->idx, p_data, timeout );
}
ER             tDataqueuePeer_eDataqueue_initialize_skel( const struct tag_sDataqueue_VDES *epd)
{
    struct tag_tDataqueuePeer_eDataqueue_DES *lepd
        = (struct tag_tDataqueuePeer_eDataqueue_DES *)epd;
    return tDataqueuePeer_eDataqueue_initialize( lepd->idx );
}
ER             tDataqueuePeer_eDataqueue_refer_skel( const struct tag_sDataqueue_VDES *epd, T_RDTQ* pk_dataqueue_status)
{
    struct tag_tDataqueuePeer_eDataqueue_DES *lepd
        = (struct tag_tDataqueuePeer_eDataqueue_DES *)epd;
    return tDataqueuePeer_eDataqueue_refer( lepd->idx, pk_dataqueue_status );
}
/* eiDataqueue : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eDataqueue */
const struct tag_sDataqueue_VMT tDataqueuePeer_eDataqueue_MT_ = {
    tDataqueuePeer_eDataqueue_send_skel,
    tDataqueuePeer_eDataqueue_sendPolling_skel,
    tDataqueuePeer_eDataqueue_sendTimeout_skel,
    tDataqueuePeer_eDataqueue_sendForce_skel,
    tDataqueuePeer_eDataqueue_receive_skel,
    tDataqueuePeer_eDataqueue_receivePolling_skel,
    tDataqueuePeer_eDataqueue_receiveTimeout_skel,
    tDataqueuePeer_eDataqueue_initialize_skel,
    tDataqueuePeer_eDataqueue_refer_skel,
};
/* eiDataqueue : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tDataqueuePeer_INIB tDataqueuePeer_INIB_tab[] = {
    /* cell: tDataqueuePeer_CB_tab[0]:  RPCSharedChannel_Channel_Dataqueue_Peer id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TA_NULL,                                 /* attribute */
        64,                                      /* count */
        NULL,                                    /* pdqmb */
    },
};

/* セル CB #_CB_# */
struct tag_tDataqueuePeer_CB tDataqueuePeer_CB_tab[] = {
    /* cell: tDataqueuePeer_CB_tab[0]:  RPCSharedChannel_Channel_Dataqueue_Peer id=1 */
    {
        &tDataqueuePeer_INIB_tab[0],             /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        {},                                      /* fd */
        false,                                   /* b_init */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tDataqueuePeer_eDataqueue_DES rRegion_RPCSharedChannel_Channel_Dataqueue_Peer_eDataqueue_des;
const struct tag_tDataqueuePeer_eDataqueue_DES rRegion_RPCSharedChannel_Channel_Dataqueue_Peer_eDataqueue_des = {
    &tDataqueuePeer_eDataqueue_MT_,
    &tDataqueuePeer_CB_tab[0],     /* CB */
};
/* eiDataqueue : omitted by entry port optimize */
