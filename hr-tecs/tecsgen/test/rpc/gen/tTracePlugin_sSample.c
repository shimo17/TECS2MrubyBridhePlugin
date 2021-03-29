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
 * call port: cCall signature: sSample context:task
 *   ER             cCall_sayHello( int32_t times );
 *   ER             cCall_howAreYou( char_t* buf, int32_t len );
 *   ER             cCall_giftToYou( char_t* buf, int32_t len );
 *   ER             cCall_returnGiftFromYou( int16_t** buf, int32_t* len );
 *   ER             cCall_transferStruct( const struct stA* a, int32_t len );
 *   ER             cCall_transferStruct2( struct stA a );
 *   ER             cCall_transferInArray( int8_t array0[8] );
 *   ER             cCall_transferInArray2( const int8_t(* array1)[8] );
 *   ER             cCall_transferOutArray( int8_t(* array2)[8] );
 *   unsigned char  cCall_UnsignedTypes( uint8_t in, unsigned short s, uint_t ui, ulong_t ul );
 *   char           cCall_SignedTypes( int8_t in, short s, int_t ui, long_t ul );
 *   ER             cCall_onewayFunc( char_t* buf, int32_t len );
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
 * allocator port for call port:eThroughEntry func:giftToYou param: buf
 *   ER             eThroughEntry_giftToYou_buf_alloc( int32_t size, void** p );
 *   ER             eThroughEntry_giftToYou_buf_dealloc( const void* ptr );
 * allocator port for call port:eThroughEntry func:returnGiftFromYou param: buf
 *   ER             eThroughEntry_returnGiftFromYou_buf_alloc( int32_t size, void** p );
 *   ER             eThroughEntry_returnGiftFromYou_buf_dealloc( const void* ptr );
 * allocator port for call port:eThroughEntry func:onewayFunc param: buf
 *   ER             eThroughEntry_onewayFunc_buf_alloc( int32_t size, void** p );
 *   ER             eThroughEntry_onewayFunc_buf_dealloc( const void* ptr );
 * allocator port for call port:cCall func:giftToYou param: buf
 *   ER             cCall_giftToYou_buf_alloc( int32_t size, void** p );
 *   ER             cCall_giftToYou_buf_dealloc( const void* ptr );
 * allocator port for call port:cCall func:returnGiftFromYou param: buf
 *   ER             cCall_returnGiftFromYou_buf_alloc( int32_t size, void** p );
 *   ER             cCall_returnGiftFromYou_buf_dealloc( const void* ptr );
 * allocator port for call port:cCall func:onewayFunc param: buf
 *   ER             cCall_onewayFunc_buf_alloc( int32_t size, void** p );
 *   ER             cCall_onewayFunc_buf_dealloc( const void* ptr );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tTracePlugin_sSample_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eThroughEntry
 * entry port: eThroughEntry
 * signature:  sSample
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eThroughEntry_sayHello
 * name:         eThroughEntry_sayHello
 * global_name:  tTracePlugin_sSample_eThroughEntry_sayHello
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_sayHello(CELLIDX idx, int32_t times)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSample_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSample_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Sample.eEnt.sayHello calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(times) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t times = %ld;", (long)times );
    else
    	syslog( LOG_INFO, "    [IN]int32_t times = %d;", times );
	retval = cCall_sayHello( times );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Sample.eEnt.sayHello", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_howAreYou
 * name:         eThroughEntry_howAreYou
 * global_name:  tTracePlugin_sSample_eThroughEntry_howAreYou
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_howAreYou(CELLIDX idx, char_t* buf, int32_t len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSample_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSample_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Sample.eEnt.howAreYou calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t len = %ld;", (long)len );
    else
    	syslog( LOG_INFO, "    [IN]int32_t len = %d;", len );
	retval = cCall_howAreYou( buf, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Sample.eEnt.howAreYou", ATTR_probeName_str, utime );
    if( sizeof(*buf) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [OUT]char_t *buf = %ld;", (long)*buf );
    else
    	syslog( LOG_INFO, "    [OUT]char_t *buf = %d;", *buf );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_giftToYou
 * name:         eThroughEntry_giftToYou
 * global_name:  tTracePlugin_sSample_eThroughEntry_giftToYou
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_giftToYou(CELLIDX idx, char_t* buf, int32_t len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSample_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSample_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Sample.eEnt.giftToYou calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof(buf) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [SEND]char_t buf[%d]: %02x %02x %02x %02x",
    					i__0, buf[i__0], buf[i__0+1], buf[i__0+2], buf[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [SEND]char_t buf[%d]: %02lx %02lx %02lx %02lx",
    					i__0, buf[i__0], buf[i__0+1], buf[i__0+2], buf[i__0+3] );
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
	retval = cCall_giftToYou( buf, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Sample.eEnt.giftToYou", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_returnGiftFromYou
 * name:         eThroughEntry_returnGiftFromYou
 * global_name:  tTracePlugin_sSample_eThroughEntry_returnGiftFromYou
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_returnGiftFromYou(CELLIDX idx, int16_t** buf, int32_t* len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSample_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSample_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Sample.eEnt.returnGiftFromYou calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_returnGiftFromYou( buf, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Sample.eEnt.returnGiftFromYou", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    size_is(*len)=%d", *len );
    {
    	int i__0, loop_count__ = (((*len)>16) ? 16 : (*len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof((*buf)) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [RECEIVE]int16_t buf[%d]: %02x %02x %02x %02x",
    					i__0, (*buf)[i__0], (*buf)[i__0+1], (*buf)[i__0+2], (*buf)[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [RECEIVE]int16_t buf[%d]: %02lx %02lx %02lx %02lx",
    					i__0, (*buf)[i__0], (*buf)[i__0+1], (*buf)[i__0+2], (*buf)[i__0+3] );
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

/* #[<ENTRY_FUNC>]# eThroughEntry_transferStruct
 * name:         eThroughEntry_transferStruct
 * global_name:  tTracePlugin_sSample_eThroughEntry_transferStruct
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_transferStruct(CELLIDX idx, const struct stA* a, int32_t len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSample_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSample_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Sample.eEnt.transferStruct calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
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
	retval = cCall_transferStruct( a, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Sample.eEnt.transferStruct", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_transferStruct2
 * name:         eThroughEntry_transferStruct2
 * global_name:  tTracePlugin_sSample_eThroughEntry_transferStruct2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_transferStruct2(CELLIDX idx, struct stA a)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSample_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSample_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Sample.eEnt.transferStruct2 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(a.a) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t a.a = %ld;", (long)a.a );
    else
    	syslog( LOG_INFO, "    [IN]int32_t a.a = %d;", a.a );
    if( sizeof(a.b) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t a.b = %ld;", (long)a.b );
    else
    	syslog( LOG_INFO, "    [IN]int32_t a.b = %d;", a.b );
    if( sizeof(*a.msg) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]char_t *a.msg = %ld;", (long)*a.msg );
    else
    	syslog( LOG_INFO, "    [IN]char_t *a.msg = %d;", *a.msg );
    if( sizeof(a.len) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int32_t a.len = %ld;", (long)a.len );
    else
    	syslog( LOG_INFO, "    [IN]int32_t a.len = %d;", a.len );
	retval = cCall_transferStruct2( a );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Sample.eEnt.transferStruct2", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_transferInArray
 * name:         eThroughEntry_transferInArray
 * global_name:  tTracePlugin_sSample_eThroughEntry_transferInArray
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_transferInArray(CELLIDX idx, int8_t array0[8])
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSample_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSample_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Sample.eEnt.transferInArray calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_transferInArray( array0 );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Sample.eEnt.transferInArray", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_transferInArray2
 * name:         eThroughEntry_transferInArray2
 * global_name:  tTracePlugin_sSample_eThroughEntry_transferInArray2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_transferInArray2(CELLIDX idx, const int8_t(* array1)[8])
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSample_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSample_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Sample.eEnt.transferInArray2 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_transferInArray2( array1 );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Sample.eEnt.transferInArray2", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_transferOutArray
 * name:         eThroughEntry_transferOutArray
 * global_name:  tTracePlugin_sSample_eThroughEntry_transferOutArray
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_transferOutArray(CELLIDX idx, int8_t(* array2)[8])
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSample_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSample_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Sample.eEnt.transferOutArray calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	retval = cCall_transferOutArray( array2 );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Sample.eEnt.transferOutArray", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_UnsignedTypes
 * name:         eThroughEntry_UnsignedTypes
 * global_name:  tTracePlugin_sSample_eThroughEntry_UnsignedTypes
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
unsigned char
eThroughEntry_UnsignedTypes(CELLIDX idx, uint8_t in, unsigned short s, uint_t ui, ulong_t ul)
{
	unsigned char	retval;
	SYSUTM	utime;
	tTracePlugin_sSample_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSample_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Sample.eEnt.UnsignedTypes calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(in) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]uint8_t in = %ld;", (long)in );
    else
    	syslog( LOG_INFO, "    [IN]uint8_t in = %d;", in );
    if( sizeof(s) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]unsigned short s = %ld;", (long)s );
    else
    	syslog( LOG_INFO, "    [IN]unsigned short s = %d;", s );
    if( sizeof(ui) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]uint_t ui = %ld;", (long)ui );
    else
    	syslog( LOG_INFO, "    [IN]uint_t ui = %d;", ui );
    if( sizeof(ul) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]ulong_t ul = %ld;", (long)ul );
    else
    	syslog( LOG_INFO, "    [IN]ulong_t ul = %d;", ul );
	retval = cCall_UnsignedTypes( in, s, ui, ul );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Sample.eEnt.UnsignedTypes", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]unsigned char retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]unsigned char retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_SignedTypes
 * name:         eThroughEntry_SignedTypes
 * global_name:  tTracePlugin_sSample_eThroughEntry_SignedTypes
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
char
eThroughEntry_SignedTypes(CELLIDX idx, int8_t in, short s, int_t ui, long_t ul)
{
	char	retval;
	SYSUTM	utime;
	tTracePlugin_sSample_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSample_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Sample.eEnt.SignedTypes calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    if( sizeof(in) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int8_t in = %ld;", (long)in );
    else
    	syslog( LOG_INFO, "    [IN]int8_t in = %d;", in );
    if( sizeof(s) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]short s = %ld;", (long)s );
    else
    	syslog( LOG_INFO, "    [IN]short s = %d;", s );
    if( sizeof(ui) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int_t ui = %ld;", (long)ui );
    else
    	syslog( LOG_INFO, "    [IN]int_t ui = %d;", ui );
    if( sizeof(ul) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]long_t ul = %ld;", (long)ul );
    else
    	syslog( LOG_INFO, "    [IN]long_t ul = %d;", ul );
	retval = cCall_SignedTypes( in, s, ui, ul );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Sample.eEnt.SignedTypes", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]char retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]char retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_onewayFunc
 * name:         eThroughEntry_onewayFunc
 * global_name:  tTracePlugin_sSample_eThroughEntry_onewayFunc
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_onewayFunc(CELLIDX idx, char_t* buf, int32_t len)
{
	ER	retval;
	SYSUTM	utime;
	tTracePlugin_sSample_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSample_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Sample.eEnt.onewayFunc calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    size_is(len)=%d", len );
    {
    	int i__0, loop_count__ = (((len)>16) ? 16 : (len));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		if( sizeof(buf) > sizeof(int_t) )
    			syslog( LOG_INFO, "    [SEND]char_t buf[%d]: %02x %02x %02x %02x",
    					i__0, buf[i__0], buf[i__0+1], buf[i__0+2], buf[i__0+3] );
    		else
    			syslog( LOG_INFO, "    [SEND]char_t buf[%d]: %02lx %02lx %02lx %02lx",
    					i__0, buf[i__0], buf[i__0+1], buf[i__0+2], buf[i__0+3] );
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
	retval = cCall_onewayFunc( buf, len );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Sample.eEnt.onewayFunc", ATTR_probeName_str, utime );
    if( sizeof(retval) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [RETURN]ER retval = %ld;", (long)retval );
    else
    	syslog( LOG_INFO, "    [RETURN]ER retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_exit
 * name:         eThroughEntry_exit
 * global_name:  tTracePlugin_sSample_eThroughEntry_exit
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
void
eThroughEntry_exit(CELLIDX idx)
{
	SYSUTM	utime;
	tTracePlugin_sSample_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSample_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Sample.eEnt.exit calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
	cCall_exit( );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Sample.eEnt.exit", ATTR_probeName_str, utime );
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
