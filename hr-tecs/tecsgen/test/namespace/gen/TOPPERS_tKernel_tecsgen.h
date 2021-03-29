/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef TOPPERS_tKernel_TECSGEN_H
#define TOPPERS_tKernel_TECSGEN_H

/*
 * celltype          :  tKernel
 * global name       :  TOPPERS_tKernel
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  true
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "TOPPERS_sSyscall_tecsgen.h"
#include "nAlloc_sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_TOPPERS_tKernel_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
}  TOPPERS_tKernel_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_TOPPERS_tKernel_CB {
    TOPPERS_tKernel_INIB  *_inib;
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int16_t        b;
}  TOPPERS_tKernel_CB;
extern TOPPERS_tKernel_CB  TOPPERS_tKernel_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_TOPPERS_tKernel_CB *TOPPERS_tKernel_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* TOPPERS_sSyscall */
ER_ID        TOPPERS_tKernel_ka_cre_sem(TOPPERS_tKernel_IDX idx);
ER           TOPPERS_tKernel_ka_wai_sem(TOPPERS_tKernel_IDX idx, ID id);
ER           TOPPERS_tKernel_ka_rel_sem(TOPPERS_tKernel_IDX idx, ID id);
ER           TOPPERS_tKernel_ka_del_sem(TOPPERS_tKernel_IDX idx, ID id);
ER           TOPPERS_tKernel_ka_sendData(TOPPERS_tKernel_IDX idx, int8_t* data, int32_t sz);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  TOPPERS_tKernel_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "nAlloc_tAlloc_tecsgen.h"
#ifdef  TOPPERS_tKernel_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* TOPPERS_tKernel_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define TOPPERS_tKernel_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define TOPPERS_tKernel_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define TOPPERS_tKernel_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define TOPPERS_tKernel_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define TOPPERS_tKernel_ATTR_a( p_that )	((p_that)->_inib->a)

#define TOPPERS_tKernel_GET_a(p_that)	((p_that)->_inib->a)


/* var アクセスマクロ #_VAM_# */
#define TOPPERS_tKernel_VAR_b(p_that)	((p_that)->b)

#define TOPPERS_tKernel_GET_b(p_that)	((p_that)->b)
#define TOPPERS_tKernel_SET_b(p_that,val)	((p_that)->b=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define TOPPERS_tKernel_ka_sendData_data_alloc( p_that, len, buf ) \
	  nAlloc_tAlloc_eAlloc_alloc( \
	   (nAlloc_tAlloc_IDX)0, (len), (buf) )
#define TOPPERS_tKernel_ka_sendData_data_dealloc( p_that, buf ) \
	  nAlloc_tAlloc_eAlloc_dealloc( \
	   (nAlloc_tAlloc_IDX)0, (buf) )

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
#define VALID_IDX(IDX)  TOPPERS_tKernel_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  TOPPERS_tKernel_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	TOPPERS_tKernel_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	TOPPERS_tKernel_IDX

#define tKernel_IDX  TOPPERS_tKernel_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               TOPPERS_tKernel_ATTR_a( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_b                TOPPERS_tKernel_VAR_b( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define ka_sendData_data_alloc( len, buf ) \
          ((void)p_cellcb, TOPPERS_tKernel_ka_sendData_data_alloc( p_cellcb, len, buf ))
#define ka_sendData_data_dealloc( buf ) \
          ((void)p_cellcb, TOPPERS_tKernel_ka_sendData_data_dealloc( p_cellcb, buf ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define ka_cre_sem       TOPPERS_tKernel_ka_cre_sem
#define ka_wai_sem       TOPPERS_tKernel_ka_wai_sem
#define ka_rel_sem       TOPPERS_tKernel_ka_rel_sem
#define ka_del_sem       TOPPERS_tKernel_ka_del_sem
#define ka_sendData      TOPPERS_tKernel_ka_sendData

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < TOPPERS_tKernel_N_CELL; (i)++ ){ \
       (p_cb) = &TOPPERS_tKernel_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &TOPPERS_tKernel_INIB_tab[(i)];


/* deallocate マクロ #_DAL_#   */
#define KA_SENDDATA_DATA_DEALLOC(data) \
	  ka_sendData_data_dealloc( (data) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define KA_SENDDATA_DATA_DEALLOC_RESET(data) \
	  if( (data) ){ \
	    ka_sendData_data_dealloc( (data) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* TOPPERS_tKernel_TECSGENH */
