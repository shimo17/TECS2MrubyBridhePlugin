/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSingleCellOptimizeCallee_TECSGEN_H
#define tSingleCellOptimizeCallee_TECSGEN_H

/*
 * celltype          :  tSingleCellOptimizeCallee
 * global name       :  tSingleCellOptimizeCallee
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  0
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSig_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tSingleCellOptimizeCallee_INIB {
    /* call port #_NEP_# */ 
}  tSingleCellOptimizeCallee_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tSingleCellOptimizeCallee_CB_tab           tSingleCellOptimizeCallee_INIB_tab
#define tSingleCellOptimizeCallee_SINGLE_CELL_CB   tSingleCellOptimizeCallee_SINGLE_CELL_INIB
#define tSingleCellOptimizeCallee_CB               tSingleCellOptimizeCallee_INIB
#define tag_tSingleCellOptimizeCallee_CB           tag_tSingleCellOptimizeCallee_INIB

extern tSingleCellOptimizeCallee_CB  tSingleCellOptimizeCallee_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tSingleCellOptimizeCallee_INIB *tSingleCellOptimizeCallee_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig */
void         tSingleCellOptimizeCallee_eEnt_func(tSingleCellOptimizeCallee_IDX idx);
int32_t      tSingleCellOptimizeCallee_eEnt_func2(tSingleCellOptimizeCallee_IDX idx, int32_t arg);
struct tagST tSingleCellOptimizeCallee_eEnt_func3(tSingleCellOptimizeCallee_IDX idx, struct tagST a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tSingleCellOptimizeCallee_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tSingleCellOptimizeCallee_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSingleCellOptimizeCallee_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tSingleCellOptimizeCallee_GET_CELLCB(idx) (idx)
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
#define VALID_IDX(IDX)  tSingleCellOptimizeCallee_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSingleCellOptimizeCallee_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSingleCellOptimizeCallee_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSingleCellOptimizeCallee_IDX




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_func        tSingleCellOptimizeCallee_eEnt_func
#define eEnt_func2       tSingleCellOptimizeCallee_eEnt_func2
#define eEnt_func3       tSingleCellOptimizeCallee_eEnt_func3

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSingleCellOptimizeCallee_N_CELL; (i)++ ){ \
       (p_cb) = &tSingleCellOptimizeCallee_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSingleCellOptimizeCallee_TECSGENH */
