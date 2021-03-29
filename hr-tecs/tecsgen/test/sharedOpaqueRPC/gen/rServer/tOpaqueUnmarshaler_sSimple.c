/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cServerCall signature: sSimple context:task
 *   void           cServerCall_shutdown( );
 *   ER             cServerCall_func1( int32_t inval );
 *   ER             cServerCall_func2( const char_t* str );
 *   ER             cServerCall_func3( const char_t* msg, int32_t len );
 *   ER             cServerCall_func4( const char_t** msg, int32_t len );
 *   ER             cServerCall_func5( const STA** sta, int32_t len );
 *   ER             cServerCall_func6( const int8_t array[8] );
 *   ER             cServerCall_func7( const int8_t array2[8][4] );
 *   ER             cServerCall_func8( const STA arraySt[2] );
 *   ER             cServerCall_func9( const STA* arraySt[2] );
 *   ER             cServerCall_func10( int32_t* val );
 *   ER             cServerCall_func11( char_t* msg, int32_t len );
 *   ER             cServerCall_func12( char_t** msg );
 *   ER             cServerCall_func13( STB* sta, int32_t len );
 *   ER             cServerCall_func14( STB** sta, int32_t len );
 *   ER             cServerCall_func15( int8_t(* array1)[8] );
 *   ER             cServerCall_func40( int32_t* val );
 *   ER             cServerCall_func41( char_t* msg, int32_t len );
 *   ER             cServerCall_func42( char_t** msg );
 *   ER             cServerCall_func43( STA* sta, int32_t len );
 *   ER             cServerCall_func21( int32_t* a );
 *   ER             cServerCall_func22( STA* sta );
 *   ER             cServerCall_func23( char_t* str );
 *   ER             cServerCall_func24( char_t* msg, int32_t len );
 *   ER             cServerCall_func25( char_t** msg, int32_t len );
 *   ER             cServerCall_func26( STA** sta, int32_t len );
 *   ER             cServerCall_func27( int8_t(* array2)[8] );
 *   ER             cServerCall_func31( int32_t** a );
 *   ER             cServerCall_func32( STA** sta );
 *   ER             cServerCall_func33( char_t** str );
 *   ER             cServerCall_func34( char_t** msg, int32_t* len );
 *   ER             cServerCall_func35( char_t*** msg, int32_t* len, int32_t* msglen );
 *   ER             cServerCall_func36( STA** sta, int32_t* len );
 *   ER             cServerCall_func37( STA*** sta, int32_t* len );
 *   ER             cServerCall_func38( int8_t(** array2)[8] );
 *   ER             cServerCall_func39( STA*(** arraySt)[2] );
 * call port: cTDR signature: sTDR context:task
 *   ER             cTDR_reset( );
 *   ER             cTDR_sendSOP( bool_t b_client );
 *   ER             cTDR_receiveSOP( bool_t b_client );
 *   ER             cTDR_sendEOP( bool_t b_continue );
 *   ER             cTDR_receiveEOP( bool_t b_continue );
 *   ER             cTDR_putInt8( int8_t in );
 *   ER             cTDR_putInt16( int16_t in );
 *   ER             cTDR_putInt32( int32_t in );
 *   ER             cTDR_putInt64( int64_t in );
 *   ER             cTDR_putInt128( int128_t in );
 *   ER             cTDR_getInt8( int8_t* out );
 *   ER             cTDR_getInt16( int16_t* out );
 *   ER             cTDR_getInt32( int32_t* out );
 *   ER             cTDR_getInt64( int64_t* out );
 *   ER             cTDR_getInt128( int128_t* out );
 *   ER             cTDR_putUInt8( uint8_t in );
 *   ER             cTDR_putUInt16( uint16_t in );
 *   ER             cTDR_putUInt32( uint32_t in );
 *   ER             cTDR_putUInt64( uint64_t in );
 *   ER             cTDR_putUInt128( uint128_t in );
 *   ER             cTDR_getUInt8( uint8_t* out );
 *   ER             cTDR_getUInt16( uint16_t* out );
 *   ER             cTDR_getUInt32( uint32_t* out );
 *   ER             cTDR_getUInt64( uint64_t* out );
 *   ER             cTDR_getUInt128( uint128_t* out );
 *   ER             cTDR_putChar( char_t in );
 *   ER             cTDR_getChar( char_t* out );
 *   ER             cTDR_putBool( bool_t in );
 *   ER             cTDR_getBool( bool_t* out );
 *   ER             cTDR_putFloat32( float32_t in );
 *   ER             cTDR_putDouble64( double64_t in );
 *   ER             cTDR_getFloat32( float32_t* out );
 *   ER             cTDR_getDouble64( double64_t* out );
 *   ER             cTDR_putSChar( schar_t in );
 *   ER             cTDR_putShort( short_t in );
 *   ER             cTDR_putInt( int_t in );
 *   ER             cTDR_putLong( long_t in );
 *   ER             cTDR_getSChar( schar_t* out );
 *   ER             cTDR_getShort( short_t* out );
 *   ER             cTDR_getInt( int_t* out );
 *   ER             cTDR_getLong( long_t* out );
 *   ER             cTDR_putUChar( uchar_t in );
 *   ER             cTDR_putUShort( ushort_t in );
 *   ER             cTDR_putUInt( uint_t in );
 *   ER             cTDR_putULong( ulong_t in );
 *   ER             cTDR_getUChar( unsigned char* out );
 *   ER             cTDR_getUShort( ushort_t* out );
 *   ER             cTDR_getUInt( uint_t* out );
 *   ER             cTDR_getULong( ulong_t* out );
 *   ER             cTDR_putIntptr( const intptr_t ptr );
 *   ER             cTDR_getIntptr( intptr_t* ptr );
 * call port: cErrorHandler signature: sRPCErrorHandler context:task optional:true
 *   bool_t     is_cErrorHandler_joined()                     check if joined
 *   ER             cErrorHandler_errorOccured( int16_t func_id, ER er, int16_t state );
 * call port: cPPAllocator signature: sPPAllocator context:task
 *   ER             cPPAllocator_alloc( uint32_t size, void** ptr );
 *   ER             cPPAllocator_dealloc( const void* ptr );
 *   ER             cPPAllocator_dealloc_all( );
 * allocator port for call port:cServerCall func:func21 param: a
 *   ER             cServerCall_func21_a_alloc( int32_t size, void** ptr );
 *   ER             cServerCall_func21_a_dealloc( const void* ptr );
 *   ER             cServerCall_func21_a_printStatistics( );
 * allocator port for call port:cServerCall func:func22 param: sta
 *   ER             cServerCall_func22_sta_alloc( int32_t size, void** ptr );
 *   ER             cServerCall_func22_sta_dealloc( const void* ptr );
 *   ER             cServerCall_func22_sta_printStatistics( );
 * allocator port for call port:cServerCall func:func23 param: str
 *   ER             cServerCall_func23_str_alloc( int32_t size, void** ptr );
 *   ER             cServerCall_func23_str_dealloc( const void* ptr );
 *   ER             cServerCall_func23_str_printStatistics( );
 * allocator port for call port:cServerCall func:func24 param: msg
 *   ER             cServerCall_func24_msg_alloc( int32_t size, void** ptr );
 *   ER             cServerCall_func24_msg_dealloc( const void* ptr );
 *   ER             cServerCall_func24_msg_printStatistics( );
 * allocator port for call port:cServerCall func:func25 param: msg
 *   ER             cServerCall_func25_msg_alloc( int32_t size, void** ptr );
 *   ER             cServerCall_func25_msg_dealloc( const void* ptr );
 *   ER             cServerCall_func25_msg_printStatistics( );
 * allocator port for call port:cServerCall func:func26 param: sta
 *   ER             cServerCall_func26_sta_alloc( int32_t size, void** ptr );
 *   ER             cServerCall_func26_sta_dealloc( const void* ptr );
 *   ER             cServerCall_func26_sta_printStatistics( );
 * allocator port for call port:cServerCall func:func27 param: array2
 *   ER             cServerCall_func27_array2_alloc( int32_t size, void** ptr );
 *   ER             cServerCall_func27_array2_dealloc( const void* ptr );
 *   ER             cServerCall_func27_array2_printStatistics( );
 * allocator port for call port:cServerCall func:func31 param: a
 *   ER             cServerCall_func31_a_alloc( int32_t size, void** ptr );
 *   ER             cServerCall_func31_a_dealloc( const void* ptr );
 *   ER             cServerCall_func31_a_printStatistics( );
 * allocator port for call port:cServerCall func:func32 param: sta
 *   ER             cServerCall_func32_sta_alloc( int32_t size, void** ptr );
 *   ER             cServerCall_func32_sta_dealloc( const void* ptr );
 *   ER             cServerCall_func32_sta_printStatistics( );
 * allocator port for call port:cServerCall func:func33 param: str
 *   ER             cServerCall_func33_str_alloc( int32_t size, void** ptr );
 *   ER             cServerCall_func33_str_dealloc( const void* ptr );
 *   ER             cServerCall_func33_str_printStatistics( );
 * allocator port for call port:cServerCall func:func34 param: msg
 *   ER             cServerCall_func34_msg_alloc( int32_t size, void** ptr );
 *   ER             cServerCall_func34_msg_dealloc( const void* ptr );
 *   ER             cServerCall_func34_msg_printStatistics( );
 * allocator port for call port:cServerCall func:func35 param: msg
 *   ER             cServerCall_func35_msg_alloc( int32_t size, void** ptr );
 *   ER             cServerCall_func35_msg_dealloc( const void* ptr );
 *   ER             cServerCall_func35_msg_printStatistics( );
 * allocator port for call port:cServerCall func:func36 param: sta
 *   ER             cServerCall_func36_sta_alloc( int32_t size, void** ptr );
 *   ER             cServerCall_func36_sta_dealloc( const void* ptr );
 *   ER             cServerCall_func36_sta_printStatistics( );
 * allocator port for call port:cServerCall func:func37 param: sta
 *   ER             cServerCall_func37_sta_alloc( int32_t size, void** ptr );
 *   ER             cServerCall_func37_sta_dealloc( const void* ptr );
 *   ER             cServerCall_func37_sta_printStatistics( );
 * allocator port for call port:cServerCall func:func38 param: array2
 *   ER             cServerCall_func38_array2_alloc( int32_t size, void** ptr );
 *   ER             cServerCall_func38_array2_dealloc( const void* ptr );
 *   ER             cServerCall_func38_array2_printStatistics( );
 * allocator port for call port:cServerCall func:func39 param: arraySt
 *   ER             cServerCall_func39_arraySt_alloc( int32_t size, void** ptr );
 *   ER             cServerCall_func39_arraySt_dealloc( const void* ptr );
 *   ER             cServerCall_func39_arraySt_printStatistics( );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tOpaqueUnmarshaler_sSimple_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* header file (strlen, memset) */
