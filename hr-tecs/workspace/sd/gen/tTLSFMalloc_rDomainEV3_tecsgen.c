/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tTLSFMalloc_tecsgen.h"
#include "tTLSFMalloc_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eMalloc : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eMalloc : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eMalloc : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
uint64_t tTLSFMalloc_Mruby_TLSFMalloc_CB_pool_INIT[131072];
/* ���� INIB #_INIB_# */
tTLSFMalloc_INIB tTLSFMalloc_INIB_tab[] = {
    /* cell: tTLSFMalloc_CB_tab[0]:  Mruby_TLSFMalloc id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1048576,                                 /* memoryPoolSize */
        tTLSFMalloc_Mruby_TLSFMalloc_CB_pool_INIT, /* pool */
    },
};

/* �������ǥ�������ץ� #_EPD_# */
/* eMalloc : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tTLSFMalloc_CB_initialize()
{
    tTLSFMalloc_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
