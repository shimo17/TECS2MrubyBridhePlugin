/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
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
 * call port: cLockChannel signature: sSemaphore context:task optional:true
 *   bool_t     is_cLockChannel_joined()                     check if joined
 *   ER             cLockChannel_signal( );
 *   ER             cLockChannel_wait( );
 *   ER             cLockChannel_waitPolling( );
 *   ER             cLockChannel_waitTimeout( TMO timeout );
 *   ER             cLockChannel_initialize( );
 *   ER             cLockChannel_refer( T_RSEM* pk_semaphore_status );
 * call port: cErrorHandler signature: sRPCErrorHandler context:task optional:true
 *   bool_t     is_cErrorHandler_joined()                     check if joined
 *   ER             cErrorHandler_errorOccured( int16_t func_id, ER er, int16_t state );
 * allocator port for call port:eClientEntry func:func21 param: a
 *   ER             eClientEntry_func21_a_alloc( int32_t size, void** ptr );
 *   ER             eClientEntry_func21_a_dealloc( const void* ptr );
 *   ER             eClientEntry_func21_a_printStatistics( );
 * allocator port for call port:eClientEntry func:func22 param: sta
 *   ER             eClientEntry_func22_sta_alloc( int32_t size, void** ptr );
 *   ER             eClientEntry_func22_sta_dealloc( const void* ptr );
 *   ER             eClientEntry_func22_sta_printStatistics( );
 * allocator port for call port:eClientEntry func:func23 param: str
 *   ER             eClientEntry_func23_str_alloc( int32_t size, void** ptr );
 *   ER             eClientEntry_func23_str_dealloc( const void* ptr );
 *   ER             eClientEntry_func23_str_printStatistics( );
 * allocator port for call port:eClientEntry func:func24 param: msg
 *   ER             eClientEntry_func24_msg_alloc( int32_t size, void** ptr );
 *   ER             eClientEntry_func24_msg_dealloc( const void* ptr );
 *   ER             eClientEntry_func24_msg_printStatistics( );
 * allocator port for call port:eClientEntry func:func25 param: msg
 *   ER             eClientEntry_func25_msg_alloc( int32_t size, void** ptr );
 *   ER             eClientEntry_func25_msg_dealloc( const void* ptr );
 *   ER             eClientEntry_func25_msg_printStatistics( );
 * allocator port for call port:eClientEntry func:func26 param: sta
 *   ER             eClientEntry_func26_sta_alloc( int32_t size, void** ptr );
 *   ER             eClientEntry_func26_sta_dealloc( const void* ptr );
 *   ER             eClientEntry_func26_sta_printStatistics( );
 * allocator port for call port:eClientEntry func:func27 param: array2
 *   ER             eClientEntry_func27_array2_alloc( int32_t size, void** ptr );
 *   ER             eClientEntry_func27_array2_dealloc( const void* ptr );
 *   ER             eClientEntry_func27_array2_printStatistics( );
 * allocator port for call port:eClientEntry func:func31 param: a
 *   ER             eClientEntry_func31_a_alloc( int32_t size, void** ptr );
 *   ER             eClientEntry_func31_a_dealloc( const void* ptr );
 *   ER             eClientEntry_func31_a_printStatistics( );
 * allocator port for call port:eClientEntry func:func32 param: sta
 *   ER             eClientEntry_func32_sta_alloc( int32_t size, void** ptr );
 *   ER             eClientEntry_func32_sta_dealloc( const void* ptr );
 *   ER             eClientEntry_func32_sta_printStatistics( );
 * allocator port for call port:eClientEntry func:func33 param: str
 *   ER             eClientEntry_func33_str_alloc( int32_t size, void** ptr );
 *   ER             eClientEntry_func33_str_dealloc( const void* ptr );
 *   ER             eClientEntry_func33_str_printStatistics( );
 * allocator port for call port:eClientEntry func:func34 param: msg
 *   ER             eClientEntry_func34_msg_alloc( int32_t size, void** ptr );
 *   ER             eClientEntry_func34_msg_dealloc( const void* ptr );
 *   ER             eClientEntry_func34_msg_printStatistics( );
 * allocator port for call port:eClientEntry func:func35 param: msg
 *   ER             eClientEntry_func35_msg_alloc( int32_t size, void** ptr );
 *   ER             eClientEntry_func35_msg_dealloc( const void* ptr );
 *   ER             eClientEntry_func35_msg_printStatistics( );
 * allocator port for call port:eClientEntry func:func36 param: sta
 *   ER             eClientEntry_func36_sta_alloc( int32_t size, void** ptr );
 *   ER             eClientEntry_func36_sta_dealloc( const void* ptr );
 *   ER             eClientEntry_func36_sta_printStatistics( );
 * allocator port for call port:eClientEntry func:func37 param: sta
 *   ER             eClientEntry_func37_sta_alloc( int32_t size, void** ptr );
 *   ER             eClientEntry_func37_sta_dealloc( const void* ptr );
 *   ER             eClientEntry_func37_sta_printStatistics( );
 * allocator port for call port:eClientEntry func:func38 param: array2
 *   ER             eClientEntry_func38_array2_alloc( int32_t size, void** ptr );
 *   ER             eClientEntry_func38_array2_dealloc( const void* ptr );
 *   ER             eClientEntry_func38_array2_printStatistics( );
 * allocator port for call port:eClientEntry func:func39 param: arraySt
 *   ER             eClientEntry_func39_arraySt_alloc( int32_t size, void** ptr );
 *   ER             eClientEntry_func39_arraySt_dealloc( const void* ptr );
 *   ER             eClientEntry_func39_arraySt_printStatistics( );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tOpaqueMarshaler_sSimple_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eClientEntry
 * entry port: eClientEntry
 * signature:  sSimple
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eClientEntry_shutdown
 * name:         eClientEntry_shutdown
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_shutdown
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
void
eClientEntry_shutdown(CELLIDX idx)
{
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_SHUTDOWN;	/* (id of 'shutdown') = 1*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		/* エラー処理コードをここに記述 */
	}


	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;

	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return;
}

