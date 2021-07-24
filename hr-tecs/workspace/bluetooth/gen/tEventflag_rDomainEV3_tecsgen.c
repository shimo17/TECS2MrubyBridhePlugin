/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tEventflag_tecsgen.h"
#include "tEventflag_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eEventflag */
struct tag_tEventflag_eEventflag_DES {
    const struct tag_sEventflag_VMT *vmt;
    tEventflag_IDX  idx;
};

/* eiEventflag : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eEventflag */
ER             tEventflag_eEventflag_set_skel( const struct tag_sEventflag_VDES *epd, FLGPTN setPattern)
{
    struct tag_tEventflag_eEventflag_DES *lepd
        = (struct tag_tEventflag_eEventflag_DES *)epd;
    return tEventflag_eEventflag_set( lepd->idx, setPattern );
}
ER             tEventflag_eEventflag_clear_skel( const struct tag_sEventflag_VDES *epd, FLGPTN clearPattern)
{
    struct tag_tEventflag_eEventflag_DES *lepd
        = (struct tag_tEventflag_eEventflag_DES *)epd;
    return tEventflag_eEventflag_clear( lepd->idx, clearPattern );
}
ER             tEventflag_eEventflag_wait_skel( const struct tag_sEventflag_VDES *epd, FLGPTN waitPattern, MODE waitFlagMode, FLGPTN* p_flagPattern)
{
    struct tag_tEventflag_eEventflag_DES *lepd
        = (struct tag_tEventflag_eEventflag_DES *)epd;
    return tEventflag_eEventflag_wait( lepd->idx, waitPattern, waitFlagMode, p_flagPattern );
}
ER             tEventflag_eEventflag_waitPolling_skel( const struct tag_sEventflag_VDES *epd, FLGPTN waitPattern, MODE waitFlagMode, FLGPTN* p_flagPattern)
{
    struct tag_tEventflag_eEventflag_DES *lepd
        = (struct tag_tEventflag_eEventflag_DES *)epd;
    return tEventflag_eEventflag_waitPolling( lepd->idx, waitPattern, waitFlagMode, p_flagPattern );
}
ER             tEventflag_eEventflag_waitTimeout_skel( const struct tag_sEventflag_VDES *epd, FLGPTN waitPattern, MODE waitFlagMode, FLGPTN* p_flagPattern, TMO timeout)
{
    struct tag_tEventflag_eEventflag_DES *lepd
        = (struct tag_tEventflag_eEventflag_DES *)epd;
    return tEventflag_eEventflag_waitTimeout( lepd->idx, waitPattern, waitFlagMode, p_flagPattern, timeout );
}
ER             tEventflag_eEventflag_initialize_skel( const struct tag_sEventflag_VDES *epd)
{
    struct tag_tEventflag_eEventflag_DES *lepd
        = (struct tag_tEventflag_eEventflag_DES *)epd;
    return tEventflag_eEventflag_initialize( lepd->idx );
}
ER             tEventflag_eEventflag_refer_skel( const struct tag_sEventflag_VDES *epd, T_RFLG* pk_eventflagStatus)
{
    struct tag_tEventflag_eEventflag_DES *lepd
        = (struct tag_tEventflag_eEventflag_DES *)epd;
    return tEventflag_eEventflag_refer( lepd->idx, pk_eventflagStatus );
}
/* eiEventflag : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eEventflag */
const struct tag_sEventflag_VMT tEventflag_eEventflag_MT_ = {
    tEventflag_eEventflag_set_skel,
    tEventflag_eEventflag_clear_skel,
    tEventflag_eEventflag_wait_skel,
    tEventflag_eEventflag_waitPolling_skel,
    tEventflag_eEventflag_waitTimeout_skel,
    tEventflag_eEventflag_initialize_skel,
    tEventflag_eEventflag_refer_skel,
};
/* eiEventflag : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */


/* �ƤӸ����� #_CPA_# */


/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tEventflag_INIB tEventflag_INIB_tab[] = {
    /* cell: tEventflag_CB_tab[0]:  Eventflag_begin id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        FLGID_tEventflag_Eventflag_begin,        /* id */
    },
    /* cell: tEventflag_CB_tab[1]:  Eventflag_end id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        FLGID_tEventflag_Eventflag_end,          /* id */
    },
};

extern const struct tag_sEventflag_VMT tEventflag_eEventflag_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_tEventflag_eEventflag_DES rDomainEV3_Eventflag_begin_eEventflag_des;
const struct tag_tEventflag_eEventflag_DES rDomainEV3_Eventflag_begin_eEventflag_des = {
    &tEventflag_eEventflag_MT_,
    &tEventflag_INIB_tab[0],   /* INIB */
};
/* eiEventflag : omitted by entry port optimize */
extern const struct tag_tEventflag_eEventflag_DES rDomainEV3_Eventflag_end_eEventflag_des;
const struct tag_tEventflag_eEventflag_DES rDomainEV3_Eventflag_end_eEventflag_des = {
    &tEventflag_eEventflag_MT_,
    &tEventflag_INIB_tab[1],   /* INIB */
};
/* eiEventflag : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tEventflag_CB_initialize()
{
    tEventflag_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