#include	<string.h>

/* アンマーシャラ関数のプロトタイプ宣言 */
static ER  tOpaqueUnmarshaler_sSimple_shutdown(CELLCB *p_cellcb, int16_t *state);	/* func_id: 1 */
static ER  tOpaqueUnmarshaler_sSimple_func1(CELLCB *p_cellcb, int16_t *state);	/* func_id: 2 */
static ER  tOpaqueUnmarshaler_sSimple_func2(CELLCB *p_cellcb, int16_t *state);	/* func_id: 3 */
static ER  tOpaqueUnmarshaler_sSimple_func3(CELLCB *p_cellcb, int16_t *state);	/* func_id: 4 */
static ER  tOpaqueUnmarshaler_sSimple_func4(CELLCB *p_cellcb, int16_t *state);	/* func_id: 5 */
static ER  tOpaqueUnmarshaler_sSimple_func5(CELLCB *p_cellcb, int16_t *state);	/* func_id: 6 */
static ER  tOpaqueUnmarshaler_sSimple_func6(CELLCB *p_cellcb, int16_t *state);	/* func_id: 7 */
static ER  tOpaqueUnmarshaler_sSimple_func7(CELLCB *p_cellcb, int16_t *state);	/* func_id: 8 */
static ER  tOpaqueUnmarshaler_sSimple_func8(CELLCB *p_cellcb, int16_t *state);	/* func_id: 9 */
static ER  tOpaqueUnmarshaler_sSimple_func9(CELLCB *p_cellcb, int16_t *state);	/* func_id: 10 */
static ER  tOpaqueUnmarshaler_sSimple_func10(CELLCB *p_cellcb, int16_t *state);	/* func_id: 11 */
static ER  tOpaqueUnmarshaler_sSimple_func11(CELLCB *p_cellcb, int16_t *state);	/* func_id: 12 */
static ER  tOpaqueUnmarshaler_sSimple_func12(CELLCB *p_cellcb, int16_t *state);	/* func_id: 13 */
static ER  tOpaqueUnmarshaler_sSimple_func13(CELLCB *p_cellcb, int16_t *state);	/* func_id: 14 */
static ER  tOpaqueUnmarshaler_sSimple_func14(CELLCB *p_cellcb, int16_t *state);	/* func_id: 15 */
static ER  tOpaqueUnmarshaler_sSimple_func15(CELLCB *p_cellcb, int16_t *state);	/* func_id: 16 */
static ER  tOpaqueUnmarshaler_sSimple_func40(CELLCB *p_cellcb, int16_t *state);	/* func_id: 17 */
static ER  tOpaqueUnmarshaler_sSimple_func41(CELLCB *p_cellcb, int16_t *state);	/* func_id: 18 */
static ER  tOpaqueUnmarshaler_sSimple_func42(CELLCB *p_cellcb, int16_t *state);	/* func_id: 19 */
static ER  tOpaqueUnmarshaler_sSimple_func43(CELLCB *p_cellcb, int16_t *state);	/* func_id: 20 */
static ER  tOpaqueUnmarshaler_sSimple_func21(CELLCB *p_cellcb, int16_t *state);	/* func_id: 21 */
static ER  tOpaqueUnmarshaler_sSimple_func22(CELLCB *p_cellcb, int16_t *state);	/* func_id: 22 */
static ER  tOpaqueUnmarshaler_sSimple_func23(CELLCB *p_cellcb, int16_t *state);	/* func_id: 23 */
static ER  tOpaqueUnmarshaler_sSimple_func24(CELLCB *p_cellcb, int16_t *state);	/* func_id: 24 */
static ER  tOpaqueUnmarshaler_sSimple_func25(CELLCB *p_cellcb, int16_t *state);	/* func_id: 25 */
static ER  tOpaqueUnmarshaler_sSimple_func26(CELLCB *p_cellcb, int16_t *state);	/* func_id: 26 */
static ER  tOpaqueUnmarshaler_sSimple_func27(CELLCB *p_cellcb, int16_t *state);	/* func_id: 27 */
static ER  tOpaqueUnmarshaler_sSimple_func31(CELLCB *p_cellcb, int16_t *state);	/* func_id: 28 */
static ER  tOpaqueUnmarshaler_sSimple_func32(CELLCB *p_cellcb, int16_t *state);	/* func_id: 29 */
static ER  tOpaqueUnmarshaler_sSimple_func33(CELLCB *p_cellcb, int16_t *state);	/* func_id: 30 */
static ER  tOpaqueUnmarshaler_sSimple_func34(CELLCB *p_cellcb, int16_t *state);	/* func_id: 31 */
static ER  tOpaqueUnmarshaler_sSimple_func35(CELLCB *p_cellcb, int16_t *state);	/* func_id: 32 */
static ER  tOpaqueUnmarshaler_sSimple_func36(CELLCB *p_cellcb, int16_t *state);	/* func_id: 33 */
static ER  tOpaqueUnmarshaler_sSimple_func37(CELLCB *p_cellcb, int16_t *state);	/* func_id: 34 */
static ER  tOpaqueUnmarshaler_sSimple_func38(CELLCB *p_cellcb, int16_t *state);	/* func_id: 35 */
static ER  tOpaqueUnmarshaler_sSimple_func39(CELLCB *p_cellcb, int16_t *state);	/* func_id: 36 */

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eService
 * entry port: eService
 * signature:  sUnmarshalerMain
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eService_main
 * name:         eService_main
 * global_name:  tOpaqueUnmarshaler_sSimple_eService_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eService_main(CELLIDX idx)
{

	int16_t	func_id_;
	ER		ercd_ = E_OK;
	int16_t	state_;

	tOpaqueUnmarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return;
	}