/* #[<ENTRY_FUNC>]# eClientEntry_func1
 * name:         eClientEntry_func1
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func1
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func1(CELLIDX idx, int32_t inval)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC1;	/* (id of 'func1') = 2*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	if( ( ercd_ = cTDR_putInt32( inval ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func2
 * name:         eClientEntry_func2
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func2(CELLIDX idx, const char_t* str)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC2;	/* (id of 'func2') = 3*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = STRLEN8(str)+1;	/* GenParamCopy 7 */
		if( ( ercd_ = cTDR_putInt32( length__1 ) ) != E_OK )	/* GenParamCopy 3 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_putChar( str[i__1] ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
		}
	}
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func3
 * name:         eClientEntry_func3
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func3
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func3(CELLIDX idx, const char_t* msg, int32_t len)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC3;	/* (id of 'func3') = 4*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	if( ( ercd_ = cTDR_putInt32( len ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_putChar( msg[i__1] ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
		}
	}
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func4
 * name:         eClientEntry_func4
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func4
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func4(CELLIDX idx, const char_t** msg, int32_t len)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC4;	/* (id of 'func4') = 5*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	if( ( ercd_ = cTDR_putInt32( len ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				length__3 = STRNLEN8(msg[i__1],(16-1))+1;	/* GenParamCopy 6 */
				if( length__3 < 16)	length__3 += 1;
				if( ( ercd_ = cTDR_putInt32( length__3 ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_putChar( msg[i__1][i__3] ) ) != E_OK )	/* GenParamCopy 3 */
						goto error_reset;
				}
			}
		}
	}
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func5
 * name:         eClientEntry_func5
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func5
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func5(CELLIDX idx, const STA** sta, int32_t len)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC5;	/* (id of 'func5') = 6*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	if( ( ercd_ = cTDR_putInt32( len ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_putInt32( (*sta[i__1]).len ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			if( ( ercd_ = cTDR_putInt32( (*sta[i__1]).count ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			if( ( ercd_ = cTDR_putInt8( (*sta[i__1]).a ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			if( ( ercd_ = cTDR_putInt32( (*sta[i__1]).b ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				length__3 = (*sta[i__1]).count;	/* GenParamCopy 5 */
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_putChar( (*sta[i__1]).msg[i__3] ) ) != E_OK )	/* GenParamCopy 3 */
						goto error_reset;
				}
			}
		}
	}
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func6
 * name:         eClientEntry_func6
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func6
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func6(CELLIDX idx, const int8_t array[8])
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC6;	/* (id of 'func6') = 7*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	{	/* GenParamCopy 11 */
		int32_t  i__1, length__1 = ArraySize;
		for( i__1 = 0; i__1 < length__1; i__1++ ){
			if( ( ercd_ = cTDR_putInt8( array[i__1] ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
		}
	}
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func7
 * name:         eClientEntry_func7
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func7
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func7(CELLIDX idx, const int8_t array2[8][4])
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC7;	/* (id of 'func7') = 8*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	{	/* GenParamCopy 11 */
		int32_t  i__1, length__1 = ArraySize;
		for( i__1 = 0; i__1 < length__1; i__1++ ){
			{	/* GenParamCopy 11 */
				int32_t  i__3, length__3 = ArraySize2;
				for( i__3 = 0; i__3 < length__3; i__3++ ){
					if( ( ercd_ = cTDR_putInt8( array2[i__1][i__3] ) ) != E_OK )	/* GenParamCopy 3 */
						goto error_reset;
				}
			}
		}
	}
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func8
 * name:         eClientEntry_func8
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func8
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func8(CELLIDX idx, const STA arraySt[2])
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC8;	/* (id of 'func8') = 9*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	{	/* GenParamCopy 11 */
		int32_t  i__1, length__1 = ArraySizeSTA;
		for( i__1 = 0; i__1 < length__1; i__1++ ){
			if( ( ercd_ = cTDR_putInt32( arraySt[i__1].len ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			if( ( ercd_ = cTDR_putInt32( arraySt[i__1].count ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			if( ( ercd_ = cTDR_putInt8( arraySt[i__1].a ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			if( ( ercd_ = cTDR_putInt32( arraySt[i__1].b ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				length__3 = arraySt[i__1].count;	/* GenParamCopy 5 */
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_putChar( arraySt[i__1].msg[i__3] ) ) != E_OK )	/* GenParamCopy 3 */
						goto error_reset;
				}
			}
		}
	}
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func9
 * name:         eClientEntry_func9
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func9
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func9(CELLIDX idx, const STA* arraySt[2])
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC9;	/* (id of 'func9') = 10*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	{	/* GenParamCopy 11 */
		int32_t  i__1, length__1 = ArraySizeSTA;
		for( i__1 = 0; i__1 < length__1; i__1++ ){
			if( ( ercd_ = cTDR_putInt32( (*arraySt[i__1]).len ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			if( ( ercd_ = cTDR_putInt32( (*arraySt[i__1]).count ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			if( ( ercd_ = cTDR_putInt8( (*arraySt[i__1]).a ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			if( ( ercd_ = cTDR_putInt32( (*arraySt[i__1]).b ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				length__3 = (*arraySt[i__1]).count;	/* GenParamCopy 5 */
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_putChar( (*arraySt[i__1]).msg[i__3] ) ) != E_OK )	/* GenParamCopy 3 */
						goto error_reset;
				}
			}
		}
	}
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func10
 * name:         eClientEntry_func10
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func10
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func10(CELLIDX idx, int32_t* val)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC10;	/* (id of 'func10') = 11*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		if( ( ercd_ = cTDR_getInt32( &((*val)) ) ) != E_OK )	/* GenParamCopy 2 */
			goto error_reset;
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func11
 * name:         eClientEntry_func11
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func11
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func11(CELLIDX idx, char_t* msg, int32_t len)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC11;	/* (id of 'func11') = 12*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	if( ( ercd_ = cTDR_putInt32( len ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = len;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_getChar( &(msg[i__2]) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
			}
		}
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func12
 * name:         eClientEntry_func12
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func12
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func12(CELLIDX idx, char_t** msg)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC12;	/* (id of 'func12') = 13*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = 8;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				{	/* GenParamCopy 4 */
					int32_t  i__4, length__4;
					if( ( ercd_ = cTDR_getInt32( &(length__4) ) ) != E_OK )	/* GenParamCopy 2 */
						goto error_reset;
					for( i__4 = 0; i__4 < length__4; i__4++ ){	/* GenParamCopy 9 */
						if( ( ercd_ = cTDR_getChar( &(msg[i__2][i__4]) ) ) != E_OK )	/* GenParamCopy 2 */
							goto error_reset;
					}
				}
			}
		}
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func13
 * name:         eClientEntry_func13
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func13
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func13(CELLIDX idx, STB* sta, int32_t len)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC13;	/* (id of 'func13') = 14*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	if( ( ercd_ = cTDR_putInt32( len ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = len;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_getInt8( &(sta[i__2].a) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if( ( ercd_ = cTDR_getInt32( &(sta[i__2].b) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
			}
		}
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func14
 * name:         eClientEntry_func14
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func14
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func14(CELLIDX idx, STB** sta, int32_t len)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC14;	/* (id of 'func14') = 15*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	if( ( ercd_ = cTDR_putInt32( len ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = len;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_getInt8( &((*sta[i__2]).a) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if( ( ercd_ = cTDR_getInt32( &((*sta[i__2]).b) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
			}
		}
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func15
 * name:         eClientEntry_func15
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func15
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func15(CELLIDX idx, int8_t(* array1)[8])
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC15;	/* (id of 'func15') = 16*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		{	/* GenParamCopy 11 */
			int32_t  i__2, length__2 = ArraySize;
			for( i__2 = 0; i__2 < length__2; i__2++ ){
				if( ( ercd_ = cTDR_getInt8( &((*array1)[i__2]) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
			}
		}
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func40
 * name:         eClientEntry_func40
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func40
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func40(CELLIDX idx, int32_t* val)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC40;	/* (id of 'func40') = 17*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	if( ( ercd_ = cTDR_putInt32( (*val) ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		if( ( ercd_ = cTDR_getInt32( &((*val)) ) ) != E_OK )	/* GenParamCopy 2 */
			goto error_reset;
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func41
 * name:         eClientEntry_func41
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func41
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func41(CELLIDX idx, char_t* msg, int32_t len)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC41;	/* (id of 'func41') = 18*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	if( ( ercd_ = cTDR_putInt32( len ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_putChar( msg[i__1] ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
		}
	}
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = len;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_getChar( &(msg[i__2]) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
			}
		}
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func42
 * name:         eClientEntry_func42
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func42
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func42(CELLIDX idx, char_t** msg)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC42;	/* (id of 'func42') = 19*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = 8;	/* GenParamCopy 5 */
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				length__3 = STRNLEN8(msg[i__1],(32-1))+1;	/* GenParamCopy 6 */
				if( length__3 < 32)	length__3 += 1;
				if( ( ercd_ = cTDR_putInt32( length__3 ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_putChar( msg[i__1][i__3] ) ) != E_OK )	/* GenParamCopy 3 */
						goto error_reset;
				}
			}
		}
	}
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = 8;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				{	/* GenParamCopy 4 */
					int32_t  i__4, length__4;
					if( ( ercd_ = cTDR_getInt32( &(length__4) ) ) != E_OK )	/* GenParamCopy 2 */
						goto error_reset;
					for( i__4 = 0; i__4 < length__4; i__4++ ){	/* GenParamCopy 9 */
						if( ( ercd_ = cTDR_getChar( &(msg[i__2][i__4]) ) ) != E_OK )	/* GenParamCopy 2 */
							goto error_reset;
					}
				}
			}
		}
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func43
 * name:         eClientEntry_func43
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func43
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func43(CELLIDX idx, STA* sta, int32_t len)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC43;	/* (id of 'func43') = 20*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	if( ( ercd_ = cTDR_putInt32( len ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_putInt32( sta[i__1].len ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			if( ( ercd_ = cTDR_putInt32( sta[i__1].count ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			if( ( ercd_ = cTDR_putInt8( sta[i__1].a ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			if( ( ercd_ = cTDR_putInt32( sta[i__1].b ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				length__3 = sta[i__1].count;	/* GenParamCopy 5 */
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_putChar( sta[i__1].msg[i__3] ) ) != E_OK )	/* GenParamCopy 3 */
						goto error_reset;
				}
			}
		}
	}
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = len;	/* GenParamCopy 5 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_getInt32( &(sta[i__2].len) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if( ( ercd_ = cTDR_getInt32( &(sta[i__2].count) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if( ( ercd_ = cTDR_getInt8( &(sta[i__2].a) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if( ( ercd_ = cTDR_getInt32( &(sta[i__2].b) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				{	/* GenParamCopy 4 */
					int32_t  i__4, length__4;
					length__4 = sta[i__2].count;	/* GenParamCopy 5 */
					for( i__4 = 0; i__4 < length__4; i__4++ ){	/* GenParamCopy 9 */
						if( ( ercd_ = cTDR_getChar( &(sta[i__2].msg[i__4]) ) ) != E_OK )	/* GenParamCopy 2 */
							goto error_reset;
					}
				}
			}
		}
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func21
 * name:         eClientEntry_func21
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func21
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func21(CELLIDX idx, int32_t* a)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC21;	/* (id of 'func21') = 21*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	if( ( ercd_ = cTDR_putInt32( (*a) ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* dealloc send parameter while executing */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_EXEC );
	ECLIENTENTRY_FUNC21_A_DEALLOC(a);

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	/* dealloc send parameter */
	if( state_ < RPCSTATE_CLIENT_EXEC ){
		ECLIENTENTRY_FUNC21_A_DEALLOC(a);
	}
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func22
 * name:         eClientEntry_func22
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func22
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func22(CELLIDX idx, STA* sta)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC22;	/* (id of 'func22') = 22*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	if( ( ercd_ = cTDR_putInt32( (*sta).len ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( ( ercd_ = cTDR_putInt32( (*sta).count ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( ( ercd_ = cTDR_putInt8( (*sta).a ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( ( ercd_ = cTDR_putInt32( (*sta).b ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = (*sta).count;	/* GenParamCopy 5 */
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_putChar( (*sta).msg[i__1] ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
		}
	}
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* dealloc send parameter while executing */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_EXEC );
	ECLIENTENTRY_FUNC22_STA_DEALLOC(sta);

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	/* dealloc send parameter */
	if( state_ < RPCSTATE_CLIENT_EXEC ){
		ECLIENTENTRY_FUNC22_STA_DEALLOC(sta);
	}
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func23
 * name:         eClientEntry_func23
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func23
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func23(CELLIDX idx, char_t* str)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC23;	/* (id of 'func23') = 23*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = STRLEN8(str)+1;	/* GenParamCopy 7 */
		if( ( ercd_ = cTDR_putInt32( length__1 ) ) != E_OK )	/* GenParamCopy 3 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_putChar( str[i__1] ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
		}
	}
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* dealloc send parameter while executing */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_EXEC );
	ECLIENTENTRY_FUNC23_STR_DEALLOC(str);

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	/* dealloc send parameter */
	if( state_ < RPCSTATE_CLIENT_EXEC ){
		ECLIENTENTRY_FUNC23_STR_DEALLOC(str);
	}
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func24
 * name:         eClientEntry_func24
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func24
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func24(CELLIDX idx, char_t* msg, int32_t len)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC24;	/* (id of 'func24') = 24*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	if( ( ercd_ = cTDR_putInt32( len ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_putChar( msg[i__1] ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
		}
	}
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* dealloc send parameter while executing */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_EXEC );
	ECLIENTENTRY_FUNC24_MSG_DEALLOC(msg);

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	/* dealloc send parameter */
	if( state_ < RPCSTATE_CLIENT_EXEC ){
		ECLIENTENTRY_FUNC24_MSG_DEALLOC(msg);
	}
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func25
 * name:         eClientEntry_func25
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func25
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func25(CELLIDX idx, char_t** msg, int32_t len)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC25;	/* (id of 'func25') = 25*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	if( ( ercd_ = cTDR_putInt32( len ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				length__3 = STRNLEN8(msg[i__1],(16-1))+1;	/* GenParamCopy 6 */
				if( length__3 < 16)	length__3 += 1;
				if( ( ercd_ = cTDR_putInt32( length__3 ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_putChar( msg[i__1][i__3] ) ) != E_OK )	/* GenParamCopy 3 */
						goto error_reset;
				}
			}
		}
	}
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* dealloc send parameter while executing */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_EXEC );
	ECLIENTENTRY_FUNC25_MSG_DEALLOC(msg, len);

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	/* dealloc send parameter */
	if( state_ < RPCSTATE_CLIENT_EXEC ){
		ECLIENTENTRY_FUNC25_MSG_DEALLOC(msg, len);
	}
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func26
 * name:         eClientEntry_func26
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func26
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func26(CELLIDX idx, STA** sta, int32_t len)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC26;	/* (id of 'func26') = 26*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	if( ( ercd_ = cTDR_putInt32( len ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_putInt32( (*sta[i__1]).len ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			if( ( ercd_ = cTDR_putInt32( (*sta[i__1]).count ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			if( ( ercd_ = cTDR_putInt8( (*sta[i__1]).a ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			if( ( ercd_ = cTDR_putInt32( (*sta[i__1]).b ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				length__3 = (*sta[i__1]).count;	/* GenParamCopy 5 */
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_putChar( (*sta[i__1]).msg[i__3] ) ) != E_OK )	/* GenParamCopy 3 */
						goto error_reset;
				}
			}
		}
	}
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* dealloc send parameter while executing */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_EXEC );
	ECLIENTENTRY_FUNC26_STA_DEALLOC(sta, len);

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	/* dealloc send parameter */
	if( state_ < RPCSTATE_CLIENT_EXEC ){
		ECLIENTENTRY_FUNC26_STA_DEALLOC(sta, len);
	}
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func27
 * name:         eClientEntry_func27
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func27
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func27(CELLIDX idx, int8_t(* array2)[8])
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC27;	/* (id of 'func27') = 27*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* 入力引数送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_BODY );
	{	/* GenParamCopy 11 */
		int32_t  i__1, length__1 = ArraySize;
		for( i__1 = 0; i__1 < length__1; i__1++ ){
			if( ( ercd_ = cTDR_putInt8( (*array2)[i__1] ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
		}
	}
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* dealloc send parameter while executing */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_EXEC );
	ECLIENTENTRY_FUNC27_ARRAY2_DEALLOC(array2);

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	/* dealloc send parameter */
	if( state_ < RPCSTATE_CLIENT_EXEC ){
		ECLIENTENTRY_FUNC27_ARRAY2_DEALLOC(array2);
	}
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func31
 * name:         eClientEntry_func31
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func31
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func31(CELLIDX idx, int32_t** a)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC31;	/* (id of 'func31') = 28*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}
	/* initialize receive parameters */
	*a = 0;

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		if((ercd_=eClientEntry_func31_a_alloc(sizeof(int32_t),(void **)&(*a)))!=E_OK)	/* GenParamCopy 10 */
			 goto error_reset;
		if( ( ercd_ = cTDR_getInt32( &((*(*a))) ) ) != E_OK )	/* GenParamCopy 2 */
			goto error_reset;
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	/* receive parameter */
	ECLIENTENTRY_FUNC31_A_DEALLOC_RESET(*a);
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func32
 * name:         eClientEntry_func32
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func32
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func32(CELLIDX idx, STA** sta)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC32;	/* (id of 'func32') = 29*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}
	/* initialize receive parameters */
	*sta = 0;

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		if((ercd_=eClientEntry_func32_sta_alloc(sizeof(STA),(void **)&(*sta)))!=E_OK)	/* GenParamCopy 10 */
			 goto error_reset;
		memset( (void *)(*sta), 0, sizeof(STA) );   /* GenParamCopy Alloc3 */
		if( ( ercd_ = cTDR_getInt32( &((*(*sta)).len) ) ) != E_OK )	/* GenParamCopy 2 */
			goto error_reset;
		if( ( ercd_ = cTDR_getInt32( &((*(*sta)).count) ) ) != E_OK )	/* GenParamCopy 2 */
			goto error_reset;
		if( ( ercd_ = cTDR_getInt8( &((*(*sta)).a) ) ) != E_OK )	/* GenParamCopy 2 */
			goto error_reset;
		if( ( ercd_ = cTDR_getInt32( &((*(*sta)).b) ) ) != E_OK )	/* GenParamCopy 2 */
			goto error_reset;
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = (*(*sta)).count;	/* GenParamCopy 5 */
			if((ercd_=eClientEntry_func32_sta_alloc(sizeof(char_t)*((*(*sta)).len),(void **)&(*(*sta)).msg))!=E_OK)	/* GenParamCopy 8 */
				goto error_reset;
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_getChar( &((*(*sta)).msg[i__2]) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
			}
		}
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	/* receive parameter */
	ECLIENTENTRY_FUNC32_STA_DEALLOC_RESET(*sta);
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func33
 * name:         eClientEntry_func33
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func33
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func33(CELLIDX idx, char_t** str)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC33;	/* (id of 'func33') = 30*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}
	/* initialize receive parameters */
	*str = 0;

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			if( ( ercd_ = cTDR_getInt32( &(length__2) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
			if((ercd_=eClientEntry_func33_str_alloc(sizeof(char_t)*(length__2),(void **)&(*str)))!=E_OK)	/* GenParamCopy 8 */
				goto error_reset;
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_getChar( &((*str)[i__2]) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
			}
		}
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	/* receive parameter */
	ECLIENTENTRY_FUNC33_STR_DEALLOC_RESET(*str);
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func34
 * name:         eClientEntry_func34
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func34
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func34(CELLIDX idx, char_t** msg, int32_t* len)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC34;	/* (id of 'func34') = 31*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}
	/* initialize receive parameters */
	*msg = 0;

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		if( ( ercd_ = cTDR_getInt32( &((*len)) ) ) != E_OK )	/* GenParamCopy 2 */
			goto error_reset;
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = *len;	/* GenParamCopy 5 */
			if((ercd_=eClientEntry_func34_msg_alloc(sizeof(char_t)*(*len),(void **)&(*msg)))!=E_OK)	/* GenParamCopy 8 */
				goto error_reset;
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_getChar( &((*msg)[i__2]) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
			}
		}
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	/* receive parameter */
	ECLIENTENTRY_FUNC34_MSG_DEALLOC_RESET(*msg);
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func35
 * name:         eClientEntry_func35
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func35
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func35(CELLIDX idx, char_t*** msg, int32_t* len, int32_t* msglen)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC35;	/* (id of 'func35') = 32*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}
	/* initialize receive parameters */
	*msg = 0;

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		if( ( ercd_ = cTDR_getInt32( &((*len)) ) ) != E_OK )	/* GenParamCopy 2 */
			goto error_reset;
		if( ( ercd_ = cTDR_getInt32( &((*msglen)) ) ) != E_OK )	/* GenParamCopy 2 */
			goto error_reset;
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = *len;	/* GenParamCopy 5 */
			if((ercd_=eClientEntry_func35_msg_alloc(sizeof(char_t*)*(*len),(void **)&(*msg)))!=E_OK)	/* GenParamCopy 8 */
				goto error_reset;
			memset( (void *)(*msg), 0, sizeof(char_t*)*(*len) );   /* GenParamCopy Alloc2 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				{	/* GenParamCopy 4 */
					int32_t  i__4, length__4;
					if( ( ercd_ = cTDR_getInt32( &(length__4) ) ) != E_OK )	/* GenParamCopy 2 */
						goto error_reset;
					if((ercd_=eClientEntry_func35_msg_alloc(sizeof(char_t)*(length__4),(void **)&(*msg)[i__2]))!=E_OK)	/* GenParamCopy 8 */
						goto error_reset;
					for( i__4 = 0; i__4 < length__4; i__4++ ){	/* GenParamCopy 9 */
						if( ( ercd_ = cTDR_getChar( &((*msg)[i__2][i__4]) ) ) != E_OK )	/* GenParamCopy 2 */
							goto error_reset;
					}
				}
			}
		}
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	/* receive parameter */
	ECLIENTENTRY_FUNC35_MSG_DEALLOC_RESET(*msg, *len);
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func36
 * name:         eClientEntry_func36
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func36
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func36(CELLIDX idx, STA** sta, int32_t* len)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC36;	/* (id of 'func36') = 33*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}
	/* initialize receive parameters */
	*sta = 0;

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		if( ( ercd_ = cTDR_getInt32( &((*len)) ) ) != E_OK )	/* GenParamCopy 2 */
			goto error_reset;
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = *len;	/* GenParamCopy 5 */
			if((ercd_=eClientEntry_func36_sta_alloc(sizeof(STA)*(*len),(void **)&(*sta)))!=E_OK)	/* GenParamCopy 8 */
				goto error_reset;
			memset( (void *)(*sta), 0, sizeof(STA)*(*len) );   /* GenParamCopy Alloc2 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if( ( ercd_ = cTDR_getInt32( &((*sta)[i__2].len) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if( ( ercd_ = cTDR_getInt32( &((*sta)[i__2].count) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if( ( ercd_ = cTDR_getInt8( &((*sta)[i__2].a) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if( ( ercd_ = cTDR_getInt32( &((*sta)[i__2].b) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				{	/* GenParamCopy 4 */
					int32_t  i__4, length__4;
					length__4 = (*sta)[i__2].count;	/* GenParamCopy 5 */
					if((ercd_=eClientEntry_func36_sta_alloc(sizeof(char_t)*((*sta)[i__2].len),(void **)&(*sta)[i__2].msg))!=E_OK)	/* GenParamCopy 8 */
						goto error_reset;
					for( i__4 = 0; i__4 < length__4; i__4++ ){	/* GenParamCopy 9 */
						if( ( ercd_ = cTDR_getChar( &((*sta)[i__2].msg[i__4]) ) ) != E_OK )	/* GenParamCopy 2 */
							goto error_reset;
					}
				}
			}
		}
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	/* receive parameter */
	ECLIENTENTRY_FUNC36_STA_DEALLOC_RESET(*sta, *len);
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func37
 * name:         eClientEntry_func37
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func37
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func37(CELLIDX idx, STA*** sta, int32_t* len)
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC37;	/* (id of 'func37') = 34*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}
	/* initialize receive parameters */
	*sta = 0;

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		if( ( ercd_ = cTDR_getInt32( &((*len)) ) ) != E_OK )	/* GenParamCopy 2 */
			goto error_reset;
		{	/* GenParamCopy 4 */
			int32_t  i__2, length__2;
			length__2 = *len;	/* GenParamCopy 5 */
			if((ercd_=eClientEntry_func37_sta_alloc(sizeof(STA*)*(*len),(void **)&(*sta)))!=E_OK)	/* GenParamCopy 8 */
				goto error_reset;
			memset( (void *)(*sta), 0, sizeof(STA*)*(*len) );   /* GenParamCopy Alloc2 */
			for( i__2 = 0; i__2 < length__2; i__2++ ){	/* GenParamCopy 9 */
				if((ercd_=eClientEntry_func37_sta_alloc(sizeof(STA),(void **)&(*sta)[i__2]))!=E_OK)	/* GenParamCopy 10 */
					 goto error_reset;
				memset( (void *)(*sta)[i__2], 0, sizeof(STA) );   /* GenParamCopy Alloc3 */
				if( ( ercd_ = cTDR_getInt32( &((*(*sta)[i__2]).len) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if( ( ercd_ = cTDR_getInt32( &((*(*sta)[i__2]).count) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if( ( ercd_ = cTDR_getInt8( &((*(*sta)[i__2]).a) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if( ( ercd_ = cTDR_getInt32( &((*(*sta)[i__2]).b) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				{	/* GenParamCopy 4 */
					int32_t  i__4, length__4;
					length__4 = (*(*sta)[i__2]).count;	/* GenParamCopy 5 */
					if((ercd_=eClientEntry_func37_sta_alloc(sizeof(char_t)*((*(*sta)[i__2]).len),(void **)&(*(*sta)[i__2]).msg))!=E_OK)	/* GenParamCopy 8 */
						goto error_reset;
					for( i__4 = 0; i__4 < length__4; i__4++ ){	/* GenParamCopy 9 */
						if( ( ercd_ = cTDR_getChar( &((*(*sta)[i__2]).msg[i__4]) ) ) != E_OK )	/* GenParamCopy 2 */
							goto error_reset;
					}
				}
			}
		}
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	/* receive parameter */
	ECLIENTENTRY_FUNC37_STA_DEALLOC_RESET(*sta, *len);
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func38
 * name:         eClientEntry_func38
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func38
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func38(CELLIDX idx, int8_t(** array2)[8])
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC38;	/* (id of 'func38') = 35*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}
	/* initialize receive parameters */
	*array2 = 0;

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		if((ercd_=eClientEntry_func38_array2_alloc(sizeof(int8_t[8]),(void **)&(*array2)))!=E_OK)	/* GenParamCopy 10 */
			 goto error_reset;
		{	/* GenParamCopy 11 */
			int32_t  i__2, length__2 = ArraySize;
			for( i__2 = 0; i__2 < length__2; i__2++ ){
				if( ( ercd_ = cTDR_getInt8( &((*(*array2))[i__2]) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
			}
		}
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	/* receive parameter */
	ECLIENTENTRY_FUNC38_ARRAY2_DEALLOC_RESET(*array2);
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<ENTRY_FUNC>]# eClientEntry_func39
 * name:         eClientEntry_func39
 * global_name:  tOpaqueMarshaler_sSimple_eClientEntry_func39
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_func39(CELLIDX idx, STA*(** arraySt)[2])
{
	ER		retval_;
	ER		ercd_;
	int16_t	state_;
	int16_t	func_id_ = FUNCID_SSIMPLE_FUNC39;	/* (id of 'func39') = 36*/
	tOpaqueMarshaler_sSimple_CB *p_cellcb;

	if( VALID_IDX( idx ) ){
		p_cellcb = GET_CELLCB(idx);
	}else{
		return ERCD( E_RPC, E_ID );
	}
	/* initialize receive parameters */
	*arraySt = 0;

	/* Channel Lock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_GET_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_wait();
	/* SOPの送出 */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
		goto error_reset;
	/* 関数 id の送出 */
	if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
		goto error_reset;
	/* EOPの送出（パケットの掃きだし） */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(true)) != E_OK )
		goto error_reset;

	/* パケットの始まりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_SOP );
	if( (ercd_=cTDR_receiveSOP( true )) != E_OK )
		goto error_reset;
	/* 戻り値の受け取り */
	if( ( ercd_ = cTDR_getInt( &(retval_) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	if( MERCD( retval_ ) != E_RPC ){
		/* 出力値の受け取り */
		SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_BODY );
		if((ercd_=eClientEntry_func39_arraySt_alloc(sizeof(STA*[2]),(void **)&(*arraySt)))!=E_OK)	/* GenParamCopy 10 */
			 goto error_reset;
		memset( (void *)(*arraySt), 0, sizeof(STA*[2]) );   /* GenParamCopy Alloc3 */
		{	/* GenParamCopy 11 */
			int32_t  i__2, length__2 = ArraySizeSTA;
			for( i__2 = 0; i__2 < length__2; i__2++ ){
				if((ercd_=eClientEntry_func39_arraySt_alloc(sizeof(STA),(void **)&(*(*arraySt))[i__2]))!=E_OK)	/* GenParamCopy 10 */
					 goto error_reset;
				memset( (void *)(*(*arraySt))[i__2], 0, sizeof(STA) );   /* GenParamCopy Alloc3 */
				if( ( ercd_ = cTDR_getInt32( &((*(*(*arraySt))[i__2]).len) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if( ( ercd_ = cTDR_getInt32( &((*(*(*arraySt))[i__2]).count) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if( ( ercd_ = cTDR_getInt8( &((*(*(*arraySt))[i__2]).a) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				if( ( ercd_ = cTDR_getInt32( &((*(*(*arraySt))[i__2]).b) ) ) != E_OK )	/* GenParamCopy 2 */
					goto error_reset;
				{	/* GenParamCopy 4 */
					int32_t  i__4, length__4;
					length__4 = (*(*(*arraySt))[i__2]).count;	/* GenParamCopy 5 */
					if((ercd_=eClientEntry_func39_arraySt_alloc(sizeof(char_t)*((*(*(*arraySt))[i__2]).len),(void **)&(*(*(*arraySt))[i__2]).msg))!=E_OK)	/* GenParamCopy 8 */
						goto error_reset;
					for( i__4 = 0; i__4 < length__4; i__4++ ){	/* GenParamCopy 9 */
						if( ( ercd_ = cTDR_getChar( &((*(*(*arraySt))[i__2]).msg[i__4]) ) ) != E_OK )	/* GenParamCopy 2 */
							goto error_reset;
					}
				}
			}
		}
	}

	/* パケットの終わりをチェック */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
		goto error_reset;
	/* Channel Unlock */
	SET_RPC_STATE( state_, RPCSTATE_CLIENT_RELEASE_SEM );
	if( is_cLockChannel_joined() )
		cLockChannel_signal();
	return retval_;

error_reset:
	/* receive parameter */
	ECLIENTENTRY_FUNC39_ARRAYST_DEALLOC_RESET(*arraySt);
	if( MERCD( ercd_ ) != E_RESET )
		(void)cTDR_reset();
	/* Channel Unlock */
	if( is_cLockChannel_joined() )
		cLockChannel_signal();

	if( ercd_ != E_OK && is_cErrorHandler_joined() )
		cErrorHandler_errorOccured( func_id_, ercd_, state_ );
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
