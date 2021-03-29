/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCt_no_CB_no_INIB_TECSGEN_H
#define tCt_no_CB_no_INIB_TECSGEN_H

/*
 * celltype          :  tCt_no_CB_no_INIB
 * global name       :  tCt_no_CB_no_INIB
 * idx_is_id(actual) :  yes(yes)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCt_no_CB_no_INIB_INIB {
    int8_t*        buf;
}  tCt_no_CB_no_INIB_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCt_no_CB_no_INIB_CB_tab           tCt_no_CB_no_INIB_INIB_tab
#define tCt_no_CB_no_INIB_SINGLE_CELL_CB   tCt_no_CB_no_INIB_SINGLE_CELL_INIB
#define tCt_no_CB_no_INIB_CB               tCt_no_CB_no_INIB_INIB
#define tag_tCt_no_CB_no_INIB_CB           tag_tCt_no_CB_no_INIB_INIB

extern tCt_no_CB_no_INIB_CB  *tCt_no_CB_no_INIB_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID tCt_no_CB_no_INIB_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCt_no_CB_no_INIB_ID_BASE       (16)  /* ID のベース  #_NIDB_# */
#define tCt_no_CB_no_INIB_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCt_no_CB_no_INIB_VALID_IDX(IDX) (tCt_no_CB_no_INIB_ID_BASE <= (IDX) && (IDX) < tCt_no_CB_no_INIB_ID_BASE+tCt_no_CB_no_INIB_N_CELL)


/* セルCBを得るマクロ #_GCB_# */
#define tCt_no_CB_no_INIB_GET_CELLCB(idx) (tCt_no_CB_no_INIB_CB_tab[(idx) - tCt_no_CB_no_INIB_ID_BASE])



/* var アクセスマクロ #_VAM_# */
#define tCt_no_CB_no_INIB_VAR_buf(p_that)	((p_that)->buf)

#define tCt_no_CB_no_INIB_GET_buf(p_that)	((p_that)->buf)
#define tCt_no_CB_no_INIB_SET_buf(p_that,val)	((p_that)->buf=(val))

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
#define VALID_IDX(IDX)  tCt_no_CB_no_INIB_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCt_no_CB_no_INIB_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCt_no_CB_no_INIB_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCt_no_CB_no_INIB_IDX



/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_buf              tCt_no_CB_no_INIB_VAR_buf( p_cellcb )



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCt_no_CB_no_INIB_N_CELL; (i)++ ){ \
       (p_cb) = tCt_no_CB_no_INIB_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCt_no_CB_no_INIB_TECSGENH */
