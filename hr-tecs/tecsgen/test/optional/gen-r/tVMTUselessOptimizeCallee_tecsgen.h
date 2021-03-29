/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tVMTUselessOptimizeCallee_TECSGEN_H
#define tVMTUselessOptimizeCallee_TECSGEN_H

/*
 * celltype          :  tVMTUselessOptimizeCallee
 * global name       :  tVMTUselessOptimizeCallee
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
#include "sSig_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB 型宣言 #_CCTPO_# */
typedef struct tag_tVMTUselessOptimizeCallee_CB {
    /* call port #_NEP_# */ 
    /* attribute #_AT_# */ 
    int32_t        attribute;
}  tVMTUselessOptimizeCallee_CB;
extern tVMTUselessOptimizeCallee_CB  tVMTUselessOptimizeCallee_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tVMTUselessOptimizeCallee_CB *tVMTUselessOptimizeCallee_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig */
void         tVMTUselessOptimizeCallee_eEnt_func(tVMTUselessOptimizeCallee_IDX idx, int_t subscript);
int32_t      tVMTUselessOptimizeCallee_eEnt_func2(tVMTUselessOptimizeCallee_IDX idx, int_t subscript, int32_t arg);
struct tagST tVMTUselessOptimizeCallee_eEnt_func3(tVMTUselessOptimizeCallee_IDX idx, int_t subscript, struct tagST a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tVMTUselessOptimizeCallee_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tVMTUselessOptimizeCallee_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tVMTUselessOptimizeCallee_VALID_IDX(IDX) (1)

/* 受け口配列の大きさを得るマクロ #_NEPA_# */
#define NEP_eEnt     (2)

/* セルCBを得るマクロ #_GCB_# */
#define tVMTUselessOptimizeCallee_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tVMTUselessOptimizeCallee_ATTR_attribute( p_that )	((p_that)->attribute)

#define tVMTUselessOptimizeCallee_GET_attribute(p_that)	((p_that)->attribute)



#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eEnt */
void           tVMTUselessOptimizeCallee_eEnt_func_skel( const struct tag_sSig_VDES *epd);
int32_t        tVMTUselessOptimizeCallee_eEnt_func2_skel( const struct tag_sSig_VDES *epd, int32_t arg);
struct tagST   tVMTUselessOptimizeCallee_eEnt_func3_skel( const struct tag_sSig_VDES *epd, struct tagST a);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tVMTUselessOptimizeCallee_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tVMTUselessOptimizeCallee_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tVMTUselessOptimizeCallee_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tVMTUselessOptimizeCallee_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_attribute       tVMTUselessOptimizeCallee_ATTR_attribute( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_func        tVMTUselessOptimizeCallee_eEnt_func
#define eEnt_func2       tVMTUselessOptimizeCallee_eEnt_func2
#define eEnt_func3       tVMTUselessOptimizeCallee_eEnt_func3

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tVMTUselessOptimizeCallee_N_CELL; (i)++ ){ \
       (p_cb) = &tVMTUselessOptimizeCallee_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tVMTUselessOptimizeCallee_TECSGENH */
