/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tTECS2MrubyVM_tecsgen.h"
#include "tTECS2MrubyVM_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eTECS2MrubyVM : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eTECS2MrubyVM : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eTECS2MrubyVM : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tTECS2MrubyVM_INIB tTECS2MrubyVM_INIB_tab[] = {
    /* cell: tTECS2MrubyVM_CB_tab[0]:  TECS2MrubyVM id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TECS2MrubyVM_irep,                       /* irep */
    },
};

/* ���� CB #_CB_# */
struct tag_tTECS2MrubyVM_CB tTECS2MrubyVM_CB_tab[1];
/* �������ǥ�������ץ� #_EPD_# */
/* eTECS2MrubyVM : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tTECS2MrubyVM_CB_initialize()
{
    tTECS2MrubyVM_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
