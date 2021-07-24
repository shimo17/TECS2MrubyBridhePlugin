/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tCyclicHandler_TECSGEN_H
#define tCyclicHandler_TECSGEN_H

/*
 * celltype          :  tCyclicHandler
 * global name       :  tCyclicHandler
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
#include "sCyclic_tecsgen.h"
#include "siHandlerBody_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tCyclicHandler_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    ID             id;
}  tCyclicHandler_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tCyclicHandler_CB_tab           tCyclicHandler_INIB_tab
#define tCyclicHandler_SINGLE_CELL_CB   tCyclicHandler_SINGLE_CELL_INIB
#define tCyclicHandler_CB               tCyclicHandler_INIB
#define tag_tCyclicHandler_CB           tag_tCyclicHandler_INIB

extern tCyclicHandler_CB  tCyclicHandler_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tCyclicHandler_INIB *tCyclicHandler_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sCyclic */
Inline ER           tCyclicHandler_eCyclic_start(tCyclicHandler_IDX idx);
Inline ER           tCyclicHandler_eCyclic_stop(tCyclicHandler_IDX idx);
Inline ER           tCyclicHandler_eCyclic_refer(tCyclicHandler_IDX idx, T_RCYC* pk_cyclicHandlerStatus);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCyclicHandler_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tRiteVMSchedulerMain_tecsgen.h"
#ifdef  tCyclicHandler_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCyclicHandler_CB_TYPE_ONLY */
#define tCyclicHandler_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define tCyclicHandler_N_CELL        (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tCyclicHandler_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tCyclicHandler_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define tCyclicHandler_ATTR_id( p_that )	((p_that)->id)

#define tCyclicHandler_GET_id(p_that)	((p_that)->id)



 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tCyclicHandler_ciBody_main( p_that ) \
	  tRiteVMSchedulerMain_eiBody_main( \
	   &tRiteVMSchedulerMain_CB_tab[0] )

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tCyclicHandler_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tCyclicHandler_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tCyclicHandler_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tCyclicHandler_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_id              tCyclicHandler_ATTR_id( p_cellcb )


/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define ciBody_main( ) \
          ((void)p_cellcb, tCyclicHandler_ciBody_main( p_cellcb ))




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eCyclic_start    tCyclicHandler_eCyclic_start
#define eCyclic_stop     tCyclicHandler_eCyclic_stop
#define eCyclic_refer    tCyclicHandler_eCyclic_refer

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCyclicHandler_N_CELL; (i)++ ){ \
       (p_cb) = &tCyclicHandler_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#ifndef TOPPERS_MACRO_ONLY

/* inline �إå��� include #_INL_# */
#include "tCyclicHandler_inline.h"

#endif /* TOPPERS_MACRO_ONLY */

#ifdef TOPPERS_CB_TYPE_ONLY

/* inline �Τ���� undef #_UDF_# */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef tCyclicHandler_IDX
#undef FOREACH_CELL
#undef END_FOREACH_CELL
#undef INITIALIZE_CB
#undef SET_CB_INIB_POINTER
#undef ATTR_id
#undef tCyclicHandler_ATTR_id
#undef tCyclicHandler_GET_id
#undef ATTR_attribute
#undef tCyclicHandler_ATTR_attribute
#undef tCyclicHandler_GET_attribute
#undef ATTR_cyclicTime
#undef tCyclicHandler_ATTR_cyclicTime
#undef tCyclicHandler_GET_cyclicTime
#undef ATTR_cyclicPhase
#undef tCyclicHandler_ATTR_cyclicPhase
#undef tCyclicHandler_GET_cyclicPhase
#undef ATTR_accessPattern
#undef tCyclicHandler_ATTR_accessPattern
#undef tCyclicHandler_GET_accessPattern
#undef tCyclicHandler_ciBody_main
#undef ciBody_main
#undef eCyclic_start
#undef eCyclic_stop
#undef eCyclic_refer
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tCyclicHandler_TECSGENH */
