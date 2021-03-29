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
 * call port: cCall signature: sSignature context:task
 *   ER             cCall_func1( int32_t inval );
 *   ER             cCall_func2( int32_t* outval );
 *   ER             cCall_func3( struct tag stval );
 *   ER             cCall_func4( stTag stval, INT inval );
 *   ER             cCall_func5( stTag* stval, INT inval );
 *   ER             cCall_func6( int8_t* buf, int32_t sz );
 *   ER             cCall_func7( int8_t** buf, int32_t* sz );
 *   ER             cCall_func10( const stTag* stval, int32_t a );
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
 * allocator port for call port:eThroughEntry func:func6 param: buf
 *   ER             eThroughEntry_func6_buf_alloc( int32_t sz, void** ptr );
 *   ER             eThroughEntry_func6_buf_dealloc( const void* ptr );
 * allocator port for call port:eThroughEntry func:func7 param: buf
 *   ER             eThroughEntry_func7_buf_alloc( int32_t sz, void** ptr );
 *   ER             eThroughEntry_func7_buf_dealloc( const void* ptr );
 * allocator port for call port:cCall func:func6 param: buf
 *   ER             cCall_func6_buf_alloc( int32_t sz, void** ptr );
 *   ER             cCall_func6_buf_dealloc( const void* ptr );
 * allocator port for call port:cCall func:func7 param: buf
 *   ER             cCall_func7_buf_alloc( int32_t sz, void** ptr );
 *   ER             cCall_func7_buf_dealloc( const void* ptr );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tTracePlugin_sSignature_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eThroughEntry
 * entry port: eThroughEntry
 * signature:  sSignature
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eThroughEntry_func1
 * name:         eThroughEntry_func1
 * global_name:  tTracePlugin_sSignature_eThroughEntry_func1
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func1(CELLIDX idx, int32_t inval)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSignature_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSignature_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: server.eEntry.func1 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(inval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t inval = %ld;", (long)inval );
    else
    	syslog( LOG_INFO, "    [IN]int32_t inval = %d;", inval );
	retval = cCall_func1( inval );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: server.eEntry.func1", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func2
 * name:         eThroughEntry_func2
 * global_name:  tTracePlugin_sSignature_eThroughEntry_func2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func2(CELLIDX idx, int32_t* outval)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSignature_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSignature_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: server.eEntry.func2 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func2( outval );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: server.eEntry.func2", ATTR_probeName_str, utime );
    if( sizeof(*outval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]int32_t *outval = %ld;", (long)*outval );
    else
    	syslog( LOG_INFO, "    [OUT]int32_t *outval = %d;", *outval );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func3
 * name:         eThroughEntry_func3
 * global_name:  tTracePlugin_sSignature_eThroughEntry_func3
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func3(CELLIDX idx, struct tag stval)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSignature_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSignature_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: server.eEntry.func3 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(stval.member) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t stval.member = %ld;", (long)stval.member );
    else
    	syslog( LOG_INFO, "    [IN]int32_t stval.member = %d;", stval.member );
	retval = cCall_func3( stval );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: server.eEntry.func3", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func4
 * name:         eThroughEntry_func4
 * global_name:  tTracePlugin_sSignature_eThroughEntry_func4
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func4(CELLIDX idx, stTag stval, INT inval)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSignature_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSignature_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: server.eEntry.func4 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(stval.member) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t stval.member = %ld;", (long)stval.member );
    else
    	syslog( LOG_INFO, "    [IN]int32_t stval.member = %d;", stval.member );
    if( sizeof(inval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]INT inval = %ld;", (long)inval );
    else
    	syslog( LOG_INFO, "    [IN]INT inval = %d;", inval );
	retval = cCall_func4( stval, inval );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: server.eEntry.func4", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func5
 * name:         eThroughEntry_func5
 * global_name:  tTracePlugin_sSignature_eThroughEntry_func5
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func5(CELLIDX idx, stTag* stval, INT inval)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSignature_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSignature_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: server.eEntry.func5 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(stval->member) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [INOUT]int32_t stval->member = %ld;", (long)stval->member );
    else
    	syslog( LOG_INFO, "    [INOUT]int32_t stval->member = %d;", stval->member );
    if( sizeof(inval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]INT inval = %ld;", (long)inval );
    else
    	syslog( LOG_INFO, "    [IN]INT inval = %d;", inval );
	retval = cCall_func5( stval, inval );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: server.eEntry.func5", ATTR_probeName_str, utime );
    if( sizeof(stval->member) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [INOUT]int32_t stval->member = %ld;", (long)stval->member );
    else
    	syslog( LOG_INFO, "    [INOUT]int32_t stval->member = %d;", stval->member );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func6
 * name:         eThroughEntry_func6
 * global_name:  tTracePlugin_sSignature_eThroughEntry_func6
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func6(CELLIDX idx, int8_t* buf, int32_t sz)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSignature_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSignature_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: server.eEntry.func6 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    size_is(sz)=%d", sz );
    {
    	int i__0, loop_count__ = (((sz)>256) ? 256 : (sz));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof(buf) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [SEND]int8_t buf[%d]: %02x %02x %02x %02x",
    					i__0, buf[i__0], buf[i__0+1], buf[i__0+2], buf[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [SEND]int8_t buf[%d]: %02lx %02lx %02lx %02lx",
    					i__0, buf[i__0], buf[i__0+1], buf[i__0+2], buf[i__0+3] );
    	} /* for ( i__0 ) */
    	if( i__0 < sz )
    		syslog( LOG_INFO, "    (%d elements are omitted)", sz - i__0 );
    	else if( i__0 > sz )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - sz );
    }
    if( sizeof(sz) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t sz = %ld;", (long)sz );
    else
    	syslog( LOG_INFO, "    [IN]int32_t sz = %d;", sz );
	retval = cCall_func6( buf, sz );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: server.eEntry.func6", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func7
 * name:         eThroughEntry_func7
 * global_name:  tTracePlugin_sSignature_eThroughEntry_func7
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func7(CELLIDX idx, int8_t** buf, int32_t* sz)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSignature_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSignature_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: server.eEntry.func7 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func7( buf, sz );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: server.eEntry.func7", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    size_is(*sz)=%d", *sz );
    {
    	int i__0, loop_count__ = (((*sz)>256) ? 256 : (*sz));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof((*buf)) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [RECEIVE]int8_t buf[%d]: %02x %02x %02x %02x",
    					i__0, (*buf)[i__0], (*buf)[i__0+1], (*buf)[i__0+2], (*buf)[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [RECEIVE]int8_t buf[%d]: %02lx %02lx %02lx %02lx",
    					i__0, (*buf)[i__0], (*buf)[i__0+1], (*buf)[i__0+2], (*buf)[i__0+3] );
    	} /* for ( i__0 ) */
    	if( i__0 < *sz )
    		syslog( LOG_INFO, "    (%d elements are omitted)", *sz - i__0 );
    	else if( i__0 > *sz )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - *sz );
    }
    if( sizeof(*sz) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]int32_t *sz = %ld;", (long)*sz );
    else
    	syslog( LOG_INFO, "    [OUT]int32_t *sz = %d;", *sz );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func10
 * name:         eThroughEntry_func10
 * global_name:  tTracePlugin_sSignature_eThroughEntry_func10
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func10(CELLIDX idx, const stTag* stval, int32_t a)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSignature_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSignature_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: server.eEntry.func10 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( stval ){
        if( sizeof(stval->member) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [IN]int32_t stval->member = %ld;", (long)stval->member );
        else
        	syslog( LOG_INFO, "        [IN]int32_t stval->member = %d;", stval->member );
    } else {
        syslog( LOG_INFO, "    [IN]stval = NULL" );
    }
    if( sizeof(a) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t a = %ld;", (long)a );
    else
    	syslog( LOG_INFO, "    [IN]int32_t a = %d;", a );
	retval = cCall_func10( stval, a );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: server.eEntry.func10", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
