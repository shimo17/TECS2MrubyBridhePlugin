/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nMruby_tMrubyTaskBody_TECSGEN_H
#define nMruby_tMrubyTaskBody_TECSGEN_H

/*
 * celltype          :  tMrubyTaskBody
 * global name       :  nMruby_tMrubyTaskBody
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
#include "sTaskBody_tecsgen.h"
#include "nMruby_sMrubyVM_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nMruby_tMrubyTaskBody_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
}  nMruby_tMrubyTaskBody_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nMruby_tMrubyTaskBody_CB_tab           nMruby_tMrubyTaskBody_INIB_tab
#define nMruby_tMrubyTaskBody_SINGLE_CELL_CB   nMruby_tMrubyTaskBody_SINGLE_CELL_INIB
#define nMruby_tMrubyTaskBody_CB               nMruby_tMrubyTaskBody_INIB
#define tag_nMruby_tMrubyTaskBody_CB           tag_nMruby_tMrubyTaskBody_INIB

extern nMruby_tMrubyTaskBody_CB  nMruby_tMrubyTaskBody_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_nMruby_tMrubyTaskBody_INIB *nMruby_tMrubyTaskBody_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sTaskBody */
void         nMruby_tMrubyTaskBody_eMrubyBody_main(nMruby_tMrubyTaskBody_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nMruby_tMrubyTaskBody_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "nMruby_tMrubyVM_tecsgen.h"
#ifdef  nMruby_tMrubyTaskBody_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nMruby_tMrubyTaskBody_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tMrubyTaskBody_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nMruby_tMrubyTaskBody_N_CELL        (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nMruby_tMrubyTaskBody_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define nMruby_tMrubyTaskBody_GET_CELLCB(idx) (idx)
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nMruby_tMrubyTaskBody_cMrubyVM_initialize( p_that ) \
	  nMruby_tMrubyVM_eMrubyVM_initialize( \
	   &nMruby_tMrubyVM_CB_tab[0] )
#define nMruby_tMrubyTaskBody_cMrubyVM_run( p_that ) \
	  nMruby_tMrubyVM_eMrubyVM_run( \
	   &nMruby_tMrubyVM_CB_tab[0] )
#define nMruby_tMrubyTaskBody_cMrubyVM_funcall( p_that, name ) \
	  nMruby_tMrubyVM_eMrubyVM_funcall( \
	   &nMruby_tMrubyVM_CB_tab[0], (name) )
#define nMruby_tMrubyTaskBody_cMrubyVM_finalize( p_that ) \
	  nMruby_tMrubyVM_eMrubyVM_finalize( \
	   &nMruby_tMrubyVM_CB_tab[0] )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eMrubyBody */
void           nMruby_tMrubyTaskBody_eMrubyBody_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  nMruby_tMrubyTaskBody_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tMrubyTaskBody_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nMruby_tMrubyTaskBody_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nMruby_tMrubyTaskBody_IDX

#define tMrubyTaskBody_IDX  nMruby_tMrubyTaskBody_IDX
/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cMrubyVM_initialize( ) \
          ((void)p_cellcb, nMruby_tMrubyTaskBody_cMrubyVM_initialize( p_cellcb ))
#define cMrubyVM_run( ) \
          ((void)p_cellcb, nMruby_tMrubyTaskBody_cMrubyVM_run( p_cellcb ))
#define cMrubyVM_funcall( name ) \
          ((void)p_cellcb, nMruby_tMrubyTaskBody_cMrubyVM_funcall( p_cellcb, name ))
#define cMrubyVM_finalize( ) \
          ((void)p_cellcb, nMruby_tMrubyTaskBody_cMrubyVM_finalize( p_cellcb ))




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eMrubyBody_main  nMruby_tMrubyTaskBody_eMrubyBody_main

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nMruby_tMrubyTaskBody_N_CELL; (i)++ ){ \
       (p_cb) = &nMruby_tMrubyTaskBody_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tMrubyTaskBody_TECSGENH */
