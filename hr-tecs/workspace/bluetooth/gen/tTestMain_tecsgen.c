/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tTestMain_tecsgen.h"
#include "tTestMain_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eBody : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eBody : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eBody : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tTestMain_INIB tTestMain_INIB_tab[] = {
    /* cell: tTestMain_CB_tab[0]:  TestMain id=1 */
    {
        /* entry port #_EP_# */ 
    },
};

/* �������ǥ�������ץ� #_EPD_# */
/* eBody : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tTestMain_CB_initialize()
{
    tTestMain_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
