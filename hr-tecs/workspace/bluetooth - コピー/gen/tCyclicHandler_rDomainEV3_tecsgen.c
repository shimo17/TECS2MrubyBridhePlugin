/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tCyclicHandler_tecsgen.h"
#include "tCyclicHandler_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eCyclic : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eCyclic : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eCyclic : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tCyclicHandler_INIB tCyclicHandler_INIB_tab[] = {
    /* cell: tCyclicHandler_CB_tab[0]:  RiteVMScheduler_CyclicHandler id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        CYCHDLRID_tCyclicHandler_RiteVMScheduler_CyclicHandler, /* id */
    },
};

/* �������ǥ�������ץ� #_EPD_# */
/* eCyclic : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tCyclicHandler_CB_initialize()
{
    tCyclicHandler_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
