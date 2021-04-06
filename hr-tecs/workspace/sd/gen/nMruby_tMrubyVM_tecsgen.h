/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nMruby_tMrubyVM_TECSGEN_H
#define nMruby_tMrubyVM_TECSGEN_H

/*
 * celltype          :  tMrubyVM
 * global name       :  nMruby_tMrubyVM
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  true
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "nMruby_sMrubyVM_tecsgen.h"
#include "nMruby_sInitializeBridge_tecsgen.h"
#include "sMalloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nMruby_tMrubyVM_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    const uint8_t* irep;
}  nMruby_tMrubyVM_INIB;
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_nMruby_tMrubyVM_CB {
    nMruby_tMrubyVM_INIB  *_inib;
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    mrb_irep*      var_irep;
    mrb_state*     mrb;
    struct RProc*  rproc;
}  nMruby_tMrubyVM_CB;
extern nMruby_tMrubyVM_CB  nMruby_tMrubyVM_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_nMruby_tMrubyVM_CB *nMruby_tMrubyVM_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* nMruby_sMrubyVM */
bool_t       nMruby_tMrubyVM_eMrubyVM_initialize(nMruby_tMrubyVM_IDX idx);
bool_t       nMruby_tMrubyVM_eMrubyVM_run(nMruby_tMrubyVM_IDX idx);
void         nMruby_tMrubyVM_eMrubyVM_funcall(nMruby_tMrubyVM_IDX idx, const char_t* name);
void         nMruby_tMrubyVM_eMrubyVM_finalize(nMruby_tMrubyVM_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nMruby_tMrubyVM_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "nMruby_tTECSInitializer_tecsgen.h"
#include "tTLSFMalloc_tecsgen.h"
#ifdef  nMruby_tMrubyVM_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nMruby_tMrubyVM_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tMrubyVM_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nMruby_tMrubyVM_N_CELL        (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nMruby_tMrubyVM_VALID_IDX(IDX) (1)

/* optional �ƤӸ���ƥ��Ȥ���ޥ��� #_TOCP_# */
#define nMruby_tMrubyVM_is_cInit_joined(p_that) \
	  (1)

/* ����CB������ޥ��� #_GCB_# */
#define nMruby_tMrubyVM_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define nMruby_tMrubyVM_ATTR_irep( p_that )	((p_that)->_inib->irep)

#define nMruby_tMrubyVM_GET_irep(p_that)	((p_that)->_inib->irep)


/* var ���������ޥ��� #_VAM_# */
#define nMruby_tMrubyVM_VAR_var_irep(p_that)	((p_that)->var_irep)
#define nMruby_tMrubyVM_VAR_mrb(p_that)	((p_that)->mrb)
#define nMruby_tMrubyVM_VAR_rproc(p_that)	((p_that)->rproc)

#define nMruby_tMrubyVM_GET_var_irep(p_that)	((p_that)->var_irep)
#define nMruby_tMrubyVM_SET_var_irep(p_that,val)	((p_that)->var_irep=(val))
#define nMruby_tMrubyVM_GET_mrb(p_that)	((p_that)->mrb)
#define nMruby_tMrubyVM_SET_mrb(p_that,val)	((p_that)->mrb=(val))
#define nMruby_tMrubyVM_GET_rproc(p_that)	((p_that)->rproc)
#define nMruby_tMrubyVM_SET_rproc(p_that,val)	((p_that)->rproc=(val))

 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nMruby_tMrubyVM_cInit_initializeBridge( p_that, mrb ) \
	  nMruby_tTECSInitializer_eInitialize_initializeBridge( \
	   &nMruby_tTECSInitializer_CB_tab[0], (mrb) )
#define nMruby_tMrubyVM_cMalloc_initializeMemoryPool( p_that ) \
	  tTLSFMalloc_eMalloc_initializeMemoryPool( \
	   &tTLSFMalloc_CB_tab[0] )
#define nMruby_tMrubyVM_cMalloc_calloc( p_that, nelem, elem_size ) \
	  tTLSFMalloc_eMalloc_calloc( \
	   &tTLSFMalloc_CB_tab[0], (nelem), (elem_size) )
#define nMruby_tMrubyVM_cMalloc_malloc( p_that, size ) \
	  tTLSFMalloc_eMalloc_malloc( \
	   &tTLSFMalloc_CB_tab[0], (size) )
#define nMruby_tMrubyVM_cMalloc_realloc( p_that, ptr, new_size ) \
	  tTLSFMalloc_eMalloc_realloc( \
	   &tTLSFMalloc_CB_tab[0], (ptr), (new_size) )
#define nMruby_tMrubyVM_cMalloc_free( p_that, ptr ) \
	  tTLSFMalloc_eMalloc_free( \
	   &tTLSFMalloc_CB_tab[0], (ptr) )

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
#define VALID_IDX(IDX)  nMruby_tMrubyVM_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tMrubyVM_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nMruby_tMrubyVM_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nMruby_tMrubyVM_IDX

#define tMrubyVM_IDX  nMruby_tMrubyVM_IDX

/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_irep            nMruby_tMrubyVM_ATTR_irep( p_cellcb )


/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_var_irep         nMruby_tMrubyVM_VAR_var_irep( p_cellcb )
#define VAR_mrb              nMruby_tMrubyVM_VAR_mrb( p_cellcb )
#define VAR_rproc            nMruby_tMrubyVM_VAR_rproc( p_cellcb )

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cInit_initializeBridge( mrb ) \
          ((void)p_cellcb, nMruby_tMrubyVM_cInit_initializeBridge( p_cellcb, mrb ))
#define cMalloc_initializeMemoryPool( ) \
          ((void)p_cellcb, nMruby_tMrubyVM_cMalloc_initializeMemoryPool( p_cellcb ))
#define cMalloc_calloc( nelem, elem_size ) \
          ((void)p_cellcb, nMruby_tMrubyVM_cMalloc_calloc( p_cellcb, nelem, elem_size ))
#define cMalloc_malloc( size ) \
          ((void)p_cellcb, nMruby_tMrubyVM_cMalloc_malloc( p_cellcb, size ))
#define cMalloc_realloc( ptr, new_size ) \
          ((void)p_cellcb, nMruby_tMrubyVM_cMalloc_realloc( p_cellcb, ptr, new_size ))
#define cMalloc_free( ptr ) \
          ((void)p_cellcb, nMruby_tMrubyVM_cMalloc_free( p_cellcb, ptr ))



/* optional �ƤӸ���ƥ��Ȥ���ޥ����û�̷��� #_TOCPA_# */
#define is_cInit_joined()\
		nMruby_tMrubyVM_is_cInit_joined(p_cellcb)

/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eMrubyVM_initialize nMruby_tMrubyVM_eMrubyVM_initialize
#define eMrubyVM_run     nMruby_tMrubyVM_eMrubyVM_run
#define eMrubyVM_funcall nMruby_tMrubyVM_eMrubyVM_funcall
#define eMrubyVM_finalize nMruby_tMrubyVM_eMrubyVM_finalize

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nMruby_tMrubyVM_N_CELL; (i)++ ){ \
       (p_cb) = &nMruby_tMrubyVM_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &nMruby_tMrubyVM_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tMrubyVM_TECSGENH */
