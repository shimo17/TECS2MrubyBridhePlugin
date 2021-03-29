/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * probeName_str    char_t*          ATTR_probeName_str
 * from_str         char_t*          ATTR_from_str   
 *
 * 呼び口関数 #_TCPF_#
 * call port: cCall signature: sSysLog context:task
 *   ER             cCall_write( uint_t prio, const SYSLOG* p_syslog );
 *   ER_UINT        cCall_read( SYSLOG* p_syslog );
 *   ER             cCall_mask( uint_t logmask, uint_t lowmask );
 *   ER             cCall_refer( T_SYSLOG_RLOG* pk_rlog );
 * require port: signature:sSysLog context:task
 *   ER             write( uint_t prio, const SYSLOG* p_syslog );
 *   ER_UINT        read( SYSLOG* p_syslog );
 *   ER             mask( uint_t logmask, uint_t lowmask );
 *   ER             refer( T_SYSLOG_RLOG* pk_rlog );
 * require port: signature:sKernel context:task
 *   ER             delay( RELTIM delay_time );
 *   ER             exitTask( );
 *   ER             getTime( SYSTIM* p_system_time );
 *   ER             getMicroTime( SYSUTM* p_system_micro_time );
 *   ER             exitKernel( );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tTracePlugin_sSysLog_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eThroughEntry
 * entry port: eThroughEntry
 * signature:  sSysLog
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eThroughEntry_write
 * name:         eThroughEntry_write
 * global_name:  tTracePlugin_sSysLog_eThroughEntry_write
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_write(CELLIDX idx, uint_t prio, const SYSLOG* p_syslog)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSysLog_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSysLog_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: ClientSysLog.eSysLog.write calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(prio) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]uint_t prio = %ld;", (long)prio );
    else
    	syslog( LOG_INFO, "    [IN]uint_t prio = %d;", prio );
    if( sizeof(p_syslog->logtype) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]uint_t p_syslog->logtype = %ld;", (long)p_syslog->logtype );
    else
    	syslog( LOG_INFO, "    [IN]uint_t p_syslog->logtype = %d;", p_syslog->logtype );
    if( sizeof(p_syslog->logtim) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]SYSTIM p_syslog->logtim = %ld;", (long)p_syslog->logtim );
    else
    	syslog( LOG_INFO, "    [IN]SYSTIM p_syslog->logtim = %d;", p_syslog->logtim );
	retval = cCall_write( prio, p_syslog );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: ClientSysLog.eSysLog.write", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_read
 * name:         eThroughEntry_read
 * global_name:  tTracePlugin_sSysLog_eThroughEntry_read
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER_UINT
eThroughEntry_read(CELLIDX idx, SYSLOG* p_syslog)
{
	ER_UINT	retval;
	SYSUTM	utime;
	tTracePlugin_sSysLog_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSysLog_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: ClientSysLog.eSysLog.read calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_read( p_syslog );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: ClientSysLog.eSysLog.read", ATTR_probeName_str, utime );
    if( sizeof(p_syslog->logtype) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]uint_t p_syslog->logtype = %ld;", (long)p_syslog->logtype );
    else
    	syslog( LOG_INFO, "    [OUT]uint_t p_syslog->logtype = %d;", p_syslog->logtype );
    if( sizeof(p_syslog->logtim) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]SYSTIM p_syslog->logtim = %ld;", (long)p_syslog->logtim );
    else
    	syslog( LOG_INFO, "    [OUT]SYSTIM p_syslog->logtim = %d;", p_syslog->logtim );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER_UINT retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER_UINT retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_mask
 * name:         eThroughEntry_mask
 * global_name:  tTracePlugin_sSysLog_eThroughEntry_mask
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_mask(CELLIDX idx, uint_t logmask, uint_t lowmask)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSysLog_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSysLog_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: ClientSysLog.eSysLog.mask calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(logmask) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]uint_t logmask = %ld;", (long)logmask );
    else
    	syslog( LOG_INFO, "    [IN]uint_t logmask = %d;", logmask );
    if( sizeof(lowmask) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]uint_t lowmask = %ld;", (long)lowmask );
    else
    	syslog( LOG_INFO, "    [IN]uint_t lowmask = %d;", lowmask );
	retval = cCall_mask( logmask, lowmask );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: ClientSysLog.eSysLog.mask", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_refer
 * name:         eThroughEntry_refer
 * global_name:  tTracePlugin_sSysLog_eThroughEntry_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_refer(CELLIDX idx, T_SYSLOG_RLOG* pk_rlog)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSysLog_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSysLog_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: ClientSysLog.eSysLog.refer calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_refer( pk_rlog );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: ClientSysLog.eSysLog.refer", ATTR_probeName_str, utime );
    if( sizeof(pk_rlog->count) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]uint_t pk_rlog->count = %ld;", (long)pk_rlog->count );
    else
    	syslog( LOG_INFO, "    [OUT]uint_t pk_rlog->count = %d;", pk_rlog->count );
    if( sizeof(pk_rlog->lost) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]uint_t pk_rlog->lost = %ld;", (long)pk_rlog->lost );
    else
    	syslog( LOG_INFO, "    [OUT]uint_t pk_rlog->lost = %d;", pk_rlog->lost );
    if( sizeof(pk_rlog->logmask) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]uint_t pk_rlog->logmask = %ld;", (long)pk_rlog->logmask );
    else
    	syslog( LOG_INFO, "    [OUT]uint_t pk_rlog->logmask = %d;", pk_rlog->logmask );
    if( sizeof(pk_rlog->lowmask) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]uint_t pk_rlog->lowmask = %ld;", (long)pk_rlog->lowmask );
    else
    	syslog( LOG_INFO, "    [OUT]uint_t pk_rlog->lowmask = %d;", pk_rlog->lowmask );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
