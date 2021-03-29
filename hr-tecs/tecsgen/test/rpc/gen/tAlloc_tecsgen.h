/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tAlloc_TECSGEN_H
#define tAlloc_TECSGEN_H

/*
 * celltype          :  tAlloc
 * global name       :  tAlloc
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
#include "sAlloc_tecsgen.h"
#include "sSysLog_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tAlloc_CB {
    int  dummy;
} tAlloc_CB;
extern tAlloc_CB  tAlloc_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tAlloc_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sAlloc */
ER           tAlloc_eAlloc_alloc(tAlloc_IDX idx, int32_t size, void** p);
ER           tAlloc_eAlloc_dealloc(tAlloc_IDX idx, const void* ptr);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tAlloc_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSysLog_tecsgen.h"
#ifdef  tAlloc_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tAlloc_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tAlloc_ID_BASE              (1)  /* ID のベース  #_NIDB_# */
#define tAlloc_N_CELL               (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tAlloc_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tAlloc_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tAlloc__require_call_port_tSysLog_eSysLog_write( p_that, prio, p_syslog ) \
	  tSysLog_eSysLog_write( \
	    (prio), (p_syslog) )
#define tAlloc__require_call_port_tSysLog_eSysLog_read( p_that, p_syslog ) \
	  tSysLog_eSysLog_read( \
	    (p_syslog) )
#define tAlloc__require_call_port_tSysLog_eSysLog_mask( p_that, logmask, lowmask ) \
	  tSysLog_eSysLog_mask( \
	    (logmask), (lowmask) )
#define tAlloc__require_call_port_tSysLog_eSysLog_refer( p_that, pk_rlog ) \
	  tSysLog_eSysLog_refer( \
	    (pk_rlog) )

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
#define VALID_IDX(IDX)  tAlloc_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tAlloc_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tAlloc_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tAlloc_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define write( prio, p_syslog ) \
          ((void)p_cellcb, tAlloc__require_call_port_tSysLog_eSysLog_write( p_cellcb, prio, p_syslog ))
#define read( p_syslog ) \
          ((void)p_cellcb, tAlloc__require_call_port_tSysLog_eSysLog_read( p_cellcb, p_syslog ))
#define mask( logmask, lowmask ) \
          ((void)p_cellcb, tAlloc__require_call_port_tSysLog_eSysLog_mask( p_cellcb, logmask, lowmask ))
#define refer( pk_rlog ) \
          ((void)p_cellcb, tAlloc__require_call_port_tSysLog_eSysLog_refer( p_cellcb, pk_rlog ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eAlloc_alloc     tAlloc_eAlloc_alloc
#define eAlloc_dealloc   tAlloc_eAlloc_dealloc

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tAlloc_TECSGENH */
