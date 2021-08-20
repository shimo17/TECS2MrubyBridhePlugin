/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECS2Mruby_tsMcall_TECSGEN_H
#define nTECS2Mruby_tsMcall_TECSGEN_H

/*
 * celltype          :  tsMcall
 * global name       :  nTECS2Mruby_tsMcall
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
#include "sMcall_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nTECS2Mruby_tsMcall_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
}  nTECS2Mruby_tsMcall_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nTECS2Mruby_tsMcall_CB_tab           nTECS2Mruby_tsMcall_INIB_tab
#define nTECS2Mruby_tsMcall_SINGLE_CELL_CB   nTECS2Mruby_tsMcall_SINGLE_CELL_INIB
#define nTECS2Mruby_tsMcall_CB               nTECS2Mruby_tsMcall_INIB
#define tag_nTECS2Mruby_tsMcall_CB           tag_nTECS2Mruby_tsMcall_INIB

extern nTECS2Mruby_tsMcall_CB  nTECS2Mruby_tsMcall_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_nTECS2Mruby_tsMcall_INIB *nTECS2Mruby_tsMcall_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sMcall */
void         nTECS2Mruby_tsMcall_eEnt_mcall_lcd(nTECS2Mruby_tsMcall_IDX idx, const char* x);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nTECS2Mruby_tsMcall_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTECS2MrubyVM_tecsgen.h"
#ifdef  nTECS2Mruby_tsMcall_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nTECS2Mruby_tsMcall_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECS2Mruby_tsMcall_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nTECS2Mruby_tsMcall_N_CELL        (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nTECS2Mruby_tsMcall_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define nTECS2Mruby_tsMcall_GET_CELLCB(idx) (idx)
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nTECS2Mruby_tsMcall_cMethodCall_init( p_that ) \
	  tTECS2MrubyVM_eTECS2MrubyVM_init( \
	   &tTECS2MrubyVM_CB_tab[0] )
#define nTECS2Mruby_tsMcall_cMethodCall_get_mrb( p_that ) \
	  tTECS2MrubyVM_eTECS2MrubyVM_get_mrb( \
	   &tTECS2MrubyVM_CB_tab[0] )
#define nTECS2Mruby_tsMcall_cMethodCall_fin( p_that ) \
	  tTECS2MrubyVM_eTECS2MrubyVM_fin( \
	   &tTECS2MrubyVM_CB_tab[0] )

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
#define VALID_IDX(IDX)  nTECS2Mruby_tsMcall_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nTECS2Mruby_tsMcall_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nTECS2Mruby_tsMcall_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nTECS2Mruby_tsMcall_IDX

#define tsMcall_IDX  nTECS2Mruby_tsMcall_IDX
/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cMethodCall_init( ) \
          ((void)p_cellcb, nTECS2Mruby_tsMcall_cMethodCall_init( p_cellcb ))
#define cMethodCall_get_mrb( ) \
          ((void)p_cellcb, nTECS2Mruby_tsMcall_cMethodCall_get_mrb( p_cellcb ))
#define cMethodCall_fin( ) \
          ((void)p_cellcb, nTECS2Mruby_tsMcall_cMethodCall_fin( p_cellcb ))




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eEnt_mcall_lcd   nTECS2Mruby_tsMcall_eEnt_mcall_lcd

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECS2Mruby_tsMcall_N_CELL; (i)++ ){ \
       (p_cb) = &nTECS2Mruby_tsMcall_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECS2Mruby_tsMcall_TECSGENH */
