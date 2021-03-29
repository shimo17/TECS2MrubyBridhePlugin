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
 * call port: cCall signature: sSimple context:task
 *   void           cCall_shutdown( );
 *   ER             cCall_func1( int32_t inval );
 *   ER             cCall_func2( const char_t* str );
 *   ER             cCall_func3( const char_t* msg, int32_t len );
 *   ER             cCall_func4( const char_t** msg, int32_t len );
 *   ER             cCall_func5( const STA** sta, int32_t len );
 *   ER             cCall_func6( const int8_t array[64] );
 *   ER             cCall_func7( const int8_t array2[64][4] );
 *   ER             cCall_func8( const STA arraySt[2] );
 *   ER             cCall_func9( const STA* arraySt[2] );
 *   ER             cCall_func10( int32_t* val );
 *   ER             cCall_func11( char_t* msg, int32_t len );
 *   ER             cCall_func12( char_t** msg );
 *   ER             cCall_func13( STB* sta, int32_t len );
 *   ER             cCall_func14( STB** sta, int32_t len );
 *   ER             cCall_func15( int8_t(* array1)[64] );
 *   ER             cCall_func16( int8_t* array, int16_t* sz );
 *   ER             cCall_func40( int32_t* val );
 *   ER             cCall_func41( char_t* msg, int32_t len );
 *   ER             cCall_func42( char_t** msg );
 *   ER             cCall_func43( STA* sta, int32_t len );
 *   ER             cCall_func44( int8_t* array, int32_t* len );
 *   ER             cCall_func21( int32_t* a );
 *   ER             cCall_func22( STA* sta );
 *   ER             cCall_func23( char_t* str );
 *   ER             cCall_func24( char_t* msg, int32_t len );
 *   ER             cCall_func25( char_t** msg, int32_t len );
 *   ER             cCall_func26( STA** sta, int32_t len );
 *   ER             cCall_func27( int8_t(* array2)[64] );
 *   ER             cCall_func31( int32_t** a );
 *   ER             cCall_func32( STA** sta );
 *   ER             cCall_func33( char_t** str );
 *   ER             cCall_func34( char_t** msg, int32_t* len );
 *   ER             cCall_func35( char_t*** msg, int32_t* len, int32_t* msglen );
 *   ER             cCall_func36( STA** sta, int32_t* len );
 *   ER             cCall_func37( STA*** sta, int32_t* len );
 *   ER             cCall_func38( int8_t(** array2)[64] );
 *   ER             cCall_func39( STA*(** arraySt)[2] );
 *   ER             cCall_func50( int_t i, short_t s, long_t l );
 *   ER             cCall_func51( uint_t i, ushort_t s, ulong_t l );
 *   ER             cCall_func52( int_t* i, short_t* s, long_t* l );
 *   ER             cCall_func53( uint_t* i, ushort_t* s, ulong_t* l );
 *   ER             cCall_func54( char_t c, schar_t sc, uchar_t uc );
 *   ER             cCall_func55( char_t* c, schar_t* sc, uchar_t* uc );
 *   ER             cCall_func56( intptr_t ip, intptr_t* op );
 *   ER             cCall_func60( intptr_t ip, intptr_t* op );
 *   ER             cCall_func61( const int32_t* ip, intptr_t* op );
 *   ER             cCall_func62( int32_t* iop );
 *   ER             cCall_func63( int32_t* sp );
 *   ER             cCall_func64( int32_t** rp, bool_t b_zero );
 *   ER             cCall_func70( STA* sta );
 *   ER             cCall_func71( char_t* str );
 *   ER             cCall_func72( STA** sta, bool_t b_zero );
 *   ER             cCall_func73( char_t** str, bool_t b_zero );
 *   ER             cCall_func80( float32_t val );
 *   ER             cCall_func81( float32_t* val );
 *   ER             cCall_func82( double64_t val );
 *   ER             cCall_func83( double64_t* val );
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
 * allocator port for call port:eThroughEntry func:func21 param: a
 *   ER             eThroughEntry_func21_a_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func21_a_dealloc( const void* ptr );
 *   ER             eThroughEntry_func21_a_printStatistics( );
 * allocator port for call port:eThroughEntry func:func22 param: sta
 *   ER             eThroughEntry_func22_sta_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func22_sta_dealloc( const void* ptr );
 *   ER             eThroughEntry_func22_sta_printStatistics( );
 * allocator port for call port:eThroughEntry func:func23 param: str
 *   ER             eThroughEntry_func23_str_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func23_str_dealloc( const void* ptr );
 *   ER             eThroughEntry_func23_str_printStatistics( );
 * allocator port for call port:eThroughEntry func:func24 param: msg
 *   ER             eThroughEntry_func24_msg_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func24_msg_dealloc( const void* ptr );
 *   ER             eThroughEntry_func24_msg_printStatistics( );
 * allocator port for call port:eThroughEntry func:func25 param: msg
 *   ER             eThroughEntry_func25_msg_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func25_msg_dealloc( const void* ptr );
 *   ER             eThroughEntry_func25_msg_printStatistics( );
 * allocator port for call port:eThroughEntry func:func26 param: sta
 *   ER             eThroughEntry_func26_sta_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func26_sta_dealloc( const void* ptr );
 *   ER             eThroughEntry_func26_sta_printStatistics( );
 * allocator port for call port:eThroughEntry func:func27 param: array2
 *   ER             eThroughEntry_func27_array2_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func27_array2_dealloc( const void* ptr );
 *   ER             eThroughEntry_func27_array2_printStatistics( );
 * allocator port for call port:eThroughEntry func:func31 param: a
 *   ER             eThroughEntry_func31_a_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func31_a_dealloc( const void* ptr );
 *   ER             eThroughEntry_func31_a_printStatistics( );
 * allocator port for call port:eThroughEntry func:func32 param: sta
 *   ER             eThroughEntry_func32_sta_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func32_sta_dealloc( const void* ptr );
 *   ER             eThroughEntry_func32_sta_printStatistics( );
 * allocator port for call port:eThroughEntry func:func33 param: str
 *   ER             eThroughEntry_func33_str_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func33_str_dealloc( const void* ptr );
 *   ER             eThroughEntry_func33_str_printStatistics( );
 * allocator port for call port:eThroughEntry func:func34 param: msg
 *   ER             eThroughEntry_func34_msg_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func34_msg_dealloc( const void* ptr );
 *   ER             eThroughEntry_func34_msg_printStatistics( );
 * allocator port for call port:eThroughEntry func:func35 param: msg
 *   ER             eThroughEntry_func35_msg_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func35_msg_dealloc( const void* ptr );
 *   ER             eThroughEntry_func35_msg_printStatistics( );
 * allocator port for call port:eThroughEntry func:func36 param: sta
 *   ER             eThroughEntry_func36_sta_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func36_sta_dealloc( const void* ptr );
 *   ER             eThroughEntry_func36_sta_printStatistics( );
 * allocator port for call port:eThroughEntry func:func37 param: sta
 *   ER             eThroughEntry_func37_sta_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func37_sta_dealloc( const void* ptr );
 *   ER             eThroughEntry_func37_sta_printStatistics( );
 * allocator port for call port:eThroughEntry func:func38 param: array2
 *   ER             eThroughEntry_func38_array2_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func38_array2_dealloc( const void* ptr );
 *   ER             eThroughEntry_func38_array2_printStatistics( );
 * allocator port for call port:eThroughEntry func:func39 param: arraySt
 *   ER             eThroughEntry_func39_arraySt_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func39_arraySt_dealloc( const void* ptr );
 *   ER             eThroughEntry_func39_arraySt_printStatistics( );
 * allocator port for call port:eThroughEntry func:func63 param: sp
 *   ER             eThroughEntry_func63_sp_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func63_sp_dealloc( const void* ptr );
 *   ER             eThroughEntry_func63_sp_printStatistics( );
 * allocator port for call port:eThroughEntry func:func64 param: rp
 *   ER             eThroughEntry_func64_rp_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func64_rp_dealloc( const void* ptr );
 *   ER             eThroughEntry_func64_rp_printStatistics( );
 * allocator port for call port:eThroughEntry func:func70 param: sta
 *   ER             eThroughEntry_func70_sta_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func70_sta_dealloc( const void* ptr );
 *   ER             eThroughEntry_func70_sta_printStatistics( );
 * allocator port for call port:eThroughEntry func:func71 param: str
 *   ER             eThroughEntry_func71_str_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func71_str_dealloc( const void* ptr );
 *   ER             eThroughEntry_func71_str_printStatistics( );
 * allocator port for call port:eThroughEntry func:func72 param: sta
 *   ER             eThroughEntry_func72_sta_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func72_sta_dealloc( const void* ptr );
 *   ER             eThroughEntry_func72_sta_printStatistics( );
 * allocator port for call port:eThroughEntry func:func73 param: str
 *   ER             eThroughEntry_func73_str_alloc( int32_t size, void** ptr );
 *   ER             eThroughEntry_func73_str_dealloc( const void* ptr );
 *   ER             eThroughEntry_func73_str_printStatistics( );
 * allocator port for call port:cCall func:func21 param: a
 *   ER             cCall_func21_a_alloc( int32_t size, void** ptr );
 *   ER             cCall_func21_a_dealloc( const void* ptr );
 *   ER             cCall_func21_a_printStatistics( );
 * allocator port for call port:cCall func:func22 param: sta
 *   ER             cCall_func22_sta_alloc( int32_t size, void** ptr );
 *   ER             cCall_func22_sta_dealloc( const void* ptr );
 *   ER             cCall_func22_sta_printStatistics( );
 * allocator port for call port:cCall func:func23 param: str
 *   ER             cCall_func23_str_alloc( int32_t size, void** ptr );
 *   ER             cCall_func23_str_dealloc( const void* ptr );
 *   ER             cCall_func23_str_printStatistics( );
 * allocator port for call port:cCall func:func24 param: msg
 *   ER             cCall_func24_msg_alloc( int32_t size, void** ptr );
 *   ER             cCall_func24_msg_dealloc( const void* ptr );
 *   ER             cCall_func24_msg_printStatistics( );
 * allocator port for call port:cCall func:func25 param: msg
 *   ER             cCall_func25_msg_alloc( int32_t size, void** ptr );
 *   ER             cCall_func25_msg_dealloc( const void* ptr );
 *   ER             cCall_func25_msg_printStatistics( );
 * allocator port for call port:cCall func:func26 param: sta
 *   ER             cCall_func26_sta_alloc( int32_t size, void** ptr );
 *   ER             cCall_func26_sta_dealloc( const void* ptr );
 *   ER             cCall_func26_sta_printStatistics( );
 * allocator port for call port:cCall func:func27 param: array2
 *   ER             cCall_func27_array2_alloc( int32_t size, void** ptr );
 *   ER             cCall_func27_array2_dealloc( const void* ptr );
 *   ER             cCall_func27_array2_printStatistics( );
 * allocator port for call port:cCall func:func31 param: a
 *   ER             cCall_func31_a_alloc( int32_t size, void** ptr );
 *   ER             cCall_func31_a_dealloc( const void* ptr );
 *   ER             cCall_func31_a_printStatistics( );
 * allocator port for call port:cCall func:func32 param: sta
 *   ER             cCall_func32_sta_alloc( int32_t size, void** ptr );
 *   ER             cCall_func32_sta_dealloc( const void* ptr );
 *   ER             cCall_func32_sta_printStatistics( );
 * allocator port for call port:cCall func:func33 param: str
 *   ER             cCall_func33_str_alloc( int32_t size, void** ptr );
 *   ER             cCall_func33_str_dealloc( const void* ptr );
 *   ER             cCall_func33_str_printStatistics( );
 * allocator port for call port:cCall func:func34 param: msg
 *   ER             cCall_func34_msg_alloc( int32_t size, void** ptr );
 *   ER             cCall_func34_msg_dealloc( const void* ptr );
 *   ER             cCall_func34_msg_printStatistics( );
 * allocator port for call port:cCall func:func35 param: msg
 *   ER             cCall_func35_msg_alloc( int32_t size, void** ptr );
 *   ER             cCall_func35_msg_dealloc( const void* ptr );
 *   ER             cCall_func35_msg_printStatistics( );
 * allocator port for call port:cCall func:func36 param: sta
 *   ER             cCall_func36_sta_alloc( int32_t size, void** ptr );
 *   ER             cCall_func36_sta_dealloc( const void* ptr );
 *   ER             cCall_func36_sta_printStatistics( );
 * allocator port for call port:cCall func:func37 param: sta
 *   ER             cCall_func37_sta_alloc( int32_t size, void** ptr );
 *   ER             cCall_func37_sta_dealloc( const void* ptr );
 *   ER             cCall_func37_sta_printStatistics( );
 * allocator port for call port:cCall func:func38 param: array2
 *   ER             cCall_func38_array2_alloc( int32_t size, void** ptr );
 *   ER             cCall_func38_array2_dealloc( const void* ptr );
 *   ER             cCall_func38_array2_printStatistics( );
 * allocator port for call port:cCall func:func39 param: arraySt
 *   ER             cCall_func39_arraySt_alloc( int32_t size, void** ptr );
 *   ER             cCall_func39_arraySt_dealloc( const void* ptr );
 *   ER             cCall_func39_arraySt_printStatistics( );
 * allocator port for call port:cCall func:func63 param: sp
 *   ER             cCall_func63_sp_alloc( int32_t size, void** ptr );
 *   ER             cCall_func63_sp_dealloc( const void* ptr );
 *   ER             cCall_func63_sp_printStatistics( );
 * allocator port for call port:cCall func:func64 param: rp
 *   ER             cCall_func64_rp_alloc( int32_t size, void** ptr );
 *   ER             cCall_func64_rp_dealloc( const void* ptr );
 *   ER             cCall_func64_rp_printStatistics( );
 * allocator port for call port:cCall func:func70 param: sta
 *   ER             cCall_func70_sta_alloc( int32_t size, void** ptr );
 *   ER             cCall_func70_sta_dealloc( const void* ptr );
 *   ER             cCall_func70_sta_printStatistics( );
 * allocator port for call port:cCall func:func71 param: str
 *   ER             cCall_func71_str_alloc( int32_t size, void** ptr );
 *   ER             cCall_func71_str_dealloc( const void* ptr );
 *   ER             cCall_func71_str_printStatistics( );
 * allocator port for call port:cCall func:func72 param: sta
 *   ER             cCall_func72_sta_alloc( int32_t size, void** ptr );
 *   ER             cCall_func72_sta_dealloc( const void* ptr );
 *   ER             cCall_func72_sta_printStatistics( );
 * allocator port for call port:cCall func:func73 param: str
 *   ER             cCall_func73_str_alloc( int32_t size, void** ptr );
 *   ER             cCall_func73_str_dealloc( const void* ptr );
 *   ER             cCall_func73_str_printStatistics( );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tTracePlugin_sSimple_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eThroughEntry
 * entry port: eThroughEntry
 * signature:  sSimple
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eThroughEntry_shutdown
 * name:         eThroughEntry_shutdown
 * global_name:  tTracePlugin_sSimple_eThroughEntry_shutdown
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
void
eThroughEntry_shutdown(CELLIDX idx)
{
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.shutdown calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	cCall_shutdown( );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.shutdown", ATTR_probeName_str, utime );
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func1
 * name:         eThroughEntry_func1
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func1
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func1(CELLIDX idx, int32_t inval)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func1 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(inval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t inval = %ld;", (long)inval );
    else
    	syslog( LOG_INFO, "    [IN]int32_t inval = %d;", inval );
	retval = cCall_func1( inval );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func1", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func2
 * name:         eThroughEntry_func2
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func2(CELLIDX idx, const char_t* str)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func2 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(*str) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]const char_t *str = %ld;", (long)*str );
    else
    	syslog( LOG_INFO, "    [IN]const char_t *str = %d;", *str );
	retval = cCall_func2( str );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func2", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func3
 * name:         eThroughEntry_func3
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func3
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func3(CELLIDX idx, const char_t* msg, int32_t len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func3 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof(msg) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [IN]const char_t msg[%d]: %02x %02x %02x %02x",
    					i__0, msg[i__0], msg[i__0+1], msg[i__0+2], msg[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [IN]const char_t msg[%d]: %02lx %02lx %02lx %02lx",
    					i__0, msg[i__0], msg[i__0+1], msg[i__0+2], msg[i__0+3] );
    	} /* for ( i__0 ) */
    	if( i__0 < len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", len - i__0 );
    	else if( i__0 > len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - len );
    }
    if( sizeof(len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t len = %ld;", (long)len );
    else
    	syslog( LOG_INFO, "    [IN]int32_t len = %d;", len );
	retval = cCall_func3( msg, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func3", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func4
 * name:         eThroughEntry_func4
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func4
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func4(CELLIDX idx, const char_t** msg, int32_t len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func4 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=1 ){
        if( sizeof(*msg[i__0]) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [IN]const char_t *msg[i__0] = %ld;", (long)*msg[i__0] );
        else
        	syslog( LOG_INFO, "        [IN]const char_t *msg[i__0] = %d;", *msg[i__0] );
    	} /* for ( i__0 ) */
    	if( i__0 < len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", len - i__0 );
    	else if( i__0 > len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - len );
    }
    if( sizeof(len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t len = %ld;", (long)len );
    else
    	syslog( LOG_INFO, "    [IN]int32_t len = %d;", len );
	retval = cCall_func4( msg, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func4", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func5
 * name:         eThroughEntry_func5
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func5
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func5(CELLIDX idx, const STA** sta, int32_t len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func5 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=1 ){
        if( sizeof((sta[i__0])->a) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [IN]int8_t (sta[i__0])->a = %ld;", (long)(sta[i__0])->a );
        else
        	syslog( LOG_INFO, "        [IN]int8_t (sta[i__0])->a = %d;", (sta[i__0])->a );
        if( sizeof((sta[i__0])->b) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [IN]int32_t (sta[i__0])->b = %ld;", (long)(sta[i__0])->b );
        else
        	syslog( LOG_INFO, "        [IN]int32_t (sta[i__0])->b = %d;", (sta[i__0])->b );
        syslog( LOG_INFO, "        size_is((sta[i__0])->len)=%d", (sta[i__0])->len );
        {
        	int i__1, loop_count__ = ((((sta[i__0])->len)>16) ? 16 : ((sta[i__0])->len));
        	for( i__1 = 0; i__1 < loop_count__; i__1+=4 ){
        		if( sizeof(((sta[i__0])->msg)) > sizeof(int_t) )
        			syslog( LOG_INFO, "        [IN]char_t msg[%d]: %02x %02x %02x %02x",
        					i__1, ((sta[i__0])->msg)[i__1], ((sta[i__0])->msg)[i__1+1], ((sta[i__0])->msg)[i__1+2], ((sta[i__0])->msg)[i__1+3] );
        		else
        			syslog( LOG_INFO, "        [IN]char_t msg[%d]: %02lx %02lx %02lx %02lx",
        					i__1, ((sta[i__0])->msg)[i__1], ((sta[i__0])->msg)[i__1+1], ((sta[i__0])->msg)[i__1+2], ((sta[i__0])->msg)[i__1+3] );
        	} /* for ( i__1 ) */
        	if( i__1 < (sta[i__0])->len )
        		syslog( LOG_INFO, "        (%d elements are omitted)", (sta[i__0])->len - i__1 );
        	else if( i__1 > (sta[i__0])->len )
        		syslog( LOG_INFO, "        (last %d elements are void)", i__1 - (sta[i__0])->len );
        }
        if( sizeof((sta[i__0])->len) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [IN]int32_t (sta[i__0])->len = %ld;", (long)(sta[i__0])->len );
        else
        	syslog( LOG_INFO, "        [IN]int32_t (sta[i__0])->len = %d;", (sta[i__0])->len );
        if( sizeof((sta[i__0])->count) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [IN]int32_t (sta[i__0])->count = %ld;", (long)(sta[i__0])->count );
        else
        	syslog( LOG_INFO, "        [IN]int32_t (sta[i__0])->count = %d;", (sta[i__0])->count );
    	} /* for ( i__0 ) */
    	if( i__0 < len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", len - i__0 );
    	else if( i__0 > len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - len );
    }
    if( sizeof(len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t len = %ld;", (long)len );
    else
    	syslog( LOG_INFO, "    [IN]int32_t len = %d;", len );
	retval = cCall_func5( sta, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func5", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func6
 * name:         eThroughEntry_func6
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func6
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func6(CELLIDX idx, const int8_t array[64])
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func6 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func6( array );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func6", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func7
 * name:         eThroughEntry_func7
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func7
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func7(CELLIDX idx, const int8_t array2[64][4])
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func7 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func7( array2 );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func7", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func8
 * name:         eThroughEntry_func8
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func8
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func8(CELLIDX idx, const STA arraySt[2])
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func8 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func8( arraySt );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func8", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func9
 * name:         eThroughEntry_func9
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func9
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func9(CELLIDX idx, const STA* arraySt[2])
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func9 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func9( arraySt );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func9", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func10
 * name:         eThroughEntry_func10
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func10
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func10(CELLIDX idx, int32_t* val)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func10 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func10( val );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func10", ATTR_probeName_str, utime );
    if( sizeof(*val) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]int32_t *val = %ld;", (long)*val );
    else
    	syslog( LOG_INFO, "    [OUT]int32_t *val = %d;", *val );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func11
 * name:         eThroughEntry_func11
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func11
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func11(CELLIDX idx, char_t* msg, int32_t len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func11 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t len = %ld;", (long)len );
    else
    	syslog( LOG_INFO, "    [IN]int32_t len = %d;", len );
	retval = cCall_func11( msg, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func11", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof(msg) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [OUT]char_t msg[%d]: %02x %02x %02x %02x",
    					i__0, msg[i__0], msg[i__0+1], msg[i__0+2], msg[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [OUT]char_t msg[%d]: %02lx %02lx %02lx %02lx",
    					i__0, msg[i__0], msg[i__0+1], msg[i__0+2], msg[i__0+3] );
    	} /* for ( i__0 ) */
    	if( i__0 < len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", len - i__0 );
    	else if( i__0 > len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - len );
    }
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func12
 * name:         eThroughEntry_func12
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func12
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func12(CELLIDX idx, char_t** msg)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func12 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func12( msg );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func12", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    size_is(8)=%d", 8 );
    {
    	int i__0, loop_count__ = (((8)>16) ? 16 : (8));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=1 ){
        if( sizeof(*msg[i__0]) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [OUT]char_t *msg[i__0] = %ld;", (long)*msg[i__0] );
        else
        	syslog( LOG_INFO, "        [OUT]char_t *msg[i__0] = %d;", *msg[i__0] );
    	} /* for ( i__0 ) */
    	if( i__0 < 8 )
    		syslog( LOG_INFO, "    (%d elements are omitted)", 8 - i__0 );
    	else if( i__0 > 8 )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - 8 );
    }
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func13
 * name:         eThroughEntry_func13
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func13
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func13(CELLIDX idx, STB* sta, int32_t len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func13 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t len = %ld;", (long)len );
    else
    	syslog( LOG_INFO, "    [IN]int32_t len = %d;", len );
	retval = cCall_func13( sta, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func13", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=1 ){
        if( sizeof(sta[i__0].a) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [OUT]int8_t sta[i__0].a = %ld;", (long)sta[i__0].a );
        else
        	syslog( LOG_INFO, "        [OUT]int8_t sta[i__0].a = %d;", sta[i__0].a );
        if( sizeof(sta[i__0].b) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [OUT]int32_t sta[i__0].b = %ld;", (long)sta[i__0].b );
        else
        	syslog( LOG_INFO, "        [OUT]int32_t sta[i__0].b = %d;", sta[i__0].b );
    	} /* for ( i__0 ) */
    	if( i__0 < len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", len - i__0 );
    	else if( i__0 > len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - len );
    }
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func14
 * name:         eThroughEntry_func14
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func14
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func14(CELLIDX idx, STB** sta, int32_t len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func14 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t len = %ld;", (long)len );
    else
    	syslog( LOG_INFO, "    [IN]int32_t len = %d;", len );
	retval = cCall_func14( sta, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func14", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=1 ){
        if( sizeof((sta[i__0])->a) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [OUT]int8_t (sta[i__0])->a = %ld;", (long)(sta[i__0])->a );
        else
        	syslog( LOG_INFO, "        [OUT]int8_t (sta[i__0])->a = %d;", (sta[i__0])->a );
        if( sizeof((sta[i__0])->b) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [OUT]int32_t (sta[i__0])->b = %ld;", (long)(sta[i__0])->b );
        else
        	syslog( LOG_INFO, "        [OUT]int32_t (sta[i__0])->b = %d;", (sta[i__0])->b );
    	} /* for ( i__0 ) */
    	if( i__0 < len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", len - i__0 );
    	else if( i__0 > len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - len );
    }
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func15
 * name:         eThroughEntry_func15
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func15
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func15(CELLIDX idx, int8_t(* array1)[64])
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func15 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func15( array1 );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func15", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func16
 * name:         eThroughEntry_func16
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func16
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func16(CELLIDX idx, int8_t* array, int16_t* sz)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func16 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(*sz) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [INOUT]int16_t *sz = %ld;", (long)*sz );
    else
    	syslog( LOG_INFO, "    [INOUT]int16_t *sz = %d;", *sz );
	retval = cCall_func16( array, sz );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func16", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    size_is(*sz)=%d", *sz );
    {
    	int i__0, loop_count__ = (((*sz)>16) ? 16 : (*sz));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof(array) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [OUT]int8_t array[%d]: %02x %02x %02x %02x",
    					i__0, array[i__0], array[i__0+1], array[i__0+2], array[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [OUT]int8_t array[%d]: %02lx %02lx %02lx %02lx",
    					i__0, array[i__0], array[i__0+1], array[i__0+2], array[i__0+3] );
    	} /* for ( i__0 ) */
    	if( i__0 < *sz )
    		syslog( LOG_INFO, "    (%d elements are omitted)", *sz - i__0 );
    	else if( i__0 > *sz )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - *sz );
    }
    if( sizeof(*sz) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [INOUT]int16_t *sz = %ld;", (long)*sz );
    else
    	syslog( LOG_INFO, "    [INOUT]int16_t *sz = %d;", *sz );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func40
 * name:         eThroughEntry_func40
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func40
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func40(CELLIDX idx, int32_t* val)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func40 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(*val) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [INOUT]int32_t *val = %ld;", (long)*val );
    else
    	syslog( LOG_INFO, "    [INOUT]int32_t *val = %d;", *val );
	retval = cCall_func40( val );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func40", ATTR_probeName_str, utime );
    if( sizeof(*val) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [INOUT]int32_t *val = %ld;", (long)*val );
    else
    	syslog( LOG_INFO, "    [INOUT]int32_t *val = %d;", *val );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func41
 * name:         eThroughEntry_func41
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func41
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func41(CELLIDX idx, char_t* msg, int32_t len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func41 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof(msg) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [INOUT]char_t msg[%d]: %02x %02x %02x %02x",
    					i__0, msg[i__0], msg[i__0+1], msg[i__0+2], msg[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [INOUT]char_t msg[%d]: %02lx %02lx %02lx %02lx",
    					i__0, msg[i__0], msg[i__0+1], msg[i__0+2], msg[i__0+3] );
    	} /* for ( i__0 ) */
    	if( i__0 < len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", len - i__0 );
    	else if( i__0 > len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - len );
    }
    if( sizeof(len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t len = %ld;", (long)len );
    else
    	syslog( LOG_INFO, "    [IN]int32_t len = %d;", len );
	retval = cCall_func41( msg, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func41", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof(msg) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [INOUT]char_t msg[%d]: %02x %02x %02x %02x",
    					i__0, msg[i__0], msg[i__0+1], msg[i__0+2], msg[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [INOUT]char_t msg[%d]: %02lx %02lx %02lx %02lx",
    					i__0, msg[i__0], msg[i__0+1], msg[i__0+2], msg[i__0+3] );
    	} /* for ( i__0 ) */
    	if( i__0 < len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", len - i__0 );
    	else if( i__0 > len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - len );
    }
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func42
 * name:         eThroughEntry_func42
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func42
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func42(CELLIDX idx, char_t** msg)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func42 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    size_is(8)=%d", 8 );
    {
    	int i__0, loop_count__ = (((8)>16) ? 16 : (8));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=1 ){
        if( sizeof(*msg[i__0]) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [INOUT]char_t *msg[i__0] = %ld;", (long)*msg[i__0] );
        else
        	syslog( LOG_INFO, "        [INOUT]char_t *msg[i__0] = %d;", *msg[i__0] );
    	} /* for ( i__0 ) */
    	if( i__0 < 8 )
    		syslog( LOG_INFO, "    (%d elements are omitted)", 8 - i__0 );
    	else if( i__0 > 8 )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - 8 );
    }
	retval = cCall_func42( msg );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func42", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    size_is(8)=%d", 8 );
    {
    	int i__0, loop_count__ = (((8)>16) ? 16 : (8));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=1 ){
        if( sizeof(*msg[i__0]) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [INOUT]char_t *msg[i__0] = %ld;", (long)*msg[i__0] );
        else
        	syslog( LOG_INFO, "        [INOUT]char_t *msg[i__0] = %d;", *msg[i__0] );
    	} /* for ( i__0 ) */
    	if( i__0 < 8 )
    		syslog( LOG_INFO, "    (%d elements are omitted)", 8 - i__0 );
    	else if( i__0 > 8 )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - 8 );
    }
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func43
 * name:         eThroughEntry_func43
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func43
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func43(CELLIDX idx, STA* sta, int32_t len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func43 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=1 ){
        if( sizeof(sta[i__0].a) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [INOUT]int8_t sta[i__0].a = %ld;", (long)sta[i__0].a );
        else
        	syslog( LOG_INFO, "        [INOUT]int8_t sta[i__0].a = %d;", sta[i__0].a );
        if( sizeof(sta[i__0].b) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [INOUT]int32_t sta[i__0].b = %ld;", (long)sta[i__0].b );
        else
        	syslog( LOG_INFO, "        [INOUT]int32_t sta[i__0].b = %d;", sta[i__0].b );
        syslog( LOG_INFO, "        size_is(sta[i__0].len)=%d", sta[i__0].len );
        {
        	int i__1, loop_count__ = (((sta[i__0].len)>16) ? 16 : (sta[i__0].len));
        	for( i__1 = 0; i__1 < loop_count__; i__1+=4 ){
        		if( sizeof((sta[i__0].msg)) > sizeof(int_t) )
        			syslog( LOG_INFO, "        [INOUT]char_t msg[%d]: %02x %02x %02x %02x",
        					i__1, (sta[i__0].msg)[i__1], (sta[i__0].msg)[i__1+1], (sta[i__0].msg)[i__1+2], (sta[i__0].msg)[i__1+3] );
        		else
        			syslog( LOG_INFO, "        [INOUT]char_t msg[%d]: %02lx %02lx %02lx %02lx",
        					i__1, (sta[i__0].msg)[i__1], (sta[i__0].msg)[i__1+1], (sta[i__0].msg)[i__1+2], (sta[i__0].msg)[i__1+3] );
        	} /* for ( i__1 ) */
        	if( i__1 < sta[i__0].len )
        		syslog( LOG_INFO, "        (%d elements are omitted)", sta[i__0].len - i__1 );
        	else if( i__1 > sta[i__0].len )
        		syslog( LOG_INFO, "        (last %d elements are void)", i__1 - sta[i__0].len );
        }
        if( sizeof(sta[i__0].len) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [INOUT]int32_t sta[i__0].len = %ld;", (long)sta[i__0].len );
        else
        	syslog( LOG_INFO, "        [INOUT]int32_t sta[i__0].len = %d;", sta[i__0].len );
        if( sizeof(sta[i__0].count) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [INOUT]int32_t sta[i__0].count = %ld;", (long)sta[i__0].count );
        else
        	syslog( LOG_INFO, "        [INOUT]int32_t sta[i__0].count = %d;", sta[i__0].count );
    	} /* for ( i__0 ) */
    	if( i__0 < len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", len - i__0 );
    	else if( i__0 > len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - len );
    }
    if( sizeof(len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t len = %ld;", (long)len );
    else
    	syslog( LOG_INFO, "    [IN]int32_t len = %d;", len );
	retval = cCall_func43( sta, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func43", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=1 ){
        if( sizeof(sta[i__0].a) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [INOUT]int8_t sta[i__0].a = %ld;", (long)sta[i__0].a );
        else
        	syslog( LOG_INFO, "        [INOUT]int8_t sta[i__0].a = %d;", sta[i__0].a );
        if( sizeof(sta[i__0].b) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [INOUT]int32_t sta[i__0].b = %ld;", (long)sta[i__0].b );
        else
        	syslog( LOG_INFO, "        [INOUT]int32_t sta[i__0].b = %d;", sta[i__0].b );
        syslog( LOG_INFO, "        size_is(sta[i__0].len)=%d", sta[i__0].len );
        {
        	int i__1, loop_count__ = (((sta[i__0].len)>16) ? 16 : (sta[i__0].len));
        	for( i__1 = 0; i__1 < loop_count__; i__1+=4 ){
        		if( sizeof((sta[i__0].msg)) > sizeof(int_t) )
        			syslog( LOG_INFO, "        [INOUT]char_t msg[%d]: %02x %02x %02x %02x",
        					i__1, (sta[i__0].msg)[i__1], (sta[i__0].msg)[i__1+1], (sta[i__0].msg)[i__1+2], (sta[i__0].msg)[i__1+3] );
        		else
        			syslog( LOG_INFO, "        [INOUT]char_t msg[%d]: %02lx %02lx %02lx %02lx",
        					i__1, (sta[i__0].msg)[i__1], (sta[i__0].msg)[i__1+1], (sta[i__0].msg)[i__1+2], (sta[i__0].msg)[i__1+3] );
        	} /* for ( i__1 ) */
        	if( i__1 < sta[i__0].len )
        		syslog( LOG_INFO, "        (%d elements are omitted)", sta[i__0].len - i__1 );
        	else if( i__1 > sta[i__0].len )
        		syslog( LOG_INFO, "        (last %d elements are void)", i__1 - sta[i__0].len );
        }
        if( sizeof(sta[i__0].len) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [INOUT]int32_t sta[i__0].len = %ld;", (long)sta[i__0].len );
        else
        	syslog( LOG_INFO, "        [INOUT]int32_t sta[i__0].len = %d;", sta[i__0].len );
        if( sizeof(sta[i__0].count) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [INOUT]int32_t sta[i__0].count = %ld;", (long)sta[i__0].count );
        else
        	syslog( LOG_INFO, "        [INOUT]int32_t sta[i__0].count = %d;", sta[i__0].count );
    	} /* for ( i__0 ) */
    	if( i__0 < len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", len - i__0 );
    	else if( i__0 > len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - len );
    }
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func44
 * name:         eThroughEntry_func44
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func44
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func44(CELLIDX idx, int8_t* array, int32_t* len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func44 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    size_is(*len)=%d", *len );
    {
    	int i__0, loop_count__ = (((*len)>16) ? 16 : (*len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof(array) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [INOUT]int8_t array[%d]: %02x %02x %02x %02x",
    					i__0, array[i__0], array[i__0+1], array[i__0+2], array[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [INOUT]int8_t array[%d]: %02lx %02lx %02lx %02lx",
    					i__0, array[i__0], array[i__0+1], array[i__0+2], array[i__0+3] );
    	} /* for ( i__0 ) */
    	if( i__0 < *len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", *len - i__0 );
    	else if( i__0 > *len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - *len );
    }
    if( sizeof(*len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [INOUT]int32_t *len = %ld;", (long)*len );
    else
    	syslog( LOG_INFO, "    [INOUT]int32_t *len = %d;", *len );
	retval = cCall_func44( array, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func44", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    size_is(*len)=%d", *len );
    {
    	int i__0, loop_count__ = (((*len)>16) ? 16 : (*len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof(array) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [INOUT]int8_t array[%d]: %02x %02x %02x %02x",
    					i__0, array[i__0], array[i__0+1], array[i__0+2], array[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [INOUT]int8_t array[%d]: %02lx %02lx %02lx %02lx",
    					i__0, array[i__0], array[i__0+1], array[i__0+2], array[i__0+3] );
    	} /* for ( i__0 ) */
    	if( i__0 < *len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", *len - i__0 );
    	else if( i__0 > *len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - *len );
    }
    if( sizeof(*len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [INOUT]int32_t *len = %ld;", (long)*len );
    else
    	syslog( LOG_INFO, "    [INOUT]int32_t *len = %d;", *len );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func21
 * name:         eThroughEntry_func21
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func21
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func21(CELLIDX idx, int32_t* a)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func21 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(*a) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [SEND]int32_t *a = %ld;", (long)*a );
    else
    	syslog( LOG_INFO, "    [SEND]int32_t *a = %d;", *a );
	retval = cCall_func21( a );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func21", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func22
 * name:         eThroughEntry_func22
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func22
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func22(CELLIDX idx, STA* sta)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func22 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(sta->a) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [SEND]int8_t sta->a = %ld;", (long)sta->a );
    else
    	syslog( LOG_INFO, "    [SEND]int8_t sta->a = %d;", sta->a );
    if( sizeof(sta->b) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [SEND]int32_t sta->b = %ld;", (long)sta->b );
    else
    	syslog( LOG_INFO, "    [SEND]int32_t sta->b = %d;", sta->b );
    syslog( LOG_INFO, "    size_is(sta->len)=%d", sta->len );
    {
    	int i__0, loop_count__ = (((sta->len)>16) ? 16 : (sta->len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof((sta->msg)) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [SEND]char_t msg[%d]: %02x %02x %02x %02x",
    					i__0, (sta->msg)[i__0], (sta->msg)[i__0+1], (sta->msg)[i__0+2], (sta->msg)[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [SEND]char_t msg[%d]: %02lx %02lx %02lx %02lx",
    					i__0, (sta->msg)[i__0], (sta->msg)[i__0+1], (sta->msg)[i__0+2], (sta->msg)[i__0+3] );
    	} /* for ( i__0 ) */
    	if( i__0 < sta->len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", sta->len - i__0 );
    	else if( i__0 > sta->len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - sta->len );
    }
    if( sizeof(sta->len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [SEND]int32_t sta->len = %ld;", (long)sta->len );
    else
    	syslog( LOG_INFO, "    [SEND]int32_t sta->len = %d;", sta->len );
    if( sizeof(sta->count) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [SEND]int32_t sta->count = %ld;", (long)sta->count );
    else
    	syslog( LOG_INFO, "    [SEND]int32_t sta->count = %d;", sta->count );
	retval = cCall_func22( sta );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func22", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func23
 * name:         eThroughEntry_func23
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func23
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func23(CELLIDX idx, char_t* str)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func23 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(*str) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [SEND]char_t *str = %ld;", (long)*str );
    else
    	syslog( LOG_INFO, "    [SEND]char_t *str = %d;", *str );
	retval = cCall_func23( str );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func23", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func24
 * name:         eThroughEntry_func24
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func24
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func24(CELLIDX idx, char_t* msg, int32_t len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func24 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof(msg) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [SEND]char_t msg[%d]: %02x %02x %02x %02x",
    					i__0, msg[i__0], msg[i__0+1], msg[i__0+2], msg[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [SEND]char_t msg[%d]: %02lx %02lx %02lx %02lx",
    					i__0, msg[i__0], msg[i__0+1], msg[i__0+2], msg[i__0+3] );
    	} /* for ( i__0 ) */
    	if( i__0 < len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", len - i__0 );
    	else if( i__0 > len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - len );
    }
    if( sizeof(len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t len = %ld;", (long)len );
    else
    	syslog( LOG_INFO, "    [IN]int32_t len = %d;", len );
	retval = cCall_func24( msg, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func24", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func25
 * name:         eThroughEntry_func25
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func25
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func25(CELLIDX idx, char_t** msg, int32_t len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func25 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=1 ){
        if( sizeof(*msg[i__0]) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [SEND]char_t *msg[i__0] = %ld;", (long)*msg[i__0] );
        else
        	syslog( LOG_INFO, "        [SEND]char_t *msg[i__0] = %d;", *msg[i__0] );
    	} /* for ( i__0 ) */
    	if( i__0 < len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", len - i__0 );
    	else if( i__0 > len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - len );
    }
    if( sizeof(len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t len = %ld;", (long)len );
    else
    	syslog( LOG_INFO, "    [IN]int32_t len = %d;", len );
	retval = cCall_func25( msg, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func25", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func26
 * name:         eThroughEntry_func26
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func26
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func26(CELLIDX idx, STA** sta, int32_t len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func26 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=1 ){
        if( sizeof((sta[i__0])->a) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [SEND]int8_t (sta[i__0])->a = %ld;", (long)(sta[i__0])->a );
        else
        	syslog( LOG_INFO, "        [SEND]int8_t (sta[i__0])->a = %d;", (sta[i__0])->a );
        if( sizeof((sta[i__0])->b) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [SEND]int32_t (sta[i__0])->b = %ld;", (long)(sta[i__0])->b );
        else
        	syslog( LOG_INFO, "        [SEND]int32_t (sta[i__0])->b = %d;", (sta[i__0])->b );
        syslog( LOG_INFO, "        size_is((sta[i__0])->len)=%d", (sta[i__0])->len );
        {
        	int i__1, loop_count__ = ((((sta[i__0])->len)>16) ? 16 : ((sta[i__0])->len));
        	for( i__1 = 0; i__1 < loop_count__; i__1+=4 ){
        		if( sizeof(((sta[i__0])->msg)) > sizeof(int_t) )
        			syslog( LOG_INFO, "        [SEND]char_t msg[%d]: %02x %02x %02x %02x",
        					i__1, ((sta[i__0])->msg)[i__1], ((sta[i__0])->msg)[i__1+1], ((sta[i__0])->msg)[i__1+2], ((sta[i__0])->msg)[i__1+3] );
        		else
        			syslog( LOG_INFO, "        [SEND]char_t msg[%d]: %02lx %02lx %02lx %02lx",
        					i__1, ((sta[i__0])->msg)[i__1], ((sta[i__0])->msg)[i__1+1], ((sta[i__0])->msg)[i__1+2], ((sta[i__0])->msg)[i__1+3] );
        	} /* for ( i__1 ) */
        	if( i__1 < (sta[i__0])->len )
        		syslog( LOG_INFO, "        (%d elements are omitted)", (sta[i__0])->len - i__1 );
        	else if( i__1 > (sta[i__0])->len )
        		syslog( LOG_INFO, "        (last %d elements are void)", i__1 - (sta[i__0])->len );
        }
        if( sizeof((sta[i__0])->len) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [SEND]int32_t (sta[i__0])->len = %ld;", (long)(sta[i__0])->len );
        else
        	syslog( LOG_INFO, "        [SEND]int32_t (sta[i__0])->len = %d;", (sta[i__0])->len );
        if( sizeof((sta[i__0])->count) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [SEND]int32_t (sta[i__0])->count = %ld;", (long)(sta[i__0])->count );
        else
        	syslog( LOG_INFO, "        [SEND]int32_t (sta[i__0])->count = %d;", (sta[i__0])->count );
    	} /* for ( i__0 ) */
    	if( i__0 < len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", len - i__0 );
    	else if( i__0 > len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - len );
    }
    if( sizeof(len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t len = %ld;", (long)len );
    else
    	syslog( LOG_INFO, "    [IN]int32_t len = %d;", len );
	retval = cCall_func26( sta, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func26", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func27
 * name:         eThroughEntry_func27
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func27
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func27(CELLIDX idx, int8_t(* array2)[64])
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func27 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func27( array2 );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func27", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func31
 * name:         eThroughEntry_func31
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func31
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func31(CELLIDX idx, int32_t** a)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func31 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func31( a );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func31", ATTR_probeName_str, utime );
    if( sizeof(**a) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RECEIVE]int32_t **a = %ld;", (long)**a );
    else
    	syslog( LOG_INFO, "    [RECEIVE]int32_t **a = %d;", **a );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func32
 * name:         eThroughEntry_func32
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func32
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func32(CELLIDX idx, STA** sta)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func32 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func32( sta );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func32", ATTR_probeName_str, utime );
    if( sizeof((*sta)->a) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RECEIVE]int8_t (*sta)->a = %ld;", (long)(*sta)->a );
    else
    	syslog( LOG_INFO, "    [RECEIVE]int8_t (*sta)->a = %d;", (*sta)->a );
    if( sizeof((*sta)->b) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RECEIVE]int32_t (*sta)->b = %ld;", (long)(*sta)->b );
    else
    	syslog( LOG_INFO, "    [RECEIVE]int32_t (*sta)->b = %d;", (*sta)->b );
    syslog( LOG_INFO, "    size_is((*sta)->len)=%d", (*sta)->len );
    {
    	int i__0, loop_count__ = ((((*sta)->len)>16) ? 16 : ((*sta)->len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof(((*sta)->msg)) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [RECEIVE]char_t msg[%d]: %02x %02x %02x %02x",
    					i__0, ((*sta)->msg)[i__0], ((*sta)->msg)[i__0+1], ((*sta)->msg)[i__0+2], ((*sta)->msg)[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [RECEIVE]char_t msg[%d]: %02lx %02lx %02lx %02lx",
    					i__0, ((*sta)->msg)[i__0], ((*sta)->msg)[i__0+1], ((*sta)->msg)[i__0+2], ((*sta)->msg)[i__0+3] );
    	} /* for ( i__0 ) */
    	if( i__0 < (*sta)->len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", (*sta)->len - i__0 );
    	else if( i__0 > (*sta)->len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - (*sta)->len );
    }
    if( sizeof((*sta)->len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RECEIVE]int32_t (*sta)->len = %ld;", (long)(*sta)->len );
    else
    	syslog( LOG_INFO, "    [RECEIVE]int32_t (*sta)->len = %d;", (*sta)->len );
    if( sizeof((*sta)->count) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RECEIVE]int32_t (*sta)->count = %ld;", (long)(*sta)->count );
    else
    	syslog( LOG_INFO, "    [RECEIVE]int32_t (*sta)->count = %d;", (*sta)->count );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func33
 * name:         eThroughEntry_func33
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func33
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func33(CELLIDX idx, char_t** str)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func33 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func33( str );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func33", ATTR_probeName_str, utime );
    if( sizeof(**str) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RECEIVE]char_t **str = %ld;", (long)**str );
    else
    	syslog( LOG_INFO, "    [RECEIVE]char_t **str = %d;", **str );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func34
 * name:         eThroughEntry_func34
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func34
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func34(CELLIDX idx, char_t** msg, int32_t* len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func34 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func34( msg, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func34", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    size_is(*len)=%d", *len );
    {
    	int i__0, loop_count__ = (((*len)>16) ? 16 : (*len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof((*msg)) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [RECEIVE]char_t msg[%d]: %02x %02x %02x %02x",
    					i__0, (*msg)[i__0], (*msg)[i__0+1], (*msg)[i__0+2], (*msg)[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [RECEIVE]char_t msg[%d]: %02lx %02lx %02lx %02lx",
    					i__0, (*msg)[i__0], (*msg)[i__0+1], (*msg)[i__0+2], (*msg)[i__0+3] );
    	} /* for ( i__0 ) */
    	if( i__0 < *len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", *len - i__0 );
    	else if( i__0 > *len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - *len );
    }
    if( sizeof(*len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]int32_t *len = %ld;", (long)*len );
    else
    	syslog( LOG_INFO, "    [OUT]int32_t *len = %d;", *len );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func35
 * name:         eThroughEntry_func35
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func35
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func35(CELLIDX idx, char_t*** msg, int32_t* len, int32_t* msglen)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func35 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func35( msg, len, msglen );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func35", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    size_is(*len)=%d", *len );
    {
    	int i__0, loop_count__ = (((*len)>16) ? 16 : (*len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=1 ){
        if( sizeof(*(*msg)[i__0]) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [RECEIVE]char_t *(*msg)[i__0] = %ld;", (long)*(*msg)[i__0] );
        else
        	syslog( LOG_INFO, "        [RECEIVE]char_t *(*msg)[i__0] = %d;", *(*msg)[i__0] );
    	} /* for ( i__0 ) */
    	if( i__0 < *len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", *len - i__0 );
    	else if( i__0 > *len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - *len );
    }
    if( sizeof(*len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]int32_t *len = %ld;", (long)*len );
    else
    	syslog( LOG_INFO, "    [OUT]int32_t *len = %d;", *len );
    if( sizeof(*msglen) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]int32_t *msglen = %ld;", (long)*msglen );
    else
    	syslog( LOG_INFO, "    [OUT]int32_t *msglen = %d;", *msglen );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func36
 * name:         eThroughEntry_func36
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func36
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func36(CELLIDX idx, STA** sta, int32_t* len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func36 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func36( sta, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func36", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    size_is(*len)=%d", *len );
    {
    	int i__0, loop_count__ = (((*len)>16) ? 16 : (*len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=1 ){
        if( sizeof((*sta)[i__0].a) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [RECEIVE]int8_t (*sta)[i__0].a = %ld;", (long)(*sta)[i__0].a );
        else
        	syslog( LOG_INFO, "        [RECEIVE]int8_t (*sta)[i__0].a = %d;", (*sta)[i__0].a );
        if( sizeof((*sta)[i__0].b) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [RECEIVE]int32_t (*sta)[i__0].b = %ld;", (long)(*sta)[i__0].b );
        else
        	syslog( LOG_INFO, "        [RECEIVE]int32_t (*sta)[i__0].b = %d;", (*sta)[i__0].b );
        syslog( LOG_INFO, "        size_is((*sta)[i__0].len)=%d", (*sta)[i__0].len );
        {
        	int i__1, loop_count__ = ((((*sta)[i__0].len)>16) ? 16 : ((*sta)[i__0].len));
        	for( i__1 = 0; i__1 < loop_count__; i__1+=4 ){
        		if( sizeof(((*sta)[i__0].msg)) > sizeof(int_t) )
        			syslog( LOG_INFO, "        [RECEIVE]char_t msg[%d]: %02x %02x %02x %02x",
        					i__1, ((*sta)[i__0].msg)[i__1], ((*sta)[i__0].msg)[i__1+1], ((*sta)[i__0].msg)[i__1+2], ((*sta)[i__0].msg)[i__1+3] );
        		else
        			syslog( LOG_INFO, "        [RECEIVE]char_t msg[%d]: %02lx %02lx %02lx %02lx",
        					i__1, ((*sta)[i__0].msg)[i__1], ((*sta)[i__0].msg)[i__1+1], ((*sta)[i__0].msg)[i__1+2], ((*sta)[i__0].msg)[i__1+3] );
        	} /* for ( i__1 ) */
        	if( i__1 < (*sta)[i__0].len )
        		syslog( LOG_INFO, "        (%d elements are omitted)", (*sta)[i__0].len - i__1 );
        	else if( i__1 > (*sta)[i__0].len )
        		syslog( LOG_INFO, "        (last %d elements are void)", i__1 - (*sta)[i__0].len );
        }
        if( sizeof((*sta)[i__0].len) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [RECEIVE]int32_t (*sta)[i__0].len = %ld;", (long)(*sta)[i__0].len );
        else
        	syslog( LOG_INFO, "        [RECEIVE]int32_t (*sta)[i__0].len = %d;", (*sta)[i__0].len );
        if( sizeof((*sta)[i__0].count) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [RECEIVE]int32_t (*sta)[i__0].count = %ld;", (long)(*sta)[i__0].count );
        else
        	syslog( LOG_INFO, "        [RECEIVE]int32_t (*sta)[i__0].count = %d;", (*sta)[i__0].count );
    	} /* for ( i__0 ) */
    	if( i__0 < *len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", *len - i__0 );
    	else if( i__0 > *len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - *len );
    }
    if( sizeof(*len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]int32_t *len = %ld;", (long)*len );
    else
    	syslog( LOG_INFO, "    [OUT]int32_t *len = %d;", *len );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func37
 * name:         eThroughEntry_func37
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func37
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func37(CELLIDX idx, STA*** sta, int32_t* len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func37 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func37( sta, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func37", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    size_is(*len)=%d", *len );
    {
    	int i__0, loop_count__ = (((*len)>16) ? 16 : (*len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=1 ){
        if( sizeof(((*sta)[i__0])->a) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [RECEIVE]int8_t ((*sta)[i__0])->a = %ld;", (long)((*sta)[i__0])->a );
        else
        	syslog( LOG_INFO, "        [RECEIVE]int8_t ((*sta)[i__0])->a = %d;", ((*sta)[i__0])->a );
        if( sizeof(((*sta)[i__0])->b) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [RECEIVE]int32_t ((*sta)[i__0])->b = %ld;", (long)((*sta)[i__0])->b );
        else
        	syslog( LOG_INFO, "        [RECEIVE]int32_t ((*sta)[i__0])->b = %d;", ((*sta)[i__0])->b );
        syslog( LOG_INFO, "        size_is(((*sta)[i__0])->len)=%d", ((*sta)[i__0])->len );
        {
        	int i__1, loop_count__ = (((((*sta)[i__0])->len)>16) ? 16 : (((*sta)[i__0])->len));
        	for( i__1 = 0; i__1 < loop_count__; i__1+=4 ){
        		if( sizeof((((*sta)[i__0])->msg)) > sizeof(int_t) )
        			syslog( LOG_INFO, "        [RECEIVE]char_t msg[%d]: %02x %02x %02x %02x",
        					i__1, (((*sta)[i__0])->msg)[i__1], (((*sta)[i__0])->msg)[i__1+1], (((*sta)[i__0])->msg)[i__1+2], (((*sta)[i__0])->msg)[i__1+3] );
        		else
        			syslog( LOG_INFO, "        [RECEIVE]char_t msg[%d]: %02lx %02lx %02lx %02lx",
        					i__1, (((*sta)[i__0])->msg)[i__1], (((*sta)[i__0])->msg)[i__1+1], (((*sta)[i__0])->msg)[i__1+2], (((*sta)[i__0])->msg)[i__1+3] );
        	} /* for ( i__1 ) */
        	if( i__1 < ((*sta)[i__0])->len )
        		syslog( LOG_INFO, "        (%d elements are omitted)", ((*sta)[i__0])->len - i__1 );
        	else if( i__1 > ((*sta)[i__0])->len )
        		syslog( LOG_INFO, "        (last %d elements are void)", i__1 - ((*sta)[i__0])->len );
        }
        if( sizeof(((*sta)[i__0])->len) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [RECEIVE]int32_t ((*sta)[i__0])->len = %ld;", (long)((*sta)[i__0])->len );
        else
        	syslog( LOG_INFO, "        [RECEIVE]int32_t ((*sta)[i__0])->len = %d;", ((*sta)[i__0])->len );
        if( sizeof(((*sta)[i__0])->count) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [RECEIVE]int32_t ((*sta)[i__0])->count = %ld;", (long)((*sta)[i__0])->count );
        else
        	syslog( LOG_INFO, "        [RECEIVE]int32_t ((*sta)[i__0])->count = %d;", ((*sta)[i__0])->count );
    	} /* for ( i__0 ) */
    	if( i__0 < *len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", *len - i__0 );
    	else if( i__0 > *len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - *len );
    }
    if( sizeof(*len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]int32_t *len = %ld;", (long)*len );
    else
    	syslog( LOG_INFO, "    [OUT]int32_t *len = %d;", *len );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func38
 * name:         eThroughEntry_func38
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func38
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func38(CELLIDX idx, int8_t(** array2)[64])
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func38 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func38( array2 );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func38", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func39
 * name:         eThroughEntry_func39
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func39
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func39(CELLIDX idx, STA*(** arraySt)[2])
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func39 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func39( arraySt );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func39", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func50
 * name:         eThroughEntry_func50
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func50
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func50(CELLIDX idx, int_t i, short_t s, long_t l)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func50 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(i) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int_t i = %ld;", (long)i );
    else
    	syslog( LOG_INFO, "    [IN]int_t i = %d;", i );
    if( sizeof(s) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]short_t s = %ld;", (long)s );
    else
    	syslog( LOG_INFO, "    [IN]short_t s = %d;", s );
    if( sizeof(l) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]long_t l = %ld;", (long)l );
    else
    	syslog( LOG_INFO, "    [IN]long_t l = %d;", l );
	retval = cCall_func50( i, s, l );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func50", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func51
 * name:         eThroughEntry_func51
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func51
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func51(CELLIDX idx, uint_t i, ushort_t s, ulong_t l)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func51 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(i) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]uint_t i = %ld;", (long)i );
    else
    	syslog( LOG_INFO, "    [IN]uint_t i = %d;", i );
    if( sizeof(s) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]ushort_t s = %ld;", (long)s );
    else
    	syslog( LOG_INFO, "    [IN]ushort_t s = %d;", s );
    if( sizeof(l) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]ulong_t l = %ld;", (long)l );
    else
    	syslog( LOG_INFO, "    [IN]ulong_t l = %d;", l );
	retval = cCall_func51( i, s, l );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func51", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func52
 * name:         eThroughEntry_func52
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func52
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func52(CELLIDX idx, int_t* i, short_t* s, long_t* l)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func52 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func52( i, s, l );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func52", ATTR_probeName_str, utime );
    if( sizeof(*i) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]int_t *i = %ld;", (long)*i );
    else
    	syslog( LOG_INFO, "    [OUT]int_t *i = %d;", *i );
    if( sizeof(*s) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]short_t *s = %ld;", (long)*s );
    else
    	syslog( LOG_INFO, "    [OUT]short_t *s = %d;", *s );
    if( sizeof(*l) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]long_t *l = %ld;", (long)*l );
    else
    	syslog( LOG_INFO, "    [OUT]long_t *l = %d;", *l );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func53
 * name:         eThroughEntry_func53
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func53
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func53(CELLIDX idx, uint_t* i, ushort_t* s, ulong_t* l)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func53 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func53( i, s, l );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func53", ATTR_probeName_str, utime );
    if( sizeof(*i) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]uint_t *i = %ld;", (long)*i );
    else
    	syslog( LOG_INFO, "    [OUT]uint_t *i = %d;", *i );
    if( sizeof(*s) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]ushort_t *s = %ld;", (long)*s );
    else
    	syslog( LOG_INFO, "    [OUT]ushort_t *s = %d;", *s );
    if( sizeof(*l) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]ulong_t *l = %ld;", (long)*l );
    else
    	syslog( LOG_INFO, "    [OUT]ulong_t *l = %d;", *l );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func54
 * name:         eThroughEntry_func54
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func54
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func54(CELLIDX idx, char_t c, schar_t sc, uchar_t uc)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func54 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(c) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]char_t c = %ld;", (long)c );
    else
    	syslog( LOG_INFO, "    [IN]char_t c = %d;", c );
    if( sizeof(sc) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]schar_t sc = %ld;", (long)sc );
    else
    	syslog( LOG_INFO, "    [IN]schar_t sc = %d;", sc );
    if( sizeof(uc) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]uchar_t uc = %ld;", (long)uc );
    else
    	syslog( LOG_INFO, "    [IN]uchar_t uc = %d;", uc );
	retval = cCall_func54( c, sc, uc );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func54", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func55
 * name:         eThroughEntry_func55
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func55
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func55(CELLIDX idx, char_t* c, schar_t* sc, uchar_t* uc)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func55 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func55( c, sc, uc );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func55", ATTR_probeName_str, utime );
    if( sizeof(*c) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]char_t *c = %ld;", (long)*c );
    else
    	syslog( LOG_INFO, "    [OUT]char_t *c = %d;", *c );
    if( sizeof(*sc) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]schar_t *sc = %ld;", (long)*sc );
    else
    	syslog( LOG_INFO, "    [OUT]schar_t *sc = %d;", *sc );
    if( sizeof(*uc) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]uchar_t *uc = %ld;", (long)*uc );
    else
    	syslog( LOG_INFO, "    [OUT]uchar_t *uc = %d;", *uc );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func56
 * name:         eThroughEntry_func56
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func56
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func56(CELLIDX idx, intptr_t ip, intptr_t* op)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func56 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(ip) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]intptr_t ip = %ld;", (long)ip );
    else
    	syslog( LOG_INFO, "    [IN]intptr_t ip = %d;", ip );
	retval = cCall_func56( ip, op );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func56", ATTR_probeName_str, utime );
    if( sizeof(*op) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]intptr_t *op = %ld;", (long)*op );
    else
    	syslog( LOG_INFO, "    [OUT]intptr_t *op = %d;", *op );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func60
 * name:         eThroughEntry_func60
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func60
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func60(CELLIDX idx, intptr_t ip, intptr_t* op)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func60 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(ip) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]intptr_t ip = %ld;", (long)ip );
    else
    	syslog( LOG_INFO, "    [IN]intptr_t ip = %d;", ip );
	retval = cCall_func60( ip, op );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func60", ATTR_probeName_str, utime );
    if( op ){
        if( sizeof(*op) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [OUT]intptr_t *op = %ld;", (long)*op );
        else
        	syslog( LOG_INFO, "        [OUT]intptr_t *op = %d;", *op );
    } else {
        syslog( LOG_INFO, "    [OUT]op = NULL" );
    }
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func61
 * name:         eThroughEntry_func61
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func61
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func61(CELLIDX idx, const int32_t* ip, intptr_t* op)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func61 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( ip ){
        if( sizeof(*ip) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [IN]const int32_t *ip = %ld;", (long)*ip );
        else
        	syslog( LOG_INFO, "        [IN]const int32_t *ip = %d;", *ip );
    } else {
        syslog( LOG_INFO, "    [IN]ip = NULL" );
    }
	retval = cCall_func61( ip, op );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func61", ATTR_probeName_str, utime );
    if( op ){
        if( sizeof(*op) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [OUT]intptr_t *op = %ld;", (long)*op );
        else
        	syslog( LOG_INFO, "        [OUT]intptr_t *op = %d;", *op );
    } else {
        syslog( LOG_INFO, "    [OUT]op = NULL" );
    }
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func62
 * name:         eThroughEntry_func62
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func62
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func62(CELLIDX idx, int32_t* iop)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func62 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( iop ){
        if( sizeof(*iop) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [INOUT]int32_t *iop = %ld;", (long)*iop );
        else
        	syslog( LOG_INFO, "        [INOUT]int32_t *iop = %d;", *iop );
    } else {
        syslog( LOG_INFO, "    [INOUT]iop = NULL" );
    }
	retval = cCall_func62( iop );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func62", ATTR_probeName_str, utime );
    if( iop ){
        if( sizeof(*iop) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [INOUT]int32_t *iop = %ld;", (long)*iop );
        else
        	syslog( LOG_INFO, "        [INOUT]int32_t *iop = %d;", *iop );
    } else {
        syslog( LOG_INFO, "    [INOUT]iop = NULL" );
    }
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func63
 * name:         eThroughEntry_func63
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func63
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func63(CELLIDX idx, int32_t* sp)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func63 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sp ){
        if( sizeof(*sp) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [SEND]int32_t *sp = %ld;", (long)*sp );
        else
        	syslog( LOG_INFO, "        [SEND]int32_t *sp = %d;", *sp );
    } else {
        syslog( LOG_INFO, "    [SEND]sp = NULL" );
    }
	retval = cCall_func63( sp );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func63", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func64
 * name:         eThroughEntry_func64
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func64
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func64(CELLIDX idx, int32_t** rp, bool_t b_zero)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func64 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    [IN]bool_t b_zero = %d;", b_zero );
	retval = cCall_func64( rp, b_zero );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func64", ATTR_probeName_str, utime );
    if( *rp ){
        if( sizeof(**rp) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [RECEIVE]int32_t **rp = %ld;", (long)**rp );
        else
        	syslog( LOG_INFO, "        [RECEIVE]int32_t **rp = %d;", **rp );
    } else {
        syslog( LOG_INFO, "    [RECEIVE]*rp = NULL" );
    }
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func70
 * name:         eThroughEntry_func70
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func70
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func70(CELLIDX idx, STA* sta)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func70 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sta ){
        if( sizeof(sta->a) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [SEND]int8_t sta->a = %ld;", (long)sta->a );
        else
        	syslog( LOG_INFO, "        [SEND]int8_t sta->a = %d;", sta->a );
        if( sizeof(sta->b) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [SEND]int32_t sta->b = %ld;", (long)sta->b );
        else
        	syslog( LOG_INFO, "        [SEND]int32_t sta->b = %d;", sta->b );
        syslog( LOG_INFO, "        size_is(sta->len)=%d", sta->len );
        {
        	int i__1, loop_count__ = (((sta->len)>16) ? 16 : (sta->len));
        	for( i__1 = 0; i__1 < loop_count__; i__1+=4 ){
        		if( sizeof((sta->msg)) > sizeof(int_t) )
        			syslog( LOG_INFO, "        [SEND]char_t msg[%d]: %02x %02x %02x %02x",
        					i__1, (sta->msg)[i__1], (sta->msg)[i__1+1], (sta->msg)[i__1+2], (sta->msg)[i__1+3] );
        		else
        			syslog( LOG_INFO, "        [SEND]char_t msg[%d]: %02lx %02lx %02lx %02lx",
        					i__1, (sta->msg)[i__1], (sta->msg)[i__1+1], (sta->msg)[i__1+2], (sta->msg)[i__1+3] );
        	} /* for ( i__1 ) */
        	if( i__1 < sta->len )
        		syslog( LOG_INFO, "        (%d elements are omitted)", sta->len - i__1 );
        	else if( i__1 > sta->len )
        		syslog( LOG_INFO, "        (last %d elements are void)", i__1 - sta->len );
        }
        if( sizeof(sta->len) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [SEND]int32_t sta->len = %ld;", (long)sta->len );
        else
        	syslog( LOG_INFO, "        [SEND]int32_t sta->len = %d;", sta->len );
        if( sizeof(sta->count) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [SEND]int32_t sta->count = %ld;", (long)sta->count );
        else
        	syslog( LOG_INFO, "        [SEND]int32_t sta->count = %d;", sta->count );
    } else {
        syslog( LOG_INFO, "    [SEND]sta = NULL" );
    }
	retval = cCall_func70( sta );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func70", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func71
 * name:         eThroughEntry_func71
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func71
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func71(CELLIDX idx, char_t* str)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func71 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( str ){
        if( sizeof(*str) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [SEND]char_t *str = %ld;", (long)*str );
        else
        	syslog( LOG_INFO, "        [SEND]char_t *str = %d;", *str );
    } else {
        syslog( LOG_INFO, "    [SEND]str = NULL" );
    }
	retval = cCall_func71( str );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func71", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func72
 * name:         eThroughEntry_func72
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func72
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func72(CELLIDX idx, STA** sta, bool_t b_zero)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func72 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    [IN]bool_t b_zero = %d;", b_zero );
	retval = cCall_func72( sta, b_zero );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func72", ATTR_probeName_str, utime );
    if( *sta ){
        if( sizeof((*sta)->a) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [RECEIVE]int8_t (*sta)->a = %ld;", (long)(*sta)->a );
        else
        	syslog( LOG_INFO, "        [RECEIVE]int8_t (*sta)->a = %d;", (*sta)->a );
        if( sizeof((*sta)->b) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [RECEIVE]int32_t (*sta)->b = %ld;", (long)(*sta)->b );
        else
        	syslog( LOG_INFO, "        [RECEIVE]int32_t (*sta)->b = %d;", (*sta)->b );
        syslog( LOG_INFO, "        size_is((*sta)->len)=%d", (*sta)->len );
        {
        	int i__1, loop_count__ = ((((*sta)->len)>16) ? 16 : ((*sta)->len));
        	for( i__1 = 0; i__1 < loop_count__; i__1+=4 ){
        		if( sizeof(((*sta)->msg)) > sizeof(int_t) )
        			syslog( LOG_INFO, "        [RECEIVE]char_t msg[%d]: %02x %02x %02x %02x",
        					i__1, ((*sta)->msg)[i__1], ((*sta)->msg)[i__1+1], ((*sta)->msg)[i__1+2], ((*sta)->msg)[i__1+3] );
        		else
        			syslog( LOG_INFO, "        [RECEIVE]char_t msg[%d]: %02lx %02lx %02lx %02lx",
        					i__1, ((*sta)->msg)[i__1], ((*sta)->msg)[i__1+1], ((*sta)->msg)[i__1+2], ((*sta)->msg)[i__1+3] );
        	} /* for ( i__1 ) */
        	if( i__1 < (*sta)->len )
        		syslog( LOG_INFO, "        (%d elements are omitted)", (*sta)->len - i__1 );
        	else if( i__1 > (*sta)->len )
        		syslog( LOG_INFO, "        (last %d elements are void)", i__1 - (*sta)->len );
        }
        if( sizeof((*sta)->len) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [RECEIVE]int32_t (*sta)->len = %ld;", (long)(*sta)->len );
        else
        	syslog( LOG_INFO, "        [RECEIVE]int32_t (*sta)->len = %d;", (*sta)->len );
        if( sizeof((*sta)->count) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [RECEIVE]int32_t (*sta)->count = %ld;", (long)(*sta)->count );
        else
        	syslog( LOG_INFO, "        [RECEIVE]int32_t (*sta)->count = %d;", (*sta)->count );
    } else {
        syslog( LOG_INFO, "    [RECEIVE]*sta = NULL" );
    }
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func73
 * name:         eThroughEntry_func73
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func73
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func73(CELLIDX idx, char_t** str, bool_t b_zero)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func73 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    [IN]bool_t b_zero = %d;", b_zero );
	retval = cCall_func73( str, b_zero );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func73", ATTR_probeName_str, utime );
    if( *str ){
        if( sizeof(**str) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [RECEIVE]char_t **str = %ld;", (long)**str );
        else
        	syslog( LOG_INFO, "        [RECEIVE]char_t **str = %d;", **str );
    } else {
        syslog( LOG_INFO, "    [RECEIVE]*str = NULL" );
    }
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func80
 * name:         eThroughEntry_func80
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func80
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func80(CELLIDX idx, float32_t val)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func80 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    [IN]float32_t val = %g;", (double)val );
	retval = cCall_func80( val );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func80", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func81
 * name:         eThroughEntry_func81
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func81
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func81(CELLIDX idx, float32_t* val)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func81 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func81( val );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func81", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    [OUT]float32_t *val = %g;", (double)*val );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func82
 * name:         eThroughEntry_func82
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func82
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func82(CELLIDX idx, double64_t val)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func82 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    [IN]double64_t val = %g;", (double)val );
	retval = cCall_func82( val );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func82", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func83
 * name:         eThroughEntry_func83
 * global_name:  tTracePlugin_sSimple_eThroughEntry_func83
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func83(CELLIDX idx, double64_t* val)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: SimpleServer.eEnt.func83 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_func83( val );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: SimpleServer.eEnt.func83", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    [OUT]double64_t *val = %g;", (double)*val );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