#ifdef RPC_DEBUG
	syslog(LOG_INFO, "Entering RPC service loop" );
#endif

	/* SOPのチェック */
	SET_RPC_STATE( state_, RPCSTATE_SERVER_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( false )) != E_OK )
		goto error_reset;
	/* func_id の取得 */
	if( (ercd_=cTDR_getInt16( &func_id_ )) != E_OK )
		goto error_reset;

#ifdef RPC_DEBUG
	syslog(LOG_INFO, "unmarshaler task: func_id: %d", func_id_ );
#endif
	switch( func_id_ ){
	case FUNCID_SSIMPLE_SHUTDOWN:		/* (id of 'shutdown') = 1 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_shutdown( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC1:		/* (id of 'func1') = 2 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func1( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC2:		/* (id of 'func2') = 3 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func2( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC3:		/* (id of 'func3') = 4 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func3( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC4:		/* (id of 'func4') = 5 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func4( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC5:		/* (id of 'func5') = 6 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func5( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC6:		/* (id of 'func6') = 7 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func6( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC7:		/* (id of 'func7') = 8 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func7( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC8:		/* (id of 'func8') = 9 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func8( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC9:		/* (id of 'func9') = 10 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func9( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC10:		/* (id of 'func10') = 11 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func10( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC11:		/* (id of 'func11') = 12 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func11( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC12:		/* (id of 'func12') = 13 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func12( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC13:		/* (id of 'func13') = 14 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func13( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC14:		/* (id of 'func14') = 15 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func14( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC15:		/* (id of 'func15') = 16 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func15( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC40:		/* (id of 'func40') = 17 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func40( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC41:		/* (id of 'func41') = 18 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func41( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC42:		/* (id of 'func42') = 19 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func42( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC43:		/* (id of 'func43') = 20 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func43( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC21:		/* (id of 'func21') = 21 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func21( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC22:		/* (id of 'func22') = 22 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func22( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC23:		/* (id of 'func23') = 23 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func23( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC24:		/* (id of 'func24') = 24 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func24( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC25:		/* (id of 'func25') = 25 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func25( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC26:		/* (id of 'func26') = 26 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func26( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC27:		/* (id of 'func27') = 27 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func27( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC31:		/* (id of 'func31') = 28 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func31( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC32:		/* (id of 'func32') = 29 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func32( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC33:		/* (id of 'func33') = 30 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func33( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC34:		/* (id of 'func34') = 31 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func34( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC35:		/* (id of 'func35') = 32 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func35( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC36:		/* (id of 'func36') = 33 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func36( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC37:		/* (id of 'func37') = 34 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func37( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC38:		/* (id of 'func38') = 35 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func38( p_cellcb, &state_ );
		break;
	case FUNCID_SSIMPLE_FUNC39:		/* (id of 'func39') = 36 */ 
		ercd_ = tOpaqueUnmarshaler_sSimple_func39( p_cellcb, &state_ );
		break;
	default:
		syslog(LOG_INFO, "unmarshaler task: ERROR: unknown func_id: %d", func_id_ );
		ercd_ = E_ID;
	};
error_reset:  /* OK cases also come here */
	/* PPAllocator のすべてを解放 */
	cPPAllocator_dealloc_all();
	if( ercd_ == E_OK )
		return ercd_;
	if( is_cErrorHandler_joined() )
		ercd_ = cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	return ercd_;
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/

/*** アンマーシャラ関数 ***/

/*
 * name:    shutdown
 * func_id: 1 
 */
