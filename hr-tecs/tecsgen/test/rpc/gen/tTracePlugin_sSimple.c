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
 *   ER             cCall_onewayPtr( const uint32_t* in );
 *   ER             cCall_onewayArray( const uint32_t* in, int32_t len );
 *   ER             cCall_onewayDoubleArray( const int32_t* in, int32_t len, const int32_t* in2, int32_t len2 );
 *   ER             cCall_onewayStringArray( const char_t** in, int32_t len );
 *   ER             cCall_onewayString( const char_t* in, int32_t len );
 *   ER             cCall_onewayStruct( const struct stA* a );
 *   ER             cCall_onewayStruct2( const struct stA* a, int32_t len );
 *   ER             cCall_onewayInArray( int8_t array0[8] );
 *   ER             cCall_onewayInArray2( const int8_t(* array1)[8] );
 *   ER             cCall_onewayNulable( const int8_t(* array)[3] );
 *   void           cCall_exit( );
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

/* #[<ENTRY_FUNC>]# eThroughEntry_onewayPtr
 * name:         eThroughEntry_onewayPtr
 * global_name:  tTracePlugin_sSimple_eThroughEntry_onewayPtr
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_onewayPtr(CELLIDX idx, const uint32_t* in)
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
	syslog( LOG_INFO, "Enter: %sTime=%d: Simple.eSimple.onewayPtr calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(*in) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]const uint32_t *in = %ld;", (long)*in );
    else
    	syslog( LOG_INFO, "    [IN]const uint32_t *in = %d;", *in );
	retval = cCall_onewayPtr( in );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Simple.eSimple.onewayPtr", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_onewayArray
 * name:         eThroughEntry_onewayArray
 * global_name:  tTracePlugin_sSimple_eThroughEntry_onewayArray
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_onewayArray(CELLIDX idx, const uint32_t* in, int32_t len)
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
	syslog( LOG_INFO, "Enter: %sTime=%d: Simple.eSimple.onewayArray calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof(in) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [IN]const uint32_t in[%d]: %02x %02x %02x %02x",
    					i__0, in[i__0], in[i__0+1], in[i__0+2], in[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [IN]const uint32_t in[%d]: %02lx %02lx %02lx %02lx",
    					i__0, in[i__0], in[i__0+1], in[i__0+2], in[i__0+3] );
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
	retval = cCall_onewayArray( in, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Simple.eSimple.onewayArray", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_onewayDoubleArray
 * name:         eThroughEntry_onewayDoubleArray
 * global_name:  tTracePlugin_sSimple_eThroughEntry_onewayDoubleArray
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_onewayDoubleArray(CELLIDX idx, const int32_t* in, int32_t len, const int32_t* in2, int32_t len2)
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
	syslog( LOG_INFO, "Enter: %sTime=%d: Simple.eSimple.onewayDoubleArray calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof(in) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [IN]const int32_t in[%d]: %02x %02x %02x %02x",
    					i__0, in[i__0], in[i__0+1], in[i__0+2], in[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [IN]const int32_t in[%d]: %02lx %02lx %02lx %02lx",
    					i__0, in[i__0], in[i__0+1], in[i__0+2], in[i__0+3] );
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
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof(in2) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [IN]const int32_t in2[%d]: %02x %02x %02x %02x",
    					i__0, in2[i__0], in2[i__0+1], in2[i__0+2], in2[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [IN]const int32_t in2[%d]: %02lx %02lx %02lx %02lx",
    					i__0, in2[i__0], in2[i__0+1], in2[i__0+2], in2[i__0+3] );
    	} /* for ( i__0 ) */
    	if( i__0 < len )
    		syslog( LOG_INFO, "    (%d elements are omitted)", len - i__0 );
    	else if( i__0 > len )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - len );
    }
    if( sizeof(len2) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t len2 = %ld;", (long)len2 );
    else
    	syslog( LOG_INFO, "    [IN]int32_t len2 = %d;", len2 );
	retval = cCall_onewayDoubleArray( in, len, in2, len2 );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Simple.eSimple.onewayDoubleArray", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_onewayStringArray
 * name:         eThroughEntry_onewayStringArray
 * global_name:  tTracePlugin_sSimple_eThroughEntry_onewayStringArray
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_onewayStringArray(CELLIDX idx, const char_t** in, int32_t len)
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
	syslog( LOG_INFO, "Enter: %sTime=%d: Simple.eSimple.onewayStringArray calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=1 ){
        if( sizeof(*in[i__0]) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [IN]const char_t *in[i__0] = %ld;", (long)*in[i__0] );
        else
        	syslog( LOG_INFO, "        [IN]const char_t *in[i__0] = %d;", *in[i__0] );
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
	retval = cCall_onewayStringArray( in, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Simple.eSimple.onewayStringArray", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_onewayString
 * name:         eThroughEntry_onewayString
 * global_name:  tTracePlugin_sSimple_eThroughEntry_onewayString
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_onewayString(CELLIDX idx, const char_t* in, int32_t len)
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
	syslog( LOG_INFO, "Enter: %sTime=%d: Simple.eSimple.onewayString calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(*in) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]const char_t *in = %ld;", (long)*in );
    else
    	syslog( LOG_INFO, "    [IN]const char_t *in = %d;", *in );
    if( sizeof(len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t len = %ld;", (long)len );
    else
    	syslog( LOG_INFO, "    [IN]int32_t len = %d;", len );
	retval = cCall_onewayString( in, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Simple.eSimple.onewayString", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_onewayStruct
 * name:         eThroughEntry_onewayStruct
 * global_name:  tTracePlugin_sSimple_eThroughEntry_onewayStruct
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_onewayStruct(CELLIDX idx, const struct stA* a)
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
	syslog( LOG_INFO, "Enter: %sTime=%d: Simple.eSimple.onewayStruct calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(a->a) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t a->a = %ld;", (long)a->a );
    else
    	syslog( LOG_INFO, "    [IN]int32_t a->a = %d;", a->a );
    if( sizeof(a->b) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t a->b = %ld;", (long)a->b );
    else
    	syslog( LOG_INFO, "    [IN]int32_t a->b = %d;", a->b );
    if( sizeof(*a->msg) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]char_t *a->msg = %ld;", (long)*a->msg );
    else
    	syslog( LOG_INFO, "    [IN]char_t *a->msg = %d;", *a->msg );
    if( sizeof(a->len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t a->len = %ld;", (long)a->len );
    else
    	syslog( LOG_INFO, "    [IN]int32_t a->len = %d;", a->len );
	retval = cCall_onewayStruct( a );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Simple.eSimple.onewayStruct", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_onewayStruct2
 * name:         eThroughEntry_onewayStruct2
 * global_name:  tTracePlugin_sSimple_eThroughEntry_onewayStruct2
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_onewayStruct2(CELLIDX idx, const struct stA* a, int32_t len)
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
	syslog( LOG_INFO, "Enter: %sTime=%d: Simple.eSimple.onewayStruct2 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=1 ){
        if( sizeof(a[i__0].a) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [IN]int32_t a[i__0].a = %ld;", (long)a[i__0].a );
        else
        	syslog( LOG_INFO, "        [IN]int32_t a[i__0].a = %d;", a[i__0].a );
        if( sizeof(a[i__0].b) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [IN]int32_t a[i__0].b = %ld;", (long)a[i__0].b );
        else
        	syslog( LOG_INFO, "        [IN]int32_t a[i__0].b = %d;", a[i__0].b );
        if( sizeof(*a[i__0].msg) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [IN]char_t *a[i__0].msg = %ld;", (long)*a[i__0].msg );
        else
        	syslog( LOG_INFO, "        [IN]char_t *a[i__0].msg = %d;", *a[i__0].msg );
        if( sizeof(a[i__0].len) > sizeof(int_t) )
        	syslog( LOG_INFO, "        [IN]int32_t a[i__0].len = %ld;", (long)a[i__0].len );
        else
        	syslog( LOG_INFO, "        [IN]int32_t a[i__0].len = %d;", a[i__0].len );
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
	retval = cCall_onewayStruct2( a, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Simple.eSimple.onewayStruct2", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_onewayInArray
 * name:         eThroughEntry_onewayInArray
 * global_name:  tTracePlugin_sSimple_eThroughEntry_onewayInArray
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_onewayInArray(CELLIDX idx, int8_t array0[8])
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
	syslog( LOG_INFO, "Enter: %sTime=%d: Simple.eSimple.onewayInArray calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_onewayInArray( array0 );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Simple.eSimple.onewayInArray", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_onewayInArray2
 * name:         eThroughEntry_onewayInArray2
 * global_name:  tTracePlugin_sSimple_eThroughEntry_onewayInArray2
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_onewayInArray2(CELLIDX idx, const int8_t(* array1)[8])
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
	syslog( LOG_INFO, "Enter: %sTime=%d: Simple.eSimple.onewayInArray2 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_onewayInArray2( array1 );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Simple.eSimple.onewayInArray2", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_onewayNulable
 * name:         eThroughEntry_onewayNulable
 * global_name:  tTracePlugin_sSimple_eThroughEntry_onewayNulable
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_onewayNulable(CELLIDX idx, const int8_t(* array)[3])
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
	syslog( LOG_INFO, "Enter: %sTime=%d: Simple.eSimple.onewayNulable calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( array ){
    } else {
        syslog( LOG_INFO, "    [IN]array = NULL" );
    }
	retval = cCall_onewayNulable( array );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Simple.eSimple.onewayNulable", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_exit
 * name:         eThroughEntry_exit
 * global_name:  tTracePlugin_sSimple_eThroughEntry_exit
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
void
eThroughEntry_exit(CELLIDX idx)
{
	SYSUTM	utime;
	tTracePlugin_sSimple_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSimple_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Simple.eSimple.exit calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	cCall_exit( );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Simple.eSimple.exit", ATTR_probeName_str, utime );
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
