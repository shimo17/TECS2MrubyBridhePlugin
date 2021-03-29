/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tPlugin2_sSig2_TECSGEN_H
#define tPlugin2_sSig2_TECSGEN_H

/*
 * celltype          :  tPlugin2_sSig2
 * global name       :  tPlugin2_sSig2
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
#include "sSig2_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tPlugin2_sSig2_CB {
    int  dummy;
} tPlugin2_sSig2_CB;
extern tPlugin2_sSig2_CB  tPlugin2_sSig2_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tPlugin2_sSig2_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig2 */
ER           tPlugin2_sSig2_eThroughEntry_func1(tPlugin2_sSig2_IDX idx, int32_t arg1, int32_t* res);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tPlugin2_sSig2_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tCtOuter_tecsgen.h"
#ifdef  tPlugin2_sSig2_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tPlugin2_sSig2_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tPlugin2_sSig2_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tPlugin2_sSig2_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tPlugin2_sSig2_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tPlugin2_sSig2_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tPlugin2_sSig2_cCall_func1( p_that, arg1, res ) \
	  tCtOuter_eEnt_func1( \
	   (tCtOuter_IDX)0, (arg1), (res) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eThroughEntry */
ER             tPlugin2_sSig2_eThroughEntry_func1_skel( const struct tag_sSig2_VDES *epd, int32_t arg1, int32_t* res);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tPlugin2_sSig2_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tPlugin2_sSig2_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tPlugin2_sSig2_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tPlugin2_sSig2_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func1( arg1, res ) \
          ((void)p_cellcb, tPlugin2_sSig2_cCall_func1( p_cellcb, arg1, res ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eThroughEntry_func1 tPlugin2_sSig2_eThroughEntry_func1

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tPlugin2_sSig2_TECSGENH */
