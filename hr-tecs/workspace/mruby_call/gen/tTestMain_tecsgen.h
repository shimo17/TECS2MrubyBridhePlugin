/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tTestMain_TECSGEN_H
#define tTestMain_TECSGEN_H

/*
 * celltype          :  tTestMain
 * global name       :  tTestMain
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  0
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sTECS2MrubyVM_tecsgen.h"
#include "sShimo_tecsgen.h"
#include "sRyo_tecsgen.h"
#include "sTaskBody_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tTestMain_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
}  tTestMain_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tTestMain_CB_tab           tTestMain_INIB_tab
#define tTestMain_SINGLE_CELL_CB   tTestMain_SINGLE_CELL_INIB
#define tTestMain_CB               tTestMain_INIB
#define tag_tTestMain_CB           tag_tTestMain_INIB

extern tTestMain_CB  tTestMain_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tTestMain_INIB *tTestMain_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sTaskBody */
void         tTestMain_eBody_main(tTestMain_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTestMain_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTECS2MrubyVM_tecsgen.h"
#include "nTECS2Mruby_tsShimo_tecsgen.h"
#include "nTECS2Mruby_tsRyo_tecsgen.h"
#ifdef  tTestMain_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTestMain_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTestMain_ID_BASE           (1)  /* ID �Υ١���  #_NIDB_# */
#define tTestMain_N_CELL            (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tTestMain_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tTestMain_GET_CELLCB(idx) (idx)
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tTestMain_cTECS2MrubyVM_init( p_that ) \
	  tTECS2MrubyVM_eTECS2MrubyVM_init( \
	   &tTECS2MrubyVM_CB_tab[0] )
#define tTestMain_cTECS2MrubyVM_get_mrb( p_that ) \
	  tTECS2MrubyVM_eTECS2MrubyVM_get_mrb( \
	   &tTECS2MrubyVM_CB_tab[0] )
#define tTestMain_cTECS2MrubyVM_fin( p_that ) \
	  tTECS2MrubyVM_eTECS2MrubyVM_fin( \
	   &tTECS2MrubyVM_CB_tab[0] )
#define tTestMain_cBody2_mcall_lcd( p_that, x ) \
	  nTECS2Mruby_tsShimo_eEnt_mcall_lcd( \
	   &nTECS2Mruby_tsShimo_CB_tab[0], (x) )
#define tTestMain_cBody3_hyoji( p_that ) \
	  nTECS2Mruby_tsRyo_eEnt_hyoji( \
	   &nTECS2Mruby_tsRyo_CB_tab[0] )

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
#define VALID_IDX(IDX)  tTestMain_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tTestMain_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tTestMain_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tTestMain_IDX

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cTECS2MrubyVM_init( ) \
          ((void)p_cellcb, tTestMain_cTECS2MrubyVM_init( p_cellcb ))
#define cTECS2MrubyVM_get_mrb( ) \
          ((void)p_cellcb, tTestMain_cTECS2MrubyVM_get_mrb( p_cellcb ))
#define cTECS2MrubyVM_fin( ) \
          ((void)p_cellcb, tTestMain_cTECS2MrubyVM_fin( p_cellcb ))
#define cBody2_mcall_lcd( x ) \
          ((void)p_cellcb, tTestMain_cBody2_mcall_lcd( p_cellcb, x ))
#define cBody3_hyoji( ) \
          ((void)p_cellcb, tTestMain_cBody3_hyoji( p_cellcb ))




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eBody_main       tTestMain_eBody_main

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTestMain_N_CELL; (i)++ ){ \
       (p_cb) = &tTestMain_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTestMain_TECSGENH */
