/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nMruby_tRiteVMBluetooth_TECSGEN_H
#define nMruby_tRiteVMBluetooth_TECSGEN_H

/*
 * celltype          :  tRiteVMBluetooth
 * global name       :  nMruby_tRiteVMBluetooth
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  true
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sKernel_tecsgen.h"
#include "sTask_tecsgen.h"
#include "sTaskBody_tecsgen.h"
#include "sRiteVM_tecsgen.h"
#include "sReset_tecsgen.h"
#include "sCyclic_tecsgen.h"
#include "sEventflag_tecsgen.h"
#include "sSemaphore_tecsgen.h"
#include "nMruby_sInitializeBridge_tecsgen.h"
#include "sMalloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nMruby_tRiteVMBluetooth_INIB {
    /* call port #_TCP_# */
    const struct tag_tTask_INIB * cTask;
    struct tag_sEventflag_VDES *const*cEventflag;
    int_t n_cEventflag;
    const struct tag_tTLSFMalloc_INIB * cMalloc;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    uint8_t*       irepLib;
    uint32_t       irepAppSize;
    FLGPTN         setptn;
    uint8_t*       irepApp;
}  nMruby_tRiteVMBluetooth_INIB;
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_nMruby_tRiteVMBluetooth_CB {
    nMruby_tRiteVMBluetooth_INIB  *_inib;
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    mrb_state*     mrb;
    mrbc_context*  context;
}  nMruby_tRiteVMBluetooth_CB;
extern nMruby_tRiteVMBluetooth_CB  nMruby_tRiteVMBluetooth_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_nMruby_tRiteVMBluetooth_CB *nMruby_tRiteVMBluetooth_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sTaskBody */
void         nMruby_tRiteVMBluetooth_eMrubyBody_main(nMruby_tRiteVMBluetooth_IDX idx);
/* sRiteVM */
void         nMruby_tRiteVMBluetooth_eRiteVM_reset(nMruby_tRiteVMBluetooth_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nMruby_tRiteVMBluetooth_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tKernel_tecsgen.h"
#include "tTask_tecsgen.h"
#include "tReset_tecsgen.h"
#include "tSemaphore_tecsgen.h"
#include "nMruby_tTECSInitializer_tecsgen.h"
#include "tTLSFMalloc_tecsgen.h"
#ifdef  nMruby_tRiteVMBluetooth_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nMruby_tRiteVMBluetooth_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tRiteVMBluetooth_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nMruby_tRiteVMBluetooth_N_CELL        (2)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nMruby_tRiteVMBluetooth_VALID_IDX(IDX) (1)

/* �ƤӸ�������礭��������ޥ��� #_NCPA_# */
#define N_CP_cEventflag(p_that)  ((p_that)->_inib->n_cEventflag)
#define NCP_cEventflag           (N_CP_cEventflag(p_cellcb))
/* optional �ƤӸ���ƥ��Ȥ���ޥ��� #_TOCP_# */
#define nMruby_tRiteVMBluetooth_is_cCyclic_joined(p_that) \
	  (0)    /* not joined */
#define nMruby_tRiteVMBluetooth_is_cEventflag_joined(p_that,subscript) \
	  (((p_that)->_inib->cEventflag!=0)\
	  &&((p_that)->_inib->cEventflag[subscript]!=0))
#define nMruby_tRiteVMBluetooth_is_cSemaphore_joined(p_that) \
	  (1)
#define nMruby_tRiteVMBluetooth_is_cInit_joined(p_that) \
	  (1)

/* ����CB������ޥ��� #_GCB_# */
#define nMruby_tRiteVMBluetooth_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define nMruby_tRiteVMBluetooth_ATTR_irepLib( p_that )	((p_that)->_inib->irepLib)
#define nMruby_tRiteVMBluetooth_ATTR_irepAppSize( p_that )	((p_that)->_inib->irepAppSize)
#define nMruby_tRiteVMBluetooth_ATTR_setptn( p_that )	((p_that)->_inib->setptn)

#define nMruby_tRiteVMBluetooth_GET_irepLib(p_that)	((p_that)->_inib->irepLib)
#define nMruby_tRiteVMBluetooth_GET_irepAppSize(p_that)	((p_that)->_inib->irepAppSize)
#define nMruby_tRiteVMBluetooth_GET_setptn(p_that)	((p_that)->_inib->setptn)


/* var ���������ޥ��� #_VAM_# */
#define nMruby_tRiteVMBluetooth_VAR_mrb(p_that)	((p_that)->mrb)
#define nMruby_tRiteVMBluetooth_VAR_context(p_that)	((p_that)->context)
#define nMruby_tRiteVMBluetooth_VAR_irepApp(p_that)	((p_that)->_inib->irepApp)

#define nMruby_tRiteVMBluetooth_GET_mrb(p_that)	((p_that)->mrb)
#define nMruby_tRiteVMBluetooth_SET_mrb(p_that,val)	((p_that)->mrb=(val))
#define nMruby_tRiteVMBluetooth_GET_context(p_that)	((p_that)->context)
#define nMruby_tRiteVMBluetooth_SET_context(p_that,val)	((p_that)->context=(val))
#define nMruby_tRiteVMBluetooth_GET_irepApp(p_that)	((p_that)->irepApp)
#define nMruby_tRiteVMBluetooth_SET_irepApp(p_that,val)	((p_that)->irepApp=(val))

 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_sleep( p_that ) \
	  tKernel_eKernel_sleep( \
	    )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_sleepTimeout( p_that, timeout ) \
	  tKernel_eKernel_sleepTimeout( \
	    (timeout) )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_delay( p_that, delayTime ) \
	  tKernel_eKernel_delay( \
	    (delayTime) )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_exitTask( p_that ) \
	  tKernel_eKernel_exitTask( \
	    )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_getTaskId( p_that, p_taskId ) \
	  tKernel_eKernel_getTaskId( \
	    (p_taskId) )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_rotateReadyQueue( p_that, taskPriority ) \
	  tKernel_eKernel_rotateReadyQueue( \
	    (taskPriority) )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_getTime( p_that, p_systemTime ) \
	  tKernel_eKernel_getTime( \
	    (p_systemTime) )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_getMicroTime( p_that, p_systemMicroTime ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_systemMicroTime) )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_lockCpu( p_that ) \
	  tKernel_eKernel_lockCpu( \
	    )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_unlockCpu( p_that ) \
	  tKernel_eKernel_unlockCpu( \
	    )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_disableDispatch( p_that ) \
	  tKernel_eKernel_disableDispatch( \
	    )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_enableDispatch( p_that ) \
	  tKernel_eKernel_enableDispatch( \
	    )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_disableTaskException( p_that ) \
	  tKernel_eKernel_disableTaskException( \
	    )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_enableTaskException( p_that ) \
	  tKernel_eKernel_enableTaskException( \
	    )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( p_that, interruptPriority ) \
	  tKernel_eKernel_changeInterruptPriorityMask( \
	    (interruptPriority) )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_that, p_interruptPriority ) \
	  tKernel_eKernel_getInterruptPriorityMask( \
	    (p_interruptPriority) )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_exitKernel( p_that ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_senseContext( p_that ) \
	  tKernel_eKernel_senseContext( \
	    )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_senseLock( p_that ) \
	  tKernel_eKernel_senseLock( \
	    )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_senseDispatch( p_that ) \
	  tKernel_eKernel_senseDispatch( \
	    )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_senseDispatchPendingState( p_that ) \
	  tKernel_eKernel_senseDispatchPendingState( \
	    )
#define nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_senseKernel( p_that ) \
	  tKernel_eKernel_senseKernel( \
	    )
#define nMruby_tRiteVMBluetooth_cTask_activate( p_that ) \
	  tTask_eTask_activate( \
	   (p_that)->_inib->cTask )
#define nMruby_tRiteVMBluetooth_cTask_cancelActivate( p_that ) \
	  tTask_eTask_cancelActivate( \
	   (p_that)->_inib->cTask )
#define nMruby_tRiteVMBluetooth_cTask_terminate( p_that ) \
	  tTask_eTask_terminate( \
	   (p_that)->_inib->cTask )
#define nMruby_tRiteVMBluetooth_cTask_changePriority( p_that, priority ) \
	  tTask_eTask_changePriority( \
	   (p_that)->_inib->cTask, (priority) )
#define nMruby_tRiteVMBluetooth_cTask_getPriority( p_that, p_priority ) \
	  tTask_eTask_getPriority( \
	   (p_that)->_inib->cTask, (p_priority) )
#define nMruby_tRiteVMBluetooth_cTask_refer( p_that, pk_taskStatus ) \
	  tTask_eTask_refer( \
	   (p_that)->_inib->cTask, (pk_taskStatus) )
#define nMruby_tRiteVMBluetooth_cTask_wakeup( p_that ) \
	  tTask_eTask_wakeup( \
	   (p_that)->_inib->cTask )
#define nMruby_tRiteVMBluetooth_cTask_cancelWakeup( p_that ) \
	  tTask_eTask_cancelWakeup( \
	   (p_that)->_inib->cTask )
#define nMruby_tRiteVMBluetooth_cTask_releaseWait( p_that ) \
	  tTask_eTask_releaseWait( \
	   (p_that)->_inib->cTask )
#define nMruby_tRiteVMBluetooth_cTask_suspend( p_that ) \
	  tTask_eTask_suspend( \
	   (p_that)->_inib->cTask )
#define nMruby_tRiteVMBluetooth_cTask_resume( p_that ) \
	  tTask_eTask_resume( \
	   (p_that)->_inib->cTask )
#define nMruby_tRiteVMBluetooth_cTask_raiseException( p_that, pattern ) \
	  tTask_eTask_raiseException( \
	   (p_that)->_inib->cTask, (pattern) )
#define nMruby_tRiteVMBluetooth_cTask_referException( p_that, pk_rtex ) \
	  tTask_eTask_referException( \
	   (p_that)->_inib->cTask, (pk_rtex) )
#define nMruby_tRiteVMBluetooth_cTask_startOverRunHandler( p_that, ovrtim ) \
	  tTask_eTask_startOverRunHandler( \
	   (p_that)->_inib->cTask, (ovrtim) )
#define nMruby_tRiteVMBluetooth_cTask_stopOverRunHandler( p_that ) \
	  tTask_eTask_stopOverRunHandler( \
	   (p_that)->_inib->cTask )
#define nMruby_tRiteVMBluetooth_cTask_referOverRunHandler( p_that, pk_rovr ) \
	  tTask_eTask_referOverRunHandler( \
	   (p_that)->_inib->cTask, (pk_rovr) )
#define nMruby_tRiteVMBluetooth_cReset_reset( p_that ) \
	  tReset_eReset_reset( \
	   &tReset_CB_tab[0] )
#define nMruby_tRiteVMBluetooth_cCyclic_start( p_that ) \
	  ((ER (*)())0)()
	  /* optional no entry port joined */
#define nMruby_tRiteVMBluetooth_cCyclic_stop( p_that ) \
	  ((ER (*)())0)()
	  /* optional no entry port joined */
#define nMruby_tRiteVMBluetooth_cCyclic_refer( p_that, pk_cyclicHandlerStatus ) \
	  ((ER (*)())0)()
	  /* optional no entry port joined */
#define nMruby_tRiteVMBluetooth_cEventflag_set( p_that, subscript, setPattern ) \
	  (p_that)->_inib->cEventflag[subscript]->VMT->set__T( \
	   (p_that)->_inib->cEventflag[subscript], (setPattern) )
#define nMruby_tRiteVMBluetooth_cEventflag_clear( p_that, subscript, clearPattern ) \
	  (p_that)->_inib->cEventflag[subscript]->VMT->clear__T( \
	   (p_that)->_inib->cEventflag[subscript], (clearPattern) )
#define nMruby_tRiteVMBluetooth_cEventflag_wait( p_that, subscript, waitPattern, waitFlagMode, p_flagPattern ) \
	  (p_that)->_inib->cEventflag[subscript]->VMT->wait__T( \
	   (p_that)->_inib->cEventflag[subscript], (waitPattern), (waitFlagMode), (p_flagPattern) )
#define nMruby_tRiteVMBluetooth_cEventflag_waitPolling( p_that, subscript, waitPattern, waitFlagMode, p_flagPattern ) \
	  (p_that)->_inib->cEventflag[subscript]->VMT->waitPolling__T( \
	   (p_that)->_inib->cEventflag[subscript], (waitPattern), (waitFlagMode), (p_flagPattern) )
#define nMruby_tRiteVMBluetooth_cEventflag_waitTimeout( p_that, subscript, waitPattern, waitFlagMode, p_flagPattern, timeout ) \
	  (p_that)->_inib->cEventflag[subscript]->VMT->waitTimeout__T( \
	   (p_that)->_inib->cEventflag[subscript], (waitPattern), (waitFlagMode), (p_flagPattern), (timeout) )
#define nMruby_tRiteVMBluetooth_cEventflag_initialize( p_that, subscript ) \
	  (p_that)->_inib->cEventflag[subscript]->VMT->initialize__T( \
	   (p_that)->_inib->cEventflag[subscript] )
#define nMruby_tRiteVMBluetooth_cEventflag_refer( p_that, subscript, pk_eventflagStatus ) \
	  (p_that)->_inib->cEventflag[subscript]->VMT->refer__T( \
	   (p_that)->_inib->cEventflag[subscript], (pk_eventflagStatus) )
#define nMruby_tRiteVMBluetooth_cSemaphore_signal( p_that ) \
	  tSemaphore_eSemaphore_signal( \
	   &tSemaphore_CB_tab[0] )
#define nMruby_tRiteVMBluetooth_cSemaphore_wait( p_that ) \
	  tSemaphore_eSemaphore_wait( \
	   &tSemaphore_CB_tab[0] )
#define nMruby_tRiteVMBluetooth_cSemaphore_waitPolling( p_that ) \
	  tSemaphore_eSemaphore_waitPolling( \
	   &tSemaphore_CB_tab[0] )
#define nMruby_tRiteVMBluetooth_cSemaphore_waitTimeout( p_that, timeout ) \
	  tSemaphore_eSemaphore_waitTimeout( \
	   &tSemaphore_CB_tab[0], (timeout) )
#define nMruby_tRiteVMBluetooth_cSemaphore_initialize( p_that ) \
	  tSemaphore_eSemaphore_initialize( \
	   &tSemaphore_CB_tab[0] )
#define nMruby_tRiteVMBluetooth_cSemaphore_refer( p_that, pk_semaphoreStatus ) \
	  tSemaphore_eSemaphore_refer( \
	   &tSemaphore_CB_tab[0], (pk_semaphoreStatus) )
#define nMruby_tRiteVMBluetooth_cInit_initializeBridge( p_that, mrb ) \
	  nMruby_tTECSInitializer_eInitialize_initializeBridge( \
	   &nMruby_tTECSInitializer_CB_tab[0], (mrb) )
#define nMruby_tRiteVMBluetooth_cMalloc_initializeMemoryPool( p_that ) \
	  tTLSFMalloc_eMalloc_initializeMemoryPool( \
	   (p_that)->_inib->cMalloc )
#define nMruby_tRiteVMBluetooth_cMalloc_calloc( p_that, nelem, elem_size ) \
	  tTLSFMalloc_eMalloc_calloc( \
	   (p_that)->_inib->cMalloc, (nelem), (elem_size) )
#define nMruby_tRiteVMBluetooth_cMalloc_malloc( p_that, size ) \
	  tTLSFMalloc_eMalloc_malloc( \
	   (p_that)->_inib->cMalloc, (size) )
#define nMruby_tRiteVMBluetooth_cMalloc_realloc( p_that, ptr, new_size ) \
	  tTLSFMalloc_eMalloc_realloc( \
	   (p_that)->_inib->cMalloc, (ptr), (new_size) )
#define nMruby_tRiteVMBluetooth_cMalloc_free( p_that, ptr ) \
	  tTLSFMalloc_eMalloc_free( \
	   (p_that)->_inib->cMalloc, (ptr) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eMrubyBody */
void           nMruby_tRiteVMBluetooth_eMrubyBody_main_skel( const struct tag_sTaskBody_VDES *epd);
/* eRiteVM */
void           nMruby_tRiteVMBluetooth_eRiteVM_reset_skel( const struct tag_sRiteVM_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  nMruby_tRiteVMBluetooth_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tRiteVMBluetooth_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nMruby_tRiteVMBluetooth_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nMruby_tRiteVMBluetooth_IDX

#define tRiteVMBluetooth_IDX  nMruby_tRiteVMBluetooth_IDX

/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_irepLib         nMruby_tRiteVMBluetooth_ATTR_irepLib( p_cellcb )
#define ATTR_irepAppSize     nMruby_tRiteVMBluetooth_ATTR_irepAppSize( p_cellcb )
#define ATTR_setptn          nMruby_tRiteVMBluetooth_ATTR_setptn( p_cellcb )


/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_mrb              nMruby_tRiteVMBluetooth_VAR_mrb( p_cellcb )
#define VAR_context          nMruby_tRiteVMBluetooth_VAR_context( p_cellcb )
#define VAR_irepApp          nMruby_tRiteVMBluetooth_VAR_irepApp( p_cellcb )

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define sleep( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_sleep( p_cellcb ))
#define sleepTimeout( timeout ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_sleepTimeout( p_cellcb, timeout ))
#define delay( delayTime ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_delay( p_cellcb, delayTime ))
#define exitTask( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_exitTask( p_cellcb ))
#define getTaskId( p_taskId ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_getTaskId( p_cellcb, p_taskId ))
#define rotateReadyQueue( taskPriority ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_rotateReadyQueue( p_cellcb, taskPriority ))
#define getTime( p_systemTime ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_getTime( p_cellcb, p_systemTime ))
#define getMicroTime( p_systemMicroTime ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_getMicroTime( p_cellcb, p_systemMicroTime ))
#define lockCpu( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_lockCpu( p_cellcb ))
#define unlockCpu( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_unlockCpu( p_cellcb ))
#define disableDispatch( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_disableDispatch( p_cellcb ))
#define enableDispatch( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_enableDispatch( p_cellcb ))
#define disableTaskException( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_disableTaskException( p_cellcb ))
#define enableTaskException( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_enableTaskException( p_cellcb ))
#define changeInterruptPriorityMask( interruptPriority ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_changeInterruptPriorityMask( p_cellcb, interruptPriority ))
#define getInterruptPriorityMask( p_interruptPriority ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_getInterruptPriorityMask( p_cellcb, p_interruptPriority ))
#define exitKernel( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_exitKernel( p_cellcb ))
#define senseContext( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_senseContext( p_cellcb ))
#define senseLock( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_senseLock( p_cellcb ))
#define senseDispatch( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_senseDispatch( p_cellcb ))
#define senseDispatchPendingState( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_senseDispatchPendingState( p_cellcb ))
#define senseKernel( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth__require_call_port_tKernel_eKernel_senseKernel( p_cellcb ))
#define cTask_activate( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cTask_activate( p_cellcb ))
#define cTask_cancelActivate( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cTask_cancelActivate( p_cellcb ))
#define cTask_terminate( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cTask_terminate( p_cellcb ))
#define cTask_changePriority( priority ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cTask_changePriority( p_cellcb, priority ))
#define cTask_getPriority( p_priority ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cTask_getPriority( p_cellcb, p_priority ))
#define cTask_refer( pk_taskStatus ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cTask_refer( p_cellcb, pk_taskStatus ))
#define cTask_wakeup( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cTask_wakeup( p_cellcb ))
#define cTask_cancelWakeup( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cTask_cancelWakeup( p_cellcb ))
#define cTask_releaseWait( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cTask_releaseWait( p_cellcb ))
#define cTask_suspend( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cTask_suspend( p_cellcb ))
#define cTask_resume( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cTask_resume( p_cellcb ))
#define cTask_raiseException( pattern ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cTask_raiseException( p_cellcb, pattern ))
#define cTask_referException( pk_rtex ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cTask_referException( p_cellcb, pk_rtex ))
#define cTask_startOverRunHandler( ovrtim ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cTask_startOverRunHandler( p_cellcb, ovrtim ))
#define cTask_stopOverRunHandler( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cTask_stopOverRunHandler( p_cellcb ))
#define cTask_referOverRunHandler( pk_rovr ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cTask_referOverRunHandler( p_cellcb, pk_rovr ))
#define cReset_reset( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cReset_reset( p_cellcb ))
#define cCyclic_start( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cCyclic_start( p_cellcb ))
#define cCyclic_stop( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cCyclic_stop( p_cellcb ))
#define cCyclic_refer( pk_cyclicHandlerStatus ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cCyclic_refer( p_cellcb, pk_cyclicHandlerStatus ))
#define cEventflag_set( subscript, setPattern ) \
          nMruby_tRiteVMBluetooth_cEventflag_set( p_cellcb, subscript, setPattern )
#define cEventflag_clear( subscript, clearPattern ) \
          nMruby_tRiteVMBluetooth_cEventflag_clear( p_cellcb, subscript, clearPattern )
#define cEventflag_wait( subscript, waitPattern, waitFlagMode, p_flagPattern ) \
          nMruby_tRiteVMBluetooth_cEventflag_wait( p_cellcb, subscript, waitPattern, waitFlagMode, p_flagPattern )
#define cEventflag_waitPolling( subscript, waitPattern, waitFlagMode, p_flagPattern ) \
          nMruby_tRiteVMBluetooth_cEventflag_waitPolling( p_cellcb, subscript, waitPattern, waitFlagMode, p_flagPattern )
#define cEventflag_waitTimeout( subscript, waitPattern, waitFlagMode, p_flagPattern, timeout ) \
          nMruby_tRiteVMBluetooth_cEventflag_waitTimeout( p_cellcb, subscript, waitPattern, waitFlagMode, p_flagPattern, timeout )
#define cEventflag_initialize( subscript ) \
          nMruby_tRiteVMBluetooth_cEventflag_initialize( p_cellcb, subscript )
#define cEventflag_refer( subscript, pk_eventflagStatus ) \
          nMruby_tRiteVMBluetooth_cEventflag_refer( p_cellcb, subscript, pk_eventflagStatus )
#define cSemaphore_signal( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cSemaphore_signal( p_cellcb ))
#define cSemaphore_wait( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cSemaphore_wait( p_cellcb ))
#define cSemaphore_waitPolling( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cSemaphore_waitPolling( p_cellcb ))
#define cSemaphore_waitTimeout( timeout ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cSemaphore_waitTimeout( p_cellcb, timeout ))
#define cSemaphore_initialize( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cSemaphore_initialize( p_cellcb ))
#define cSemaphore_refer( pk_semaphoreStatus ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cSemaphore_refer( p_cellcb, pk_semaphoreStatus ))
#define cInit_initializeBridge( mrb ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cInit_initializeBridge( p_cellcb, mrb ))
#define cMalloc_initializeMemoryPool( ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cMalloc_initializeMemoryPool( p_cellcb ))
#define cMalloc_calloc( nelem, elem_size ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cMalloc_calloc( p_cellcb, nelem, elem_size ))
#define cMalloc_malloc( size ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cMalloc_malloc( p_cellcb, size ))
#define cMalloc_realloc( ptr, new_size ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cMalloc_realloc( p_cellcb, ptr, new_size ))
#define cMalloc_free( ptr ) \
          ((void)p_cellcb, nMruby_tRiteVMBluetooth_cMalloc_free( p_cellcb, ptr ))



/* optional �ƤӸ���ƥ��Ȥ���ޥ����û�̷��� #_TOCPA_# */
#define is_cCyclic_joined()\
		nMruby_tRiteVMBluetooth_is_cCyclic_joined(p_cellcb)
#define is_cEventflag_joined(subscript)\
		nMruby_tRiteVMBluetooth_is_cEventflag_joined(p_cellcb,subscript)
#define is_cSemaphore_joined()\
		nMruby_tRiteVMBluetooth_is_cSemaphore_joined(p_cellcb)
#define is_cInit_joined()\
		nMruby_tRiteVMBluetooth_is_cInit_joined(p_cellcb)

/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eMrubyBody_main  nMruby_tRiteVMBluetooth_eMrubyBody_main
#define eRiteVM_reset    nMruby_tRiteVMBluetooth_eRiteVM_reset

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nMruby_tRiteVMBluetooth_N_CELL; (i)++ ){ \
       (p_cb) = &nMruby_tRiteVMBluetooth_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &nMruby_tRiteVMBluetooth_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tRiteVMBluetooth_TECSGENH */
