/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nTECS2Mruby_tsMcall2_tecsgen.h"
#include "nTECS2Mruby_tsMcall2_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eEnt : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eEnt : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eEnt : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
nTECS2Mruby_tsMcall2_INIB nTECS2Mruby_tsMcall2_INIB_tab[] = {
    /* cell: nTECS2Mruby_tsMcall2_CB_tab[0]:  McallBridge2 id=1 */
    {
        /* entry port #_EP_# */ 
    },
};

/* �������ǥ�������ץ� #_EPD_# */
/* eEnt : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
nTECS2Mruby_tsMcall2_CB_initialize()
{
    nTECS2Mruby_tsMcall2_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
