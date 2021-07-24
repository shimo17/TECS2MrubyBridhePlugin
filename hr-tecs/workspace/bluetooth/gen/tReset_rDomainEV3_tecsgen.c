/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tReset_tecsgen.h"
#include "tReset_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eReset : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eReset : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eReset : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */
extern struct tag_sMotor_VDES rDomainEV3_MotorA_eMotor_des;
extern struct tag_sMotor_VDES rDomainEV3_MotorB_eMotor_des;
extern struct tag_sMotor_VDES rDomainEV3_MotorC_eMotor_des;
extern struct tag_sMotor_VDES rDomainEV3_MotorD_eMotor_des;

/* �ƤӸ����� #_CPA_# */
struct tag_sMotor_VDES * const rDomainEV3_Reset_cMotor[] = {
    &rDomainEV3_MotorA_eMotor_des,
    &rDomainEV3_MotorB_eMotor_des,
    &rDomainEV3_MotorC_eMotor_des,
    &rDomainEV3_MotorD_eMotor_des,
};

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tReset_INIB tReset_INIB_tab[] = {
    /* cell: tReset_CB_tab[0]:  Reset id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_Reset_cMotor,                 /* #_CCP3B_# */
        4,                                       /* length of cMotor (n_cMotor) #_CCP4_# */
        /* entry port #_EP_# */ 
    },
};

/* �������ǥ�������ץ� #_EPD_# */
/* eReset : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tReset_CB_initialize()
{
    tReset_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
