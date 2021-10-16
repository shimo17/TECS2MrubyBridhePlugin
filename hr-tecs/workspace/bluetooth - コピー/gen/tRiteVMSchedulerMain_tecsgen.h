/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tRiteVMSchedulerMain_TECSGEN_H
#define tRiteVMSchedulerMain_TECSGEN_H

/*
 * celltype          :  tRiteVMSchedulerMain
 * global name       :  tRiteVMSchedulerMain
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "siKernel_tecsgen.h"
#include "siHandlerBody_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tRiteVMSchedulerMain_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    PRI            priority;
}  tRiteVMSchedulerMain_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tRiteVMSchedulerMain_CB_tab           tRiteVMSchedulerMain_INIB_tab
#define tRiteVMSchedulerMain_SINGLE_CELL_CB   tRiteVMSchedulerMain_SINGLE_CELL_INIB
#define tRiteVMSchedulerMain_CB               tRiteVMSchedulerMain_INIB
#define tag_tRiteVMSchedulerMain_CB           tag_tRiteVMSchedulerMain_INIB

extern tRiteVMSchedulerMain_CB  tRiteVMSchedulerMain_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tRiteVMSchedulerMain_INIB *tRiteVMSchedulerMain_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* siHandlerBody */
void         tRiteVMSchedulerMain_eiBody_main(tRiteVMSchedulerMain_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tRiteVMSchedulerMain_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tKernel_tecsgen.h"
#ifdef  tRiteVMSchedulerMain_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tRiteVMSchedulerMain_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tRiteVMSchedulerMain_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tRiteVMSchedulerMain_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tRiteVMSchedulerMain_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tRiteVMSchedulerMain_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tRiteVMSchedulerMain_ATTR_priority( p_that )	((p_that)->priority)

#define tRiteVMSchedulerMain_GET_priority(p_that)	((p_that)->priority)



 /* 呼び口関数マクロ #_CPM_# */
#define tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_getTaskId( p_that, p_taskId ) \
	  tKernel_eiKernel_getTaskId( \
	    (p_taskId) )
#define tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_rotateReadyQueue( p_that, taskPriority ) \
	  tKernel_eiKernel_rotateReadyQueue( \
	    (taskPriority) )
#define tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_getMicroTime( p_that, p_systemMicroTime ) \
	  tKernel_eiKernel_getMicroTime( \
	    (p_systemMicroTime) )
#define tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_lockCpu( p_that ) \
	  tKernel_eiKernel_lockCpu( \
	    )
#define tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_unlockCpu( p_that ) \
	  tKernel_eiKernel_unlockCpu( \
	    )
#define tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_exitKernel( p_that ) \
	  tKernel_eiKernel_exitKernel( \
	    )
#define tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_senseContext( p_that ) \
	  tKernel_eiKernel_senseContext( \
	    )
#define tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_senseLock( p_that ) \
	  tKernel_eiKernel_senseLock( \
	    )
#define tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_senseDispatch( p_that ) \
	  tKernel_eiKernel_senseDispatch( \
	    )
#define tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_senseDispatchPendingState( p_that ) \
	  tKernel_eiKernel_senseDispatchPendingState( \
	    )
#define tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_senseKernel( p_that ) \
	  tKernel_eiKernel_senseKernel( \
	    )
#define tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_senseDispatchPendingStateCPU( p_that, p_exceptionInfomation ) \
	  tKernel_eiKernel_senseDispatchPendingStateCPU( \
	    (p_exceptionInfomation) )
#define tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_senseTaskExceptionPendingStateCPU( p_that, p_exceptionInfomation ) \
	  tKernel_eiKernel_senseTaskExceptionPendingStateCPU( \
	    (p_exceptionInfomation) )

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
#define VALID_IDX(IDX)  tRiteVMSchedulerMain_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tRiteVMSchedulerMain_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tRiteVMSchedulerMain_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tRiteVMSchedulerMain_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_priority        tRiteVMSchedulerMain_ATTR_priority( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define getTaskId( p_taskId ) \
          ((void)p_cellcb, tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_getTaskId( p_cellcb, p_taskId ))
#define rotateReadyQueue( taskPriority ) \
          ((void)p_cellcb, tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_rotateReadyQueue( p_cellcb, taskPriority ))
#define getMicroTime( p_systemMicroTime ) \
          ((void)p_cellcb, tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_getMicroTime( p_cellcb, p_systemMicroTime ))
#define lockCpu( ) \
          ((void)p_cellcb, tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_lockCpu( p_cellcb ))
#define unlockCpu( ) \
          ((void)p_cellcb, tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_unlockCpu( p_cellcb ))
#define exitKernel( ) \
          ((void)p_cellcb, tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_exitKernel( p_cellcb ))
#define senseContext( ) \
          ((void)p_cellcb, tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_senseContext( p_cellcb ))
#define senseLock( ) \
          ((void)p_cellcb, tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_senseLock( p_cellcb ))
#define senseDispatch( ) \
          ((void)p_cellcb, tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_senseDispatch( p_cellcb ))
#define senseDispatchPendingState( ) \
          ((void)p_cellcb, tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_senseDispatchPendingState( p_cellcb ))
#define senseKernel( ) \
          ((void)p_cellcb, tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_senseKernel( p_cellcb ))
#define senseDispatchPendingStateCPU( p_exceptionInfomation ) \
          ((void)p_cellcb, tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_senseDispatchPendingStateCPU( p_cellcb, p_exceptionInfomation ))
#define senseTaskExceptionPendingStateCPU( p_exceptionInfomation ) \
          ((void)p_cellcb, tRiteVMSchedulerMain__require_call_port_tKernel_eiKernel_senseTaskExceptionPendingStateCPU( p_cellcb, p_exceptionInfomation ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eiBody_main      tRiteVMSchedulerMain_eiBody_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tRiteVMSchedulerMain_N_CELL; (i)++ ){ \
       (p_cb) = &tRiteVMSchedulerMain_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tRiteVMSchedulerMain_TECSGENH */
