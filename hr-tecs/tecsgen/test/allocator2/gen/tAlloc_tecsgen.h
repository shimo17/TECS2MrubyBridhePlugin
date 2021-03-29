/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tAlloc_TECSGEN_H
#define tAlloc_TECSGEN_H

/*
 * celltype          :  tAlloc
 * global name       :  tAlloc
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  true
 * has_INIB          :  false
 * rom               :  no
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB 型宣言 #_CCTPO_# */
typedef struct tag_tAlloc_CB {
    /* call port #_NEP_# */ 
    /* attribute #_AT_# */ 
    int32_t        size;
    int8_t*        buffer;
    /* var #_VA_# */ 
    int32_t        n_alloc;
    int32_t        n_dealloc;
}  tAlloc_CB;
extern tAlloc_CB  tAlloc_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tAlloc_CB *tAlloc_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sAlloc */
ER           tAlloc_eA_alloc(tAlloc_IDX idx, int32_t size, void** p);
ER           tAlloc_eA_dealloc(tAlloc_IDX idx, const void* p);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tAlloc_ID_BASE              (1)  /* ID のベース  #_NIDB_# */
#define tAlloc_N_CELL               (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tAlloc_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tAlloc_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tAlloc_ATTR_size( p_that )	((p_that)->size)

#define tAlloc_GET_size(p_that)	((p_that)->size)


/* var アクセスマクロ #_VAM_# */
#define tAlloc_VAR_buffer(p_that)	((p_that)->buffer)
#define tAlloc_VAR_n_alloc(p_that)	((p_that)->n_alloc)
#define tAlloc_VAR_n_dealloc(p_that)	((p_that)->n_dealloc)

#define tAlloc_GET_buffer(p_that)	((p_that)->buffer)
#define tAlloc_SET_buffer(p_that,val)	((p_that)->buffer=(val))
#define tAlloc_GET_n_alloc(p_that)	((p_that)->n_alloc)
#define tAlloc_SET_n_alloc(p_that,val)	((p_that)->n_alloc=(val))
#define tAlloc_GET_n_dealloc(p_that)	((p_that)->n_dealloc)
#define tAlloc_SET_n_dealloc(p_that,val)	((p_that)->n_dealloc=(val))

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tAlloc_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tAlloc_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tAlloc_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tAlloc_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_size            tAlloc_ATTR_size( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_buffer           tAlloc_VAR_buffer( p_cellcb )
#define VAR_n_alloc          tAlloc_VAR_n_alloc( p_cellcb )
#define VAR_n_dealloc        tAlloc_VAR_n_dealloc( p_cellcb )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eA_alloc         tAlloc_eA_alloc
#define eA_dealloc       tAlloc_eA_dealloc

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tAlloc_N_CELL; (i)++ ){ \
       (p_cb) = &tAlloc_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tAlloc_TECSGENH */
