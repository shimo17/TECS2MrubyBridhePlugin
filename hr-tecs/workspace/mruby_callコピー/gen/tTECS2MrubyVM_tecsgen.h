/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tTECS2MrubyVM_TECSGEN_H
#define tTECS2MrubyVM_TECSGEN_H

/*
 * celltype          :  tTECS2MrubyVM
 * global name       :  tTECS2MrubyVM
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
#include "sTECS2MrubyVM_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tTECS2MrubyVM_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    const uint8_t* irep;
}  tTECS2MrubyVM_INIB;
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_tTECS2MrubyVM_CB {
    tTECS2MrubyVM_INIB  *_inib;
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    mrb_state*     mrb;
    mrbc_context*  context;
}  tTECS2MrubyVM_CB;
extern tTECS2MrubyVM_CB  tTECS2MrubyVM_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_tTECS2MrubyVM_CB *tTECS2MrubyVM_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sTECS2MrubyVM */
void         tTECS2MrubyVM_eTECS2MrubyVM_init(tTECS2MrubyVM_IDX idx);
mrb_state*   tTECS2MrubyVM_eTECS2MrubyVM_get_mrb(tTECS2MrubyVM_IDX idx);
void         tTECS2MrubyVM_eTECS2MrubyVM_fin(tTECS2MrubyVM_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tTECS2MrubyVM_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define tTECS2MrubyVM_N_CELL        (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tTECS2MrubyVM_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tTECS2MrubyVM_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define tTECS2MrubyVM_ATTR_irep( p_that )	((p_that)->_inib->irep)

#define tTECS2MrubyVM_GET_irep(p_that)	((p_that)->_inib->irep)


/* var ���������ޥ��� #_VAM_# */
#define tTECS2MrubyVM_VAR_mrb(p_that)	((p_that)->mrb)
#define tTECS2MrubyVM_VAR_context(p_that)	((p_that)->context)

#define tTECS2MrubyVM_GET_mrb(p_that)	((p_that)->mrb)
#define tTECS2MrubyVM_SET_mrb(p_that,val)	((p_that)->mrb=(val))
#define tTECS2MrubyVM_GET_context(p_that)	((p_that)->context)
#define tTECS2MrubyVM_SET_context(p_that,val)	((p_that)->context=(val))

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
#define VALID_IDX(IDX)  tTECS2MrubyVM_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tTECS2MrubyVM_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tTECS2MrubyVM_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tTECS2MrubyVM_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_irep            tTECS2MrubyVM_ATTR_irep( p_cellcb )


/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_mrb              tTECS2MrubyVM_VAR_mrb( p_cellcb )
#define VAR_context          tTECS2MrubyVM_VAR_context( p_cellcb )




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eTECS2MrubyVM_init tTECS2MrubyVM_eTECS2MrubyVM_init
#define eTECS2MrubyVM_get_mrb tTECS2MrubyVM_eTECS2MrubyVM_get_mrb
#define eTECS2MrubyVM_fin tTECS2MrubyVM_eTECS2MrubyVM_fin

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTECS2MrubyVM_N_CELL; (i)++ ){ \
       (p_cb) = &tTECS2MrubyVM_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tTECS2MrubyVM_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTECS2MrubyVM_TECSGENH */
