/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nMruby_tsLED_TECSGEN_H
#define nMruby_tsLED_TECSGEN_H

/*
 * celltype          :  tsLED
 * global name       :  nMruby_tsLED
 * idx_is_id(actual) :  yes(yes)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  0
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sLED_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nMruby_tsLED_INIB {
    /* call port #_TCP_# */
}  nMruby_tsLED_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nMruby_tsLED_CB_tab           nMruby_tsLED_INIB_tab
#define nMruby_tsLED_SINGLE_CELL_CB   nMruby_tsLED_SINGLE_CELL_INIB
#define nMruby_tsLED_CB               nMruby_tsLED_INIB
#define tag_nMruby_tsLED_CB           tag_nMruby_tsLED_INIB

extern nMruby_tsLED_CB  *nMruby_tsLED_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID nMruby_tsLED_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nMruby_tsLED_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tLED_tecsgen.h"
#ifdef  nMruby_tsLED_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nMruby_tsLED_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tsLED_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nMruby_tsLED_N_CELL         (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nMruby_tsLED_VALID_IDX(IDX) (nMruby_tsLED_ID_BASE <= (IDX) && (IDX) < nMruby_tsLED_ID_BASE+nMruby_tsLED_N_CELL)


/* セルCBを得るマクロ #_GCB_# */
#define nMruby_tsLED_GET_CELLCB(idx) (nMruby_tsLED_CB_tab[(idx) - nMruby_tsLED_ID_BASE])
 /* 呼び口関数マクロ #_CPM_# */
#define nMruby_tsLED_cTECS_setColor( p_that, color ) \
	  tLED_eLED_setColor( \
	   &tLED_CB_tab[0], (color) )
#define nMruby_tsLED_cTECS_off( p_that ) \
	  tLED_eLED_off( \
	   &tLED_CB_tab[0] )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  nMruby_tsLED_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tsLED_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nMruby_tsLED_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nMruby_tsLED_IDX

#define tsLED_IDX  nMruby_tsLED_IDX
/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTECS_setColor( color ) \
          ((void)p_cellcb, nMruby_tsLED_cTECS_setColor( p_cellcb, color ))
#define cTECS_off( ) \
          ((void)p_cellcb, nMruby_tsLED_cTECS_off( p_cellcb ))



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nMruby_tsLED_N_CELL; (i)++ ){ \
       (p_cb) = nMruby_tsLED_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tsLED_TECSGENH */
