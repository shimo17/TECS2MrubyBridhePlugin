/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tSemaphore_TECSGEN_H
#define tSemaphore_TECSGEN_H

/*
 * celltype          :  tSemaphore
 * global name       :  tSemaphore
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
#include "sSemaphore_tecsgen.h"
#include "siSemaphore_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tSemaphore_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    ID             id;
}  tSemaphore_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tSemaphore_CB_tab           tSemaphore_INIB_tab
#define tSemaphore_SINGLE_CELL_CB   tSemaphore_SINGLE_CELL_INIB
#define tSemaphore_CB               tSemaphore_INIB
#define tag_tSemaphore_CB           tag_tSemaphore_INIB

extern tSemaphore_CB  tSemaphore_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tSemaphore_INIB *tSemaphore_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sSemaphore */
Inline ER           tSemaphore_eSemaphore_signal(tSemaphore_IDX idx);
Inline ER           tSemaphore_eSemaphore_wait(tSemaphore_IDX idx);
Inline ER           tSemaphore_eSemaphore_waitPolling(tSemaphore_IDX idx);
Inline ER           tSemaphore_eSemaphore_waitTimeout(tSemaphore_IDX idx, TMO timeout);
Inline ER           tSemaphore_eSemaphore_initialize(tSemaphore_IDX idx);
Inline ER           tSemaphore_eSemaphore_refer(tSemaphore_IDX idx, T_RSEM* pk_semaphoreStatus);
/* siSemaphore */
Inline ER           tSemaphore_eiSemaphore_signal(tSemaphore_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#define tSemaphore_ID_BASE          (1)  /* ID �Υ١���  #_NIDB_# */
#define tSemaphore_N_CELL           (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tSemaphore_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tSemaphore_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define tSemaphore_ATTR_id( p_that )	((p_that)->id)

#define tSemaphore_GET_id(p_that)	((p_that)->id)



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
#define VALID_IDX(IDX)  tSemaphore_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tSemaphore_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tSemaphore_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tSemaphore_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_id              tSemaphore_ATTR_id( p_cellcb )





/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eSemaphore_signal tSemaphore_eSemaphore_signal
#define eSemaphore_wait  tSemaphore_eSemaphore_wait
#define eSemaphore_waitPolling tSemaphore_eSemaphore_waitPolling
#define eSemaphore_waitTimeout tSemaphore_eSemaphore_waitTimeout
#define eSemaphore_initialize tSemaphore_eSemaphore_initialize
#define eSemaphore_refer tSemaphore_eSemaphore_refer
#define eiSemaphore_signal tSemaphore_eiSemaphore_signal

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSemaphore_N_CELL; (i)++ ){ \
       (p_cb) = &tSemaphore_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#ifndef TOPPERS_MACRO_ONLY

/* inline �إå��� include #_INL_# */
#include "tSemaphore_inline.h"

#endif /* TOPPERS_MACRO_ONLY */

#ifdef TOPPERS_CB_TYPE_ONLY

/* inline �Τ���� undef #_UDF_# */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef tSemaphore_IDX
#undef FOREACH_CELL
#undef END_FOREACH_CELL
#undef INITIALIZE_CB
#undef SET_CB_INIB_POINTER
#undef ATTR_id
#undef tSemaphore_ATTR_id
#undef tSemaphore_GET_id
#undef ATTR_attribute
#undef tSemaphore_ATTR_attribute
#undef tSemaphore_GET_attribute
#undef ATTR_count
#undef tSemaphore_ATTR_count
#undef tSemaphore_GET_count
#undef ATTR_max
#undef tSemaphore_ATTR_max
#undef tSemaphore_GET_max
#undef ATTR_accessPattern
#undef tSemaphore_ATTR_accessPattern
#undef tSemaphore_GET_accessPattern
#undef eSemaphore_signal
#undef eSemaphore_wait
#undef eSemaphore_waitPolling
#undef eSemaphore_waitTimeout
#undef eSemaphore_initialize
#undef eSemaphore_refer
#undef eiSemaphore_signal
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tSemaphore_TECSGENH */
