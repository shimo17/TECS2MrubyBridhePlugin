/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tRiteVMBluetooth_template.c => src/tRiteVMBluetooth.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * irepLib          uint8_t*         ATTR_irepLib    
 * irepAppSize      uint32_t         ATTR_irepAppSize
 * setptn           FLGPTN           ATTR_setptn     
 * mrb              mrb_state*       VAR_mrb         
 * context          mrbc_context*    VAR_context     
 * irepApp          uint8_t*         VAR_irepApp     
 *
 * �ƤӸ��ؿ� #_TCPF_#
 * require port: signature:sKernel context:task
 *   ER             sleep( );
 *   ER             sleepTimeout( TMO timeout );
 *   ER             delay( RELTIM delayTime );
 *   ER             exitTask( );
 *   ER             getTaskId( ID* p_taskId );
 *   ER             rotateReadyQueue( PRI taskPriority );
 *   ER             getTime( SYSTIM* p_systemTime );
 *   ER             getMicroTime( SYSUTM* p_systemMicroTime );
 *   ER             lockCpu( );
 *   ER             unlockCpu( );
 *   ER             disableDispatch( );
 *   ER             enableDispatch( );
 *   ER             disableTaskException( );
 *   ER             enableTaskException( );
 *   ER             changeInterruptPriorityMask( PRI interruptPriority );
 *   ER             getInterruptPriorityMask( PRI* p_interruptPriority );
 *   ER             exitKernel( );
 *   bool_t         senseContext( );
 *   bool_t         senseLock( );
 *   bool_t         senseDispatch( );
 *   bool_t         senseDispatchPendingState( );
 *   bool_t         senseKernel( );
 * call port: cTask signature: sTask context:task
 *   ER             cTask_activate( );
 *   ER_UINT        cTask_cancelActivate( );
 *   ER             cTask_terminate( );
 *   ER             cTask_changePriority( PRI priority );
 *   ER             cTask_getPriority( PRI* p_priority );
 *   ER             cTask_refer( T_RTSK* pk_taskStatus );
 *   ER             cTask_wakeup( );
 *   ER_UINT        cTask_cancelWakeup( );
 *   ER             cTask_releaseWait( );
 *   ER             cTask_suspend( );
 *   ER             cTask_resume( );
 *   ER             cTask_raiseException( TEXPTN pattern );
 *   ER             cTask_referException( T_RTEX* pk_rtex );
 *   ER             cTask_startOverRunHandler( OVRTIM ovrtim );
 *   ER             cTask_stopOverRunHandler( );
 *   ER             cTask_referOverRunHandler( T_ROVR* pk_rovr );
 * call port: cReset signature: sReset context:task
 *   void           cReset_reset( );
 * call port: cCyclic signature: sCyclic context:task optional:true
 *   bool_t     is_cCyclic_joined()                     check if joined
 *   ER             cCyclic_start( );
 *   ER             cCyclic_stop( );
 *   ER             cCyclic_refer( T_RCYC* pk_cyclicHandlerStatus );
 * call port: cEventflag signature: sEventflag context:task optional:true
 *   bool_t     is_cEventflag_joined(int subscript)        check if joined
 *   ER             cEventflag_set( subscript, FLGPTN setPattern );
 *   ER             cEventflag_clear( subscript, FLGPTN clearPattern );
 *   ER             cEventflag_wait( subscript, FLGPTN waitPattern, MODE waitFlagMode, FLGPTN* p_flagPattern );
 *   ER             cEventflag_waitPolling( subscript, FLGPTN waitPattern, MODE waitFlagMode, FLGPTN* p_flagPattern );
 *   ER             cEventflag_waitTimeout( subscript, FLGPTN waitPattern, MODE waitFlagMode, FLGPTN* p_flagPattern, TMO timeout );
 *   ER             cEventflag_initialize( subscript );
 *   ER             cEventflag_refer( subscript, T_RFLG* pk_eventflagStatus );
 *       subscript:  0...(NCP_cEventflag-1)
 * call port: cSemaphore signature: sSemaphore context:task optional:true
 *   bool_t     is_cSemaphore_joined()                     check if joined
 *   ER             cSemaphore_signal( );
 *   ER             cSemaphore_wait( );
 *   ER             cSemaphore_waitPolling( );
 *   ER             cSemaphore_waitTimeout( TMO timeout );
 *   ER             cSemaphore_initialize( );
 *   ER             cSemaphore_refer( T_RSEM* pk_semaphoreStatus );
 * call port: cInit signature: nMruby_sInitializeBridge context:task optional:true
 *   bool_t     is_cInit_joined()                     check if joined
 *   void           cInit_initializeBridge( const mrb_state* mrb );
 * call port: cMalloc signature: sMalloc context:task
 *   int            cMalloc_initializeMemoryPool( );
 *   void*          cMalloc_calloc( size_t nelem, size_t elem_size );
 *   void*          cMalloc_malloc( size_t size );
 *   void*          cMalloc_realloc( const void* ptr, size_t new_size );
 *   void           cMalloc_free( const void* ptr );
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "nMruby_tRiteVMBluetooth_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eMrubyBody
 * entry port: eMrubyBody
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eMrubyBody_main
 * name:         eMrubyBody_main
 * global_name:  nMruby_tRiteVMBluetooth_eMrubyBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eMrubyBody_main(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* ���顼���������ɤ򤳤��˵��Ҥ��ޤ� */
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

}

/* #[<ENTRY_PORT>]# eRiteVM
 * entry port: eRiteVM
 * signature:  sRiteVM
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eRiteVM_reset
 * name:         eRiteVM_reset
 * global_name:  nMruby_tRiteVMBluetooth_eRiteVM_reset
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eRiteVM_reset(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* ���顼���������ɤ򤳤��˵��Ҥ��ޤ� */
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
