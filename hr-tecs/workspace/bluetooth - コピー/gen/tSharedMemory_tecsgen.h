/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSharedMemory_TECSGEN_H
#define tSharedMemory_TECSGEN_H

/*
 * celltype          :  tSharedMemory
 * global name       :  tSharedMemory
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSharedMemory_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tSharedMemory_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        size;
    int32_t*       data;
}  tSharedMemory_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tSharedMemory_CB_tab           tSharedMemory_INIB_tab
#define tSharedMemory_SINGLE_CELL_CB   tSharedMemory_SINGLE_CELL_INIB
#define tSharedMemory_CB               tSharedMemory_INIB
#define tag_tSharedMemory_CB           tag_tSharedMemory_INIB

extern tSharedMemory_CB  tSharedMemory_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tSharedMemory_INIB *tSharedMemory_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSharedMemory */
void         tSharedMemory_eSharedMemory_putVal(tSharedMemory_IDX idx, int32_t index, int32_t val);
int32_t      tSharedMemory_eSharedMemory_getVal(tSharedMemory_IDX idx, int32_t index);
int32_t      tSharedMemory_eSharedMemory_getSize(tSharedMemory_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tSharedMemory_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tSharedMemory_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSharedMemory_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tSharedMemory_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tSharedMemory_ATTR_size( p_that )	((p_that)->size)

#define tSharedMemory_GET_size(p_that)	((p_that)->size)


/* var アクセスマクロ #_VAM_# */
#define tSharedMemory_VAR_data(p_that)	((p_that)->data)

#define tSharedMemory_GET_data(p_that)	((p_that)->data)
#define tSharedMemory_SET_data(p_that,val)	((p_that)->data=(val))

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
#define VALID_IDX(IDX)  tSharedMemory_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSharedMemory_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSharedMemory_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSharedMemory_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_size            tSharedMemory_ATTR_size( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_data             tSharedMemory_VAR_data( p_cellcb )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eSharedMemory_putVal tSharedMemory_eSharedMemory_putVal
#define eSharedMemory_getVal tSharedMemory_eSharedMemory_getVal
#define eSharedMemory_getSize tSharedMemory_eSharedMemory_getSize

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSharedMemory_N_CELL; (i)++ ){ \
       (p_cb) = &tSharedMemory_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSharedMemory_TECSGENH */
