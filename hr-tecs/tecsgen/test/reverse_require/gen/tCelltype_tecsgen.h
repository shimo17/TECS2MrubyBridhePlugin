/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCelltype_TECSGEN_H
#define tCelltype_TECSGEN_H

/*
 * celltype          :  tCelltype
 * global name       :  tCelltype
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sInit_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCelltype_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        no;
}  tCelltype_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCelltype_CB_tab           tCelltype_INIB_tab
#define tCelltype_SINGLE_CELL_CB   tCelltype_SINGLE_CELL_INIB
#define tCelltype_CB               tCelltype_INIB
#define tag_tCelltype_CB           tag_tCelltype_INIB

extern tCelltype_CB  tCelltype_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCelltype_INIB *tCelltype_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sInit */
void         tCelltype_eInit_initialize(tCelltype_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCelltype_ID_BASE           (1)  /* ID のベース  #_NIDB_# */
#define tCelltype_N_CELL            (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCelltype_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCelltype_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tCelltype_ATTR_no( p_that )	((p_that)->no)

#define tCelltype_GET_no(p_that)	((p_that)->no)



#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eInit */
void           tCelltype_eInit_initialize_skel( const struct tag_sInit_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tCelltype_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCelltype_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCelltype_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCelltype_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_no              tCelltype_ATTR_no( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eInit_initialize tCelltype_eInit_initialize

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCelltype_N_CELL; (i)++ ){ \
       //(p_cb) = &tCelltype_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCelltype_TECSGENH */
