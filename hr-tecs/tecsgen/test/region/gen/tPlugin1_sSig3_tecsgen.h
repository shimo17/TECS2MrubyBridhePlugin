/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tPlugin1_sSig3_TECSGEN_H
#define tPlugin1_sSig3_TECSGEN_H

/*
 * celltype          :  tPlugin1_sSig3
 * global name       :  tPlugin1_sSig3
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSig3_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tPlugin1_sSig3_CB {
    int  dummy;
} tPlugin1_sSig3_CB;
extern tPlugin1_sSig3_CB  tPlugin1_sSig3_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tPlugin1_sSig3_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig3 */
ER           tPlugin1_sSig3_throughEntry_func1(tPlugin1_sSig3_IDX idx, int32_t arg1, int32_t* res);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tPlugin1_sSig3_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tPlugin2_sSig3_tecsgen.h"
#ifdef  tPlugin1_sSig3_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tPlugin1_sSig3_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tPlugin1_sSig3_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tPlugin1_sSig3_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tPlugin1_sSig3_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tPlugin1_sSig3_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tPlugin1_sSig3_cCall_func1( p_that, arg1, res ) \
	  tPlugin2_sSig3_eThroughEntry_func1( \
	   (tPlugin2_sSig3_IDX)0, (arg1), (res) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* throughEntry */
ER             tPlugin1_sSig3_throughEntry_func1_skel( const struct tag_sSig3_VDES *epd, int32_t arg1, int32_t* res);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tPlugin1_sSig3_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tPlugin1_sSig3_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tPlugin1_sSig3_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tPlugin1_sSig3_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func1( arg1, res ) \
          ((void)p_cellcb, tPlugin1_sSig3_cCall_func1( p_cellcb, arg1, res ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define throughEntry_func1 tPlugin1_sSig3_throughEntry_func1

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tPlugin1_sSig3_TECSGENH */
