/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tRiteVMSchedulerMain_tecsgen.h"
#include "tRiteVMSchedulerMain_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eiBody : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eiBody : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eiBody : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tRiteVMSchedulerMain_INIB tRiteVMSchedulerMain_INIB_tab[] = {
    /* cell: tRiteVMSchedulerMain_CB_tab[0]:  RiteVMScheduler_RiteVMSchedulerMain id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        RITEVM_PRIORITY,                         /* priority */
    },
};

/* �������ǥ�������ץ� #_EPD_# */
/* eiBody : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tRiteVMSchedulerMain_CB_initialize()
{
    tRiteVMSchedulerMain_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
