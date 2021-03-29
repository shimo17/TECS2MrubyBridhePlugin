/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cServerCall signature: sSig context:task
 *   void           cServerCall_func( );
 *   void           cServerCall_func2( const int8_t* buf, int32_t sz );
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
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tOpaqueUnmarshaler_sSig_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* header file (strlen, memset) */
#include	<string.h>

/* アンマーシャラ関数のプロトタイプ宣言 */
static ER  tOpaqueUnmarshaler_sSig_func(CELLCB *p_cellcb, int16_t *state);	/* func_id: 1 */
static ER  tOpaqueUnmarshaler_sSig_func2(CELLCB *p_cellcb, int16_t *state);	/* func_id: 2 */

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eService
 * entry port: eService
 * signature:  sUnmarshalerMain
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eService_main
 * name:         eService_main
 * global_name:  tOpaqueUnmarshaler_sSig_eService_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eService_main(CELLIDX idx)
{

	int16_t	func_id_;
	ER		ercd_ = E_OK;
	int16_t	state_;

	tOpaqueUnmarshaler_sSig_CB *p_cellcb;

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
	case FUNCID_SSIG_FUNC:		/* (id of 'func') = 1 */ 
		ercd_ = tOpaqueUnmarshaler_sSig_func( p_cellcb, &state_ );
		break;
	case FUNCID_SSIG_FUNC2:		/* (id of 'func2') = 2 */ 
		ercd_ = tOpaqueUnmarshaler_sSig_func2( p_cellcb, &state_ );
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
 * name:    func
 * func_id: 1 
 */
static ER
tOpaqueUnmarshaler_sSig_func(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	cServerCall_func( );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
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
 * func_id: 2 
 */
static ER
tOpaqueUnmarshaler_sSig_func2(CELLCB *p_cellcb, int16_t *state_)		
{
	ER      ercd_;
	int8_t*      buf;
	int32_t      sz;

	/* 入力引数受取 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_BODY );
	if( ( ercd_ = cTDR_getInt32( &(sz) ) ) != E_OK )	/* GenParamCopy 2 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = sz;	/* GenParamCopy 5 */
		if((ercd_=cPPAllocator_alloc(sizeof(const int8_t)*(sz),(void **)&buf))!=E_OK)	/* GenParamCopy 8 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_getInt8( &(buf[i__1]) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
		}
	}
	/* パケット終わりをチェック */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_RECV_EOP );
	if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
		goto error_reset;

	/* 対象関数の呼出し */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_EXEC );
	cServerCall_func2( buf, sz );

	/* SOPの送出 */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_SOP );
	if( ( ercd_ = cTDR_sendSOP( false ) ) != E_OK )
		goto error_reset;
	/* パケットの終わり（掃きだし） */
	SET_RPC_STATE( *state_, RPCSTATE_SERVER_SEND_EOP );
	if( (ercd_=cTDR_sendEOP(false)) != E_OK )
		goto error_reset;
	return E_OK;

error_reset:
	return ERCD( E_RPC, MERCD( ercd_ ) );
}