static ER
tOpaqueUnmarshaler_sSimple_shutdown(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	cServerCall_shutdown( );
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func1
 * func_id: 2 
 */
static ER
tOpaqueUnmarshaler_sSimple_func1(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	int32_t      inval;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if( ( ercd_ = cTDR_getInt32( &(inval) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func1( inval );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func2
 * func_id: 3 
 */
static ER
tOpaqueUnmarshaler_sSimple_func2(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	char_t*      str;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		if( ( ercd_ = cTDR_getInt32( &(length__1) ) ) != E_OK )	/* GenParamCopy 2 */
			goto error_reset;
		if((ercd_=cPPAllocator_alloc(sizeof(const char_t)*(length__1),(void **)&str))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_getChar( &(str[i__1]) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
		}
	}
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func2( str );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func3
 * func_id: 4 
 */
static ER
tOpaqueUnmarshaler_sSimple_func3(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	char_t*      msg;
	int32_t      len;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		if((ercd_=cPPAllocator_alloc(sizeof(const char_t)*(len),(void **)&msg))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_getChar( &(msg[i__1]) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
		}
	}
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func3( msg, len );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func4
 * func_id: 5 
 */
static ER
tOpaqueUnmarshaler_sSimple_func4(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	char_t**     msg;
	int32_t      len;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		if((ercd_=cPPAllocator_alloc(sizeof(const char_t*)*(len),(void **)&msg))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				if( ( ercd_ = cTDR_getInt32( &(length__3) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if((ercd_=cPPAllocator_alloc(sizeof(const char_t)*(length__3),(void **)&msg[i__1]))!=E_OK)	/* GenParamCopy 8 */
					goto error_reset;
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_getChar( &(msg[i__1][i__3]) ) ) != E_OK )	/* GenParamCopy 2 */
						goto error_reset;
				}
			}
		}
	}
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func4( msg, len );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func5
 * func_id: 6 
 */
static ER
tOpaqueUnmarshaler_sSimple_func5(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	STA**        sta;
	int32_t      len;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		if((ercd_=cPPAllocator_alloc(sizeof(const STA*)*(len),(void **)&sta))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if((ercd_=cPPAllocator_alloc(sizeof(const STA),(void **)&sta[i__1]))!=E_OK)	/* GenParamCopy 10 */
				 goto error_reset;
			if( ( ercd_ = cTDR_getInt32( &((*sta[i__1]).len) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			if( ( ercd_ = cTDR_getInt32( &((*sta[i__1]).count) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			if( ( ercd_ = cTDR_getInt8( &((*sta[i__1]).a) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			if( ( ercd_ = cTDR_getInt32( &((*sta[i__1]).b) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				length__3 = (*sta[i__1]).count;	/* GenParamCopy 5 */
				if((ercd_=cPPAllocator_alloc(sizeof(char_t)*((*sta[i__1]).len),(void **)&(*sta[i__1]).msg))!=E_OK)	/* GenParamCopy 8 */
					goto error_reset;
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_getChar( &((*sta[i__1]).msg[i__3]) ) ) != E_OK )	/* GenParamCopy 2 */
						goto error_reset;
				}
			}
		}
	}
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func5( sta, len );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func6
 * func_id: 7 
 */
static ER
tOpaqueUnmarshaler_sSimple_func6(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	int8_t       (*array);
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if((ercd_=cPPAllocator_alloc(sizeof(const int8_t)*(ArraySize),(void **)&array))!=E_OK)	/* GenParamCopy 1 */
		goto error_reset;
	{	/* GenParamCopy 11 */
		int32_t  i__1, length__1 = ArraySize;
		for( i__1 = 0; i__1 < length__1; i__1++ ){
			if( ( ercd_ = cTDR_getInt8( &(array[i__1]) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
		}
	}
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func6( array );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func7
 * func_id: 8 
 */
static ER
tOpaqueUnmarshaler_sSimple_func7(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	int8_t       (*array2)[4];
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if((ercd_=cPPAllocator_alloc(sizeof(const int8_t[4])*(ArraySize),(void **)&array2))!=E_OK)	/* GenParamCopy 1 */
		goto error_reset;
	{	/* GenParamCopy 11 */
		int32_t  i__1, length__1 = ArraySize;
		for( i__1 = 0; i__1 < length__1; i__1++ ){
			{	/* GenParamCopy 11 */
				int32_t  i__3, length__3 = ArraySize2;
				for( i__3 = 0; i__3 < length__3; i__3++ ){
					if( ( ercd_ = cTDR_getInt8( &(array2[i__1][i__3]) ) ) != E_OK )	/* GenParamCopy 2 */
						goto error_reset;
				}
			}
		}
	}
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func7( array2 );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func8
 * func_id: 9 
 */
static ER
tOpaqueUnmarshaler_sSimple_func8(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	STA          (*arraySt);
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if((ercd_=cPPAllocator_alloc(sizeof(const STA)*(ArraySizeSTA),(void **)&arraySt))!=E_OK)	/* GenParamCopy 1 */
		goto error_reset;
	{	/* GenParamCopy 11 */
		int32_t  i__1, length__1 = ArraySizeSTA;
		for( i__1 = 0; i__1 < length__1; i__1++ ){
			if( ( ercd_ = cTDR_getInt32( &(arraySt[i__1].len) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			if( ( ercd_ = cTDR_getInt32( &(arraySt[i__1].count) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			if( ( ercd_ = cTDR_getInt8( &(arraySt[i__1].a) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			if( ( ercd_ = cTDR_getInt32( &(arraySt[i__1].b) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				length__3 = arraySt[i__1].count;	/* GenParamCopy 5 */
				if((ercd_=cPPAllocator_alloc(sizeof(char_t)*(arraySt[i__1].len),(void **)&arraySt[i__1].msg))!=E_OK)	/* GenParamCopy 8 */
					goto error_reset;
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_getChar( &(arraySt[i__1].msg[i__3]) ) ) != E_OK )	/* GenParamCopy 2 */
						goto error_reset;
				}
			}
		}
	}
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func8( arraySt );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func9
 * func_id: 10 
 */
static ER
tOpaqueUnmarshaler_sSimple_func9(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	STA*         (*arraySt);
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if((ercd_=cPPAllocator_alloc(sizeof(const STA*)*(ArraySizeSTA),(void **)&arraySt))!=E_OK)	/* GenParamCopy 1 */
		goto error_reset;
	{	/* GenParamCopy 11 */
		int32_t  i__1, length__1 = ArraySizeSTA;
		for( i__1 = 0; i__1 < length__1; i__1++ ){
			if((ercd_=cPPAllocator_alloc(sizeof(const STA),(void **)&arraySt[i__1]))!=E_OK)	/* GenParamCopy 10 */
				 goto error_reset;
			if( ( ercd_ = cTDR_getInt32( &((*arraySt[i__1]).len) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			if( ( ercd_ = cTDR_getInt32( &((*arraySt[i__1]).count) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			if( ( ercd_ = cTDR_getInt8( &((*arraySt[i__1]).a) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			if( ( ercd_ = cTDR_getInt32( &((*arraySt[i__1]).b) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				length__3 = (*arraySt[i__1]).count;	/* GenParamCopy 5 */
				if((ercd_=cPPAllocator_alloc(sizeof(char_t)*((*arraySt[i__1]).len),(void **)&(*arraySt[i__1]).msg))!=E_OK)	/* GenParamCopy 8 */
					goto error_reset;
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_getChar( &((*arraySt[i__1]).msg[i__3]) ) ) != E_OK )	/* GenParamCopy 2 */
						goto error_reset;
				}
			}
		}
	}
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func9( arraySt );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func10
 * func_id: 11 
 */
static ER
tOpaqueUnmarshaler_sSimple_func10(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	int32_t*     val;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	if((ercd_=cPPAllocator_alloc(sizeof(int32_t),(void **)&val))!=E_OK)	/* GenOpaqueMarshaler 2 */
		goto error_reset;
	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func10( val );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		if( ( ercd_ = cTDR_putInt32( (*val) ) ) != E_OK )	/* GenParamCopy 3 */
			goto error_reset;
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func11
 * func_id: 12 
 */
static ER
tOpaqueUnmarshaler_sSimple_func11(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	char_t*      msg;
	int32_t      len;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	if((ercd_=cPPAllocator_alloc(sizeof(char_t)*len,(void **)&msg))!=E_OK)	/* GenOpaqueMarshaler 1 */
		goto error_reset;
	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func11( msg, len );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = len;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_putChar( msg[i__2] ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
			}
		}
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func12
 * func_id: 13 
 */
static ER
tOpaqueUnmarshaler_sSimple_func12(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	char_t**     msg;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	if((ercd_=cPPAllocator_alloc(sizeof(char_t*)*8,(void **)&msg))!=E_OK)	/* GenOpaqueMarshaler 1 */
		goto error_reset;
	{
		int16_t  i__1, length__1 = 8;
		for( i__1 = 0; i__1 < length__1; i__1++ ){
			if((ercd_=cPPAllocator_alloc(sizeof(char_t)*32,(void **)&msg[i__1]))!=E_OK)	/* GenOpaqueMarshaler 1 */
				goto error_reset;
		}
	}
	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func12( msg );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = 8;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				{	/* GenParamCopy 4 */
					int32_t  i__4, length__4;
					length__4 = STRNLEN8(msg[i__2],(32-1))+1;	/* GenParamCopy 6 */
					if( length__4 < 32)	length__4 += 1;
					if( ( ercd_ = cTDR_putInt32( length__4 ) ) != E_OK )	/* GenParamCopy 3 */
						goto error_reset;
					for( i__4 = 0; i__4 < length__4; i__4++ ){	/* GenParamCopy 9 */
						if( ( ercd_ = cTDR_putChar( msg[i__2][i__4] ) ) != E_OK )	/* GenParamCopy 3 */
							goto error_reset;
					}
				}
			}
		}
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func13
 * func_id: 14 
 */
static ER
tOpaqueUnmarshaler_sSimple_func13(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	STB*         sta;
	int32_t      len;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	if((ercd_=cPPAllocator_alloc(sizeof(STB)*len,(void **)&sta))!=E_OK)	/* GenOpaqueMarshaler 1 */
		goto error_reset;
	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func13( sta, len );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = len;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_putInt8( sta[i__2].a ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				if( ( ercd_ = cTDR_putInt32( sta[i__2].b ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
			}
		}
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func14
 * func_id: 15 
 */
static ER
tOpaqueUnmarshaler_sSimple_func14(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	STB**        sta;
	int32_t      len;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	if((ercd_=cPPAllocator_alloc(sizeof(STB*)*len,(void **)&sta))!=E_OK)	/* GenOpaqueMarshaler 1 */
		goto error_reset;
	{
		int16_t  i__1, length__1 = len;
		for( i__1 = 0; i__1 < length__1; i__1++ ){
			if((ercd_=cPPAllocator_alloc(sizeof(STB),(void **)&sta[i__1]))!=E_OK)	/* GenOpaqueMarshaler 2 */
				goto error_reset;
		}
	}
	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func14( sta, len );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = len;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_putInt8( (*sta[i__2]).a ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				if( ( ercd_ = cTDR_putInt32( (*sta[i__2]).b ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
			}
		}
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func15
 * func_id: 16 
 */
static ER
tOpaqueUnmarshaler_sSimple_func15(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	int8_t(*     array1)[8];
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	if((ercd_=cPPAllocator_alloc(sizeof(int8_t[8]),(void **)&array1))!=E_OK)	/* GenOpaqueMarshaler 2 */
		goto error_reset;
	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func15( array1 );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		{	/* GenParamCopy 11 */
			int32_t  i__2, length__2 = ArraySize;
			for( i__2 = 0; i__2 < length__2; i__2++ ){
				if( ( ercd_ = cTDR_putInt8( (*array1)[i__2] ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
			}
		}
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func40
 * func_id: 17 
 */
static ER
tOpaqueUnmarshaler_sSimple_func40(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	int32_t*     val;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if((ercd_=cPPAllocator_alloc(sizeof(int32_t),(void **)&val))!=E_OK)	/* GenParamCopy 10 */
		 goto error_reset;
	if( ( ercd_ = cTDR_getInt32( &((*val)) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func40( val );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		if( ( ercd_ = cTDR_putInt32( (*val) ) ) != E_OK )	/* GenParamCopy 3 */
			goto error_reset;
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func41
 * func_id: 18 
 */
static ER
tOpaqueUnmarshaler_sSimple_func41(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	char_t*      msg;
	int32_t      len;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		if((ercd_=cPPAllocator_alloc(sizeof(char_t)*(len),(void **)&msg))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_getChar( &(msg[i__1]) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
		}
	}
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func41( msg, len );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = len;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_putChar( msg[i__2] ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
			}
		}
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func42
 * func_id: 19 
 */
static ER
tOpaqueUnmarshaler_sSimple_func42(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	char_t**     msg;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = 8;	/* GenParamCopy 5 */
		if((ercd_=cPPAllocator_alloc(sizeof(char_t*)*(8),(void **)&msg))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				if( ( ercd_ = cTDR_getInt32( &(length__3) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if((ercd_=cPPAllocator_alloc(sizeof(char_t)*(32),(void **)&msg[i__1]))!=E_OK)	/* GenParamCopy 8 */
					goto error_reset;
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_getChar( &(msg[i__1][i__3]) ) ) != E_OK )	/* GenParamCopy 2 */
						goto error_reset;
				}
			}
		}
	}
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func42( msg );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = 8;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				{	/* GenParamCopy 4 */
					int32_t  i__4, length__4;
					length__4 = STRNLEN8(msg[i__2],(32-1))+1;	/* GenParamCopy 6 */
					if( length__4 < 32)	length__4 += 1;
					if( ( ercd_ = cTDR_putInt32( length__4 ) ) != E_OK )	/* GenParamCopy 3 */
						goto error_reset;
					for( i__4 = 0; i__4 < length__4; i__4++ ){	/* GenParamCopy 9 */
						if( ( ercd_ = cTDR_putChar( msg[i__2][i__4] ) ) != E_OK )	/* GenParamCopy 3 */
							goto error_reset;
					}
				}
			}
		}
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func43
 * func_id: 20 
 */
static ER
tOpaqueUnmarshaler_sSimple_func43(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	STA*         sta;
	int32_t      len;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		if((ercd_=cPPAllocator_alloc(sizeof(STA)*(len),(void **)&sta))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_getInt32( &(sta[i__1].len) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			if( ( ercd_ = cTDR_getInt32( &(sta[i__1].count) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			if( ( ercd_ = cTDR_getInt8( &(sta[i__1].a) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			if( ( ercd_ = cTDR_getInt32( &(sta[i__1].b) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				length__3 = sta[i__1].count;	/* GenParamCopy 5 */
				if((ercd_=cPPAllocator_alloc(sizeof(char_t)*(sta[i__1].len),(void **)&sta[i__1].msg))!=E_OK)	/* GenParamCopy 8 */
					goto error_reset;
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_getChar( &(sta[i__1].msg[i__3]) ) ) != E_OK )	/* GenParamCopy 2 */
						goto error_reset;
				}
			}
		}
	}
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func43( sta, len );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = len;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_putInt32( sta[i__2].len ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				if( ( ercd_ = cTDR_putInt32( sta[i__2].count ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				if( ( ercd_ = cTDR_putInt8( sta[i__2].a ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				if( ( ercd_ = cTDR_putInt32( sta[i__2].b ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				{	/* GenParamCopy 4 */
					int32_t  i__4, length__4;
					length__4 = sta[i__2].count;	/* GenParamCopy 5 */
					for( i__4 = 0; i__4 < length__4; i__4++ ){	/* GenParamCopy 9 */
						if( ( ercd_ = cTDR_putChar( sta[i__2].msg[i__4] ) ) != E_OK )	/* GenParamCopy 3 */
							goto error_reset;
					}
				}
			}
		}
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func21
 * func_id: 21 
 */
static ER
tOpaqueUnmarshaler_sSimple_func21(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	int32_t*     a = 0;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if((ercd_=cServerCall_func21_a_alloc(sizeof(int32_t),(void **)&a))!=E_OK)	/* GenParamCopy 10 */
		 goto error_reset;
	if( ( ercd_ = cTDR_getInt32( &((*a)) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func21( a );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	/* dealloc send parameter */
	if( *state_ < RPCSTATE_SERVER_EXEC ){
		CSERVERCALL_FUNC21_A_DEALLOC_RESET(a);
	}
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func22
 * func_id: 22 
 */
static ER
tOpaqueUnmarshaler_sSimple_func22(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	STA*         sta = 0;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if((ercd_=cServerCall_func22_sta_alloc(sizeof(STA),(void **)&sta))!=E_OK)	/* GenParamCopy 10 */
		 goto error_reset;
	memset( (void *)sta, 0, sizeof(STA) );   /* GenParamCopy Alloc3 */
	if( ( ercd_ = cTDR_getInt32( &((*sta).len) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( ( ercd_ = cTDR_getInt32( &((*sta).count) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( ( ercd_ = cTDR_getInt8( &((*sta).a) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( ( ercd_ = cTDR_getInt32( &((*sta).b) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = (*sta).count;	/* GenParamCopy 5 */
		if((ercd_=cServerCall_func22_sta_alloc(sizeof(char_t)*((*sta).len),(void **)&(*sta).msg))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_getChar( &((*sta).msg[i__1]) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
		}
	}
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func22( sta );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	/* dealloc send parameter */
	if( *state_ < RPCSTATE_SERVER_EXEC ){
		CSERVERCALL_FUNC22_STA_DEALLOC_RESET(sta);
	}
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func23
 * func_id: 23 
 */
static ER
tOpaqueUnmarshaler_sSimple_func23(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	char_t*      str = 0;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		if( ( ercd_ = cTDR_getInt32( &(length__1) ) ) != E_OK )	/* GenParamCopy 2 */
			goto error_reset;
		if((ercd_=cServerCall_func23_str_alloc(sizeof(char_t)*(length__1),(void **)&str))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_getChar( &(str[i__1]) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
		}
	}
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func23( str );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	/* dealloc send parameter */
	if( *state_ < RPCSTATE_SERVER_EXEC ){
		CSERVERCALL_FUNC23_STR_DEALLOC_RESET(str);
	}
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func24
 * func_id: 24 
 */
static ER
tOpaqueUnmarshaler_sSimple_func24(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	char_t*      msg = 0;
	int32_t      len;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		if((ercd_=cServerCall_func24_msg_alloc(sizeof(char_t)*(len),(void **)&msg))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_getChar( &(msg[i__1]) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
		}
	}
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func24( msg, len );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	/* dealloc send parameter */
	if( *state_ < RPCSTATE_SERVER_EXEC ){
		CSERVERCALL_FUNC24_MSG_DEALLOC_RESET(msg);
	}
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func25
 * func_id: 25 
 */
static ER
tOpaqueUnmarshaler_sSimple_func25(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	char_t**     msg = 0;
	int32_t      len;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		if((ercd_=cServerCall_func25_msg_alloc(sizeof(char_t*)*(len),(void **)&msg))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		memset( (void *)msg, 0, sizeof(char_t*)*(len) );   /* GenParamCopy Alloc2 */
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				if( ( ercd_ = cTDR_getInt32( &(length__3) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if((ercd_=cServerCall_func25_msg_alloc(sizeof(char_t)*(length__3),(void **)&msg[i__1]))!=E_OK)	/* GenParamCopy 8 */
					goto error_reset;
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_getChar( &(msg[i__1][i__3]) ) ) != E_OK )	/* GenParamCopy 2 */
						goto error_reset;
				}
			}
		}
	}
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func25( msg, len );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	/* dealloc send parameter */
	if( *state_ < RPCSTATE_SERVER_EXEC ){
		CSERVERCALL_FUNC25_MSG_DEALLOC_RESET(msg, len);
	}
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func26
 * func_id: 26 
 */
static ER
tOpaqueUnmarshaler_sSimple_func26(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	STA**        sta = 0;
	int32_t      len;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		if((ercd_=cServerCall_func26_sta_alloc(sizeof(STA*)*(len),(void **)&sta))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		memset( (void *)sta, 0, sizeof(STA*)*(len) );   /* GenParamCopy Alloc2 */
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if((ercd_=cServerCall_func26_sta_alloc(sizeof(STA),(void **)&sta[i__1]))!=E_OK)	/* GenParamCopy 10 */
				 goto error_reset;
			memset( (void *)sta[i__1], 0, sizeof(STA) );   /* GenParamCopy Alloc3 */
			if( ( ercd_ = cTDR_getInt32( &((*sta[i__1]).len) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			if( ( ercd_ = cTDR_getInt32( &((*sta[i__1]).count) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			if( ( ercd_ = cTDR_getInt8( &((*sta[i__1]).a) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			if( ( ercd_ = cTDR_getInt32( &((*sta[i__1]).b) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				length__3 = (*sta[i__1]).count;	/* GenParamCopy 5 */
				if((ercd_=cServerCall_func26_sta_alloc(sizeof(char_t)*((*sta[i__1]).len),(void **)&(*sta[i__1]).msg))!=E_OK)	/* GenParamCopy 8 */
					goto error_reset;
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_getChar( &((*sta[i__1]).msg[i__3]) ) ) != E_OK )	/* GenParamCopy 2 */
						goto error_reset;
				}
			}
		}
	}
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func26( sta, len );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	/* dealloc send parameter */
	if( *state_ < RPCSTATE_SERVER_EXEC ){
		CSERVERCALL_FUNC26_STA_DEALLOC_RESET(sta, len);
	}
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func27
 * func_id: 27 
 */
static ER
tOpaqueUnmarshaler_sSimple_func27(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	int8_t(*     array2)[8] = 0;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if((ercd_=cServerCall_func27_array2_alloc(sizeof(int8_t[8]),(void **)&array2))!=E_OK)	/* GenParamCopy 10 */
		 goto error_reset;
	{	/* GenParamCopy 11 */
		int32_t  i__1, length__1 = ArraySize;
		for( i__1 = 0; i__1 < length__1; i__1++ ){
			if( ( ercd_ = cTDR_getInt8( &((*array2)[i__1]) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
		}
	}
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func27( array2 );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	/* dealloc send parameter */
	if( *state_ < RPCSTATE_SERVER_EXEC ){
		CSERVERCALL_FUNC27_ARRAY2_DEALLOC_RESET(array2);
	}
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func31
 * func_id: 28 
 */
static ER
tOpaqueUnmarshaler_sSimple_func31(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	int32_t*     a = 0;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func31( &a );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		if( ( ercd_ = cTDR_putInt32( (*a) ) ) != E_OK )	/* GenParamCopy 3 */
			goto error_reset;
		/* dealloc receive parameter */
		CSERVERCALL_FUNC31_A_DEALLOC(a);
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	/* dealloc receive parameter */
	if( MERCD( retval_ ) != E_RPC ){
		CSERVERCALL_FUNC31_A_DEALLOC(a);
	}
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func32
 * func_id: 29 
 */
static ER
tOpaqueUnmarshaler_sSimple_func32(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	STA*         sta = 0;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func32( &sta );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		if( ( ercd_ = cTDR_putInt32( (*sta).len ) ) != E_OK )	/* GenParamCopy 3 */
			goto error_reset;
		if( ( ercd_ = cTDR_putInt32( (*sta).count ) ) != E_OK )	/* GenParamCopy 3 */
			goto error_reset;
		if( ( ercd_ = cTDR_putInt8( (*sta).a ) ) != E_OK )	/* GenParamCopy 3 */
			goto error_reset;
		if( ( ercd_ = cTDR_putInt32( (*sta).b ) ) != E_OK )	/* GenParamCopy 3 */
			goto error_reset;
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = (*sta).count;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_putChar( (*sta).msg[i__2] ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
			}
		}
		/* dealloc receive parameter */
		CSERVERCALL_FUNC32_STA_DEALLOC(sta);
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	/* dealloc receive parameter */
	if( MERCD( retval_ ) != E_RPC ){
		CSERVERCALL_FUNC32_STA_DEALLOC(sta);
	}
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func33
 * func_id: 30 
 */
static ER
tOpaqueUnmarshaler_sSimple_func33(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	char_t*      str = 0;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func33( &str );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = STRLEN8(str)+1;	/* GenParamCopy 7 */
			if( ( ercd_ = cTDR_putInt32( length__2 ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_putChar( str[i__2] ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
			}
		}
		/* dealloc receive parameter */
		CSERVERCALL_FUNC33_STR_DEALLOC(str);
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	/* dealloc receive parameter */
	if( MERCD( retval_ ) != E_RPC ){
		CSERVERCALL_FUNC33_STR_DEALLOC(str);
	}
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func34
 * func_id: 31 
 */
static ER
tOpaqueUnmarshaler_sSimple_func34(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	char_t*      msg = 0;
	int32_t*     len;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	if((ercd_=cPPAllocator_alloc(sizeof(int32_t),(void **)&len))!=E_OK)	/* GenOpaqueMarshaler 2 */
		goto error_reset;
	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func34( &msg, len );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		if( ( ercd_ = cTDR_putInt32( (*len) ) ) != E_OK )	/* GenParamCopy 3 */
			goto error_reset;
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = *len;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_putChar( msg[i__2] ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
			}
		}
		/* dealloc receive parameter */
		CSERVERCALL_FUNC34_MSG_DEALLOC(msg);
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	/* dealloc receive parameter */
	if( MERCD( retval_ ) != E_RPC ){
		CSERVERCALL_FUNC34_MSG_DEALLOC(msg);
	}
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func35
 * func_id: 32 
 */
static ER
tOpaqueUnmarshaler_sSimple_func35(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	char_t**     msg = 0;
	int32_t*     len;
	int32_t*     msglen;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	if((ercd_=cPPAllocator_alloc(sizeof(int32_t),(void **)&len))!=E_OK)	/* GenOpaqueMarshaler 2 */
		goto error_reset;
	if((ercd_=cPPAllocator_alloc(sizeof(int32_t),(void **)&msglen))!=E_OK)	/* GenOpaqueMarshaler 2 */
		goto error_reset;
	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func35( &msg, len, msglen );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		if( ( ercd_ = cTDR_putInt32( (*len) ) ) != E_OK )	/* GenParamCopy 3 */
			goto error_reset;
		if( ( ercd_ = cTDR_putInt32( (*msglen) ) ) != E_OK )	/* GenParamCopy 3 */
			goto error_reset;
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = *len;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				{	/* GenParamCopy 4 */
					int32_t  i__4, length__4;
					length__4 = STRNLEN8(msg[i__2],(*msglen-1))+1;	/* GenParamCopy 6 */
					if( length__4 < *msglen)	length__4 += 1;
					if( ( ercd_ = cTDR_putInt32( length__4 ) ) != E_OK )	/* GenParamCopy 3 */
						goto error_reset;
					for( i__4 = 0; i__4 < length__4; i__4++ ){	/* GenParamCopy 9 */
						if( ( ercd_ = cTDR_putChar( msg[i__2][i__4] ) ) != E_OK )	/* GenParamCopy 3 */
							goto error_reset;
					}
				}
			}
		}
		/* dealloc receive parameter */
		CSERVERCALL_FUNC35_MSG_DEALLOC(msg, *len);
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	/* dealloc receive parameter */
	if( MERCD( retval_ ) != E_RPC ){
		CSERVERCALL_FUNC35_MSG_DEALLOC(msg, *len);
	}
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func36
 * func_id: 33 
 */
static ER
tOpaqueUnmarshaler_sSimple_func36(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	STA*         sta = 0;
	int32_t*     len;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	if((ercd_=cPPAllocator_alloc(sizeof(int32_t),(void **)&len))!=E_OK)	/* GenOpaqueMarshaler 2 */
		goto error_reset;
	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func36( &sta, len );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		if( ( ercd_ = cTDR_putInt32( (*len) ) ) != E_OK )	/* GenParamCopy 3 */
			goto error_reset;
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = *len;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_putInt32( sta[i__2].len ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				if( ( ercd_ = cTDR_putInt32( sta[i__2].count ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				if( ( ercd_ = cTDR_putInt8( sta[i__2].a ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				if( ( ercd_ = cTDR_putInt32( sta[i__2].b ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				{	/* GenParamCopy 4 */
					int32_t  i__4, length__4;
					length__4 = sta[i__2].count;	/* GenParamCopy 5 */
					for( i__4 = 0; i__4 < length__4; i__4++ ){	/* GenParamCopy 9 */
						if( ( ercd_ = cTDR_putChar( sta[i__2].msg[i__4] ) ) != E_OK )	/* GenParamCopy 3 */
							goto error_reset;
					}
				}
			}
		}
		/* dealloc receive parameter */
		CSERVERCALL_FUNC36_STA_DEALLOC(sta, *len);
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	/* dealloc receive parameter */
	if( MERCD( retval_ ) != E_RPC ){
		CSERVERCALL_FUNC36_STA_DEALLOC(sta, *len);
	}
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func37
 * func_id: 34 
 */
static ER
tOpaqueUnmarshaler_sSimple_func37(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	STA**        sta = 0;
	int32_t*     len;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	if((ercd_=cPPAllocator_alloc(sizeof(int32_t),(void **)&len))!=E_OK)	/* GenOpaqueMarshaler 2 */
		goto error_reset;
	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func37( &sta, len );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		if( ( ercd_ = cTDR_putInt32( (*len) ) ) != E_OK )	/* GenParamCopy 3 */
			goto error_reset;
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = *len;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_putInt32( (*sta[i__2]).len ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				if( ( ercd_ = cTDR_putInt32( (*sta[i__2]).count ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				if( ( ercd_ = cTDR_putInt8( (*sta[i__2]).a ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				if( ( ercd_ = cTDR_putInt32( (*sta[i__2]).b ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				{	/* GenParamCopy 4 */
					int32_t  i__4, length__4;
					length__4 = (*sta[i__2]).count;	/* GenParamCopy 5 */
					for( i__4 = 0; i__4 < length__4; i__4++ ){	/* GenParamCopy 9 */
						if( ( ercd_ = cTDR_putChar( (*sta[i__2]).msg[i__4] ) ) != E_OK )	/* GenParamCopy 3 */
							goto error_reset;
					}
				}
			}
		}
		/* dealloc receive parameter */
		CSERVERCALL_FUNC37_STA_DEALLOC(sta, *len);
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	/* dealloc receive parameter */
	if( MERCD( retval_ ) != E_RPC ){
		CSERVERCALL_FUNC37_STA_DEALLOC(sta, *len);
	}
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func38
 * func_id: 35 
 */
static ER
tOpaqueUnmarshaler_sSimple_func38(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	int8_t(*     array2)[8] = 0;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func38( &array2 );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		{	/* GenParamCopy 11 */
			int32_t  i__2, length__2 = ArraySize;
			for( i__2 = 0; i__2 < length__2; i__2++ ){
				if( ( ercd_ = cTDR_putInt8( (*array2)[i__2] ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
			}
		}
		/* dealloc receive parameter */
		CSERVERCALL_FUNC38_ARRAY2_DEALLOC(array2);
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	/* dealloc receive parameter */
	if( MERCD( retval_ ) != E_RPC ){
		CSERVERCALL_FUNC38_ARRAY2_DEALLOC(array2);
	}
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/*
 * name:    func39
 * func_id: 36 
 */
static ER
tOpaqueUnmarshaler_sSimple_func39(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	STA*(*       arraySt)[2] = 0;
	ER           retval_ = E_OK;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	retval_ = cServerCall_func39( &arraySt );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* 戻り値の送出 */
	if( ( ercd_ = cTDR_putInt( retval_ ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の送出 */
		SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_BODY );
		{	/* GenParamCopy 11 */
			int32_t  i__2, length__2 = ArraySizeSTA;
			for( i__2 = 0; i__2 < length__2; i__2++ ){
				if( ( ercd_ = cTDR_putInt32( (*(*arraySt)[i__2]).len ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				if( ( ercd_ = cTDR_putInt32( (*(*arraySt)[i__2]).count ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				if( ( ercd_ = cTDR_putInt8( (*(*arraySt)[i__2]).a ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				if( ( ercd_ = cTDR_putInt32( (*(*arraySt)[i__2]).b ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				{	/* GenParamCopy 4 */
					int32_t  i__4, length__4;
					length__4 = (*(*arraySt)[i__2]).count;	/* GenParamCopy 5 */
					for( i__4 = 0; i__4 < length__4; i__4++ ){	/* GenParamCopy 9 */
						if( ( ercd_ = cTDR_putChar( (*(*arraySt)[i__2]).msg[i__4] ) ) != E_OK )	/* GenParamCopy 3 */
							goto error_reset;
					}
				}
			}
		}
		/* dealloc receive parameter */
		CSERVERCALL_FUNC39_ARRAYST_DEALLOC(arraySt);
	}
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	/* dealloc receive parameter */
	if( MERCD( retval_ ) != E_RPC ){
		CSERVERCALL_FUNC39_ARRAYST_DEALLOC(arraySt);
	}
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

