/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tTask_tecsgen.h"
#include "tTask_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eTask : omitted by entry port optimize */

/* eiTask : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tTask_INIB tTask_INIB_tab[] = {
    /* cell: tTask_CB_tab[0]:  Task id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TSKID_tTask_Task,                        /* id */
    },
};

/* �������ǥ�������ץ� #_EPD_# */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tTask_CB_initialize()
{
    tTask_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
