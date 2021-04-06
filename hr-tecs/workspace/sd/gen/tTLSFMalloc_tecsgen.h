/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tTLSFMalloc_TECSGEN_H
#define tTLSFMalloc_TECSGEN_H

/*
 * celltype          :  tTLSFMalloc
 * global name       :  tTLSFMalloc
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
#include "sMalloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tTLSFMalloc_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    size_t         memoryPoolSize;
    uint64_t*      pool;
}  tTLSFMalloc_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tTLSFMalloc_CB_tab           tTLSFMalloc_INIB_tab
#define tTLSFMalloc_SINGLE_CELL_CB   tTLSFMalloc_SINGLE_CELL_INIB
#define tTLSFMalloc_CB               tTLSFMalloc_INIB
#define tag_tTLSFMalloc_CB           tag_tTLSFMalloc_INIB

extern tTLSFMalloc_CB  tTLSFMalloc_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tTLSFMalloc_INIB *tTLSFMalloc_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sMalloc */
Inline int          tTLSFMalloc_eMalloc_initializeMemoryPool(tTLSFMalloc_IDX idx);
Inline void*        tTLSFMalloc_eMalloc_calloc(tTLSFMalloc_IDX idx, size_t nelem, size_t elem_size);
Inline void*        tTLSFMalloc_eMalloc_malloc(tTLSFMalloc_IDX idx, size_t size);
Inline void*        tTLSFMalloc_eMalloc_realloc(tTLSFMalloc_IDX idx, const void* ptr, size_t new_size);
Inline void         tTLSFMalloc_eMalloc_free(tTLSFMalloc_IDX idx, const void* ptr);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#define tTLSFMalloc_ID_BASE         (1)  /* ID �Υ١���  #_NIDB_# */
#define tTLSFMalloc_N_CELL          (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tTLSFMalloc_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tTLSFMalloc_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define tTLSFMalloc_ATTR_memoryPoolSize( p_that )	((p_that)->memoryPoolSize)

#define tTLSFMalloc_GET_memoryPoolSize(p_that)	((p_that)->memoryPoolSize)


/* var ���������ޥ��� #_VAM_# */
#define tTLSFMalloc_VAR_pool(p_that)	((p_that)->pool)

#define tTLSFMalloc_GET_pool(p_that)	((p_that)->pool)
#define tTLSFMalloc_SET_pool(p_that,val)	((p_that)->pool=(val))

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
#define VALID_IDX(IDX)  tTLSFMalloc_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tTLSFMalloc_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tTLSFMalloc_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tTLSFMalloc_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_memoryPoolSize  tTLSFMalloc_ATTR_memoryPoolSize( p_cellcb )


/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_pool             tTLSFMalloc_VAR_pool( p_cellcb )




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eMalloc_initializeMemoryPool tTLSFMalloc_eMalloc_initializeMemoryPool
#define eMalloc_calloc   tTLSFMalloc_eMalloc_calloc
#define eMalloc_malloc   tTLSFMalloc_eMalloc_malloc
#define eMalloc_realloc  tTLSFMalloc_eMalloc_realloc
#define eMalloc_free     tTLSFMalloc_eMalloc_free

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTLSFMalloc_N_CELL; (i)++ ){ \
       (p_cb) = &tTLSFMalloc_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#ifndef TOPPERS_MACRO_ONLY

/* inline �إå��� include #_INL_# */
#include "tTLSFMalloc_inline.h"

#endif /* TOPPERS_MACRO_ONLY */

#ifdef TOPPERS_CB_TYPE_ONLY

/* inline �Τ���� undef #_UDF_# */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef tTLSFMalloc_IDX
#undef FOREACH_CELL
#undef END_FOREACH_CELL
#undef INITIALIZE_CB
#undef SET_CB_INIB_POINTER
#undef ATTR_memoryPoolSize
#undef tTLSFMalloc_ATTR_memoryPoolSize
#undef tTLSFMalloc_GET_memoryPoolSize
#undef VAR_pool
#undef VAR_pool
#undef tTLSFMalloc_VAR_pool
#undef tTLSFMalloc_GET_pool
#undef tTLSFMalloc_SET_pool
#undef eMalloc_initializeMemoryPool
#undef eMalloc_calloc
#undef eMalloc_malloc
#undef eMalloc_realloc
#undef eMalloc_free
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tTLSFMalloc_TECSGENH */
