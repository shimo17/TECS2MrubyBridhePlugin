/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nMruby_tMrubyTaskBody_tecsgen.h"
#include "nMruby_tMrubyTaskBody_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eMrubyBody */
struct tag_nMruby_tMrubyTaskBody_eMrubyBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tMrubyTaskBody_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eMrubyBody */
void           nMruby_tMrubyTaskBody_eMrubyBody_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_nMruby_tMrubyTaskBody_eMrubyBody_DES *lepd
        = (struct tag_nMruby_tMrubyTaskBody_eMrubyBody_DES *)epd;
    nMruby_tMrubyTaskBody_eMrubyBody_main( lepd->idx );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eMrubyBody */
const struct tag_sTaskBody_VMT nMruby_tMrubyTaskBody_eMrubyBody_MT_ = {
    nMruby_tMrubyTaskBody_eMrubyBody_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
nMruby_tMrubyTaskBody_INIB nMruby_tMrubyTaskBody_INIB_tab[] = {
    /* cell: nMruby_tMrubyTaskBody_CB_tab[0]:  Mruby_MrubyTaskBody id=1 */
    {
        /* entry port #_EP_# */ 
    },
};

extern const struct tag_sTaskBody_VMT nMruby_tMrubyTaskBody_eMrubyBody_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_nMruby_tMrubyTaskBody_eMrubyBody_DES rDomainEV3_Mruby_MrubyTaskBody_eMrubyBody_des;
const struct tag_nMruby_tMrubyTaskBody_eMrubyBody_DES rDomainEV3_Mruby_MrubyTaskBody_eMrubyBody_des = {
    &nMruby_tMrubyTaskBody_eMrubyBody_MT_,
    &nMruby_tMrubyTaskBody_INIB_tab[0],   /* INIB */
};
/* CB ����������� #_CIC_# */
void
nMruby_tMrubyTaskBody_CB_initialize()
{
    nMruby_tMrubyTaskBody_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
