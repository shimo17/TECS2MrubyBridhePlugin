/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nMruby_tMrubyVM_tecsgen.h"
#include "nMruby_tMrubyVM_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eMrubyVM : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eMrubyVM : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eMrubyVM : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
nMruby_tMrubyVM_INIB nMruby_tMrubyVM_INIB_tab[] = {
    /* cell: nMruby_tMrubyVM_CB_tab[0]:  Mruby_MrubyVM id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        rDomainEV3_Mruby_MrubyVM_irep,           /* irep */
    },
};

/* ���� CB #_CB_# */
struct tag_nMruby_tMrubyVM_CB nMruby_tMrubyVM_CB_tab[1];
/* �������ǥ�������ץ� #_EPD_# */
/* eMrubyVM : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
nMruby_tMrubyVM_CB_initialize()
{
    nMruby_tMrubyVM_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
