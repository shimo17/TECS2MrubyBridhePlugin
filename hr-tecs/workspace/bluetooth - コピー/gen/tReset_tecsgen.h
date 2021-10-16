/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tReset_TECSGEN_H
#define tReset_TECSGEN_H

/*
 * celltype          :  tReset
 * global name       :  tReset
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sMotor_tecsgen.h"
#include "sReset_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tReset_INIB {
    /* call port #_TCP_# */
    struct tag_sMotor_VDES *const*cMotor;
    int_t n_cMotor;
    /* call port #_NEP_# */ 
}  tReset_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tReset_CB_tab           tReset_INIB_tab
#define tReset_SINGLE_CELL_CB   tReset_SINGLE_CELL_INIB
#define tReset_CB               tReset_INIB
#define tag_tReset_CB           tag_tReset_INIB

extern tReset_CB  tReset_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tReset_INIB *tReset_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sReset */
void         tReset_eReset_reset(tReset_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tReset_ID_BASE              (1)  /* ID �Υ١���  #_NIDB_# */
#define tReset_N_CELL               (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tReset_VALID_IDX(IDX) (1)

/* �ƤӸ�������礭��������ޥ��� #_NCPA_# */
#define N_CP_cMotor(p_that)  ((p_that)->n_cMotor)
#define NCP_cMotor           (N_CP_cMotor(p_cellcb))

/* ����CB������ޥ��� #_GCB_# */
#define tReset_GET_CELLCB(idx) (idx)
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tReset_cMotor_getType( p_that, subscript ) \
	  (p_that)->cMotor[subscript]->VMT->getType__T( \
	   (p_that)->cMotor[subscript] )
#define tReset_cMotor_getCounts( p_that, subscript ) \
	  (p_that)->cMotor[subscript]->VMT->getCounts__T( \
	   (p_that)->cMotor[subscript] )
#define tReset_cMotor_getPower( p_that, subscript ) \
	  (p_that)->cMotor[subscript]->VMT->getPower__T( \
	   (p_that)->cMotor[subscript] )
#define tReset_cMotor_resetCounts( p_that, subscript ) \
	  (p_that)->cMotor[subscript]->VMT->resetCounts__T( \
	   (p_that)->cMotor[subscript] )
#define tReset_cMotor_setPower( p_that, subscript, power ) \
	  (p_that)->cMotor[subscript]->VMT->setPower__T( \
	   (p_that)->cMotor[subscript], (power) )
#define tReset_cMotor_stop( p_that, subscript, brake ) \
	  (p_that)->cMotor[subscript]->VMT->stop__T( \
	   (p_that)->cMotor[subscript], (brake) )
#define tReset_cMotor_rotate( p_that, subscript, degrees, speed_abs, blocking ) \
	  (p_that)->cMotor[subscript]->VMT->rotate__T( \
	   (p_that)->cMotor[subscript], (degrees), (speed_abs), (blocking) )
#define tReset_cMotor_initializePort( p_that, subscript, type ) \
	  (p_that)->cMotor[subscript]->VMT->initializePort__T( \
	   (p_that)->cMotor[subscript], (type) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tReset_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tReset_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tReset_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tReset_IDX

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cMotor_getType( subscript ) \
          tReset_cMotor_getType( p_cellcb, subscript )
#define cMotor_getCounts( subscript ) \
          tReset_cMotor_getCounts( p_cellcb, subscript )
#define cMotor_getPower( subscript ) \
          tReset_cMotor_getPower( p_cellcb, subscript )
#define cMotor_resetCounts( subscript ) \
          tReset_cMotor_resetCounts( p_cellcb, subscript )
#define cMotor_setPower( subscript, power ) \
          tReset_cMotor_setPower( p_cellcb, subscript, power )
#define cMotor_stop( subscript, brake ) \
          tReset_cMotor_stop( p_cellcb, subscript, brake )
#define cMotor_rotate( subscript, degrees, speed_abs, blocking ) \
          tReset_cMotor_rotate( p_cellcb, subscript, degrees, speed_abs, blocking )
#define cMotor_initializePort( subscript, type ) \
          tReset_cMotor_initializePort( p_cellcb, subscript, type )




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eReset_reset     tReset_eReset_reset

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tReset_N_CELL; (i)++ ){ \
       (p_cb) = &tReset_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tReset_TECSGENH */
