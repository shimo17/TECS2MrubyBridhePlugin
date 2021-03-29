/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tServerErrorHandler_TECSGEN_H
#define tServerErrorHandler_TECSGEN_H

/*
 * celltype          :  tServerErrorHandler
 * global name       :  tServerErrorHandler
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
#include "sRPCErrorHandler_tecsgen.h"
#include "sServerChannelOpener_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tServerErrorHandler_CB {
    int  dummy;
} tServerErrorHandler_CB;
extern tServerErrorHandler_CB  tServerErrorHandler_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tServerErrorHandler_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sRPCErrorHandler */
ER           tServerErrorHandler_eErrorHandler_errorOccured(tServerErrorHandler_IDX idx, int16_t func_id, ER er, int16_t state);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tServerErrorHandler_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSocketServer_tecsgen.h"
#ifdef  tServerErrorHandler_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tServerErrorHandler_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tServerErrorHandler_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tServerErrorHandler_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tServerErrorHandler_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tServerErrorHandler_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tServerErrorHandler_cOpener_open( p_that ) \
	  tSocketServer_eOpener_open( \
	   &tSocketServer_CB_tab[0] )
#define tServerErrorHandler_cOpener_close( p_that ) \
	  tSocketServer_eOpener_close( \
	   &tSocketServer_CB_tab[0] )

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
#define VALID_IDX(IDX)  tServerErrorHandler_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tServerErrorHandler_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tServerErrorHandler_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tServerErrorHandler_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cOpener_open( ) \
          ((void)p_cellcb, tServerErrorHandler_cOpener_open( p_cellcb ))
#define cOpener_close( ) \
          ((void)p_cellcb, tServerErrorHandler_cOpener_close( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eErrorHandler_errorOccured tServerErrorHandler_eErrorHandler_errorOccured

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tServerErrorHandler_TECSGENH */
