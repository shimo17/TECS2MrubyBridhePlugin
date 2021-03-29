/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tRPCSharedChannelMan_template.c => src/tRPCSharedChannelMan.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cSemaphore signature: sSemaphore context:task
 *   ER             cSemaphore_signal( );
 *   ER             cSemaphore_wait( );
 *   ER             cSemaphore_waitPolling( );
 *   ER             cSemaphore_waitTimeout( TMO timeout );
 *   ER             cSemaphore_initialize( );
 *   ER             cSemaphore_refer( T_RSEM* pk_semaphore_status );
 * call port: cClientSideTDR signature: sTDR context:task
 *   ER             cClientSideTDR_reset( );
 *   ER             cClientSideTDR_sendSOP( bool_t b_client );
 *   ER             cClientSideTDR_receiveSOP( bool_t b_client );
 *   ER             cClientSideTDR_sendEOP( bool_t b_continue );
 *   ER             cClientSideTDR_receiveEOP( bool_t b_continue );
 *   ER             cClientSideTDR_putInt8( int8_t in );
 *   ER             cClientSideTDR_putInt16( int16_t in );
 *   ER             cClientSideTDR_putInt32( int32_t in );
 *   ER             cClientSideTDR_putInt64( int64_t in );
 *   ER             cClientSideTDR_putInt128( int128_t in );
 *   ER             cClientSideTDR_getInt8( int8_t* out );
 *   ER             cClientSideTDR_getInt16( int16_t* out );
 *   ER             cClientSideTDR_getInt32( int32_t* out );
 *   ER             cClientSideTDR_getInt64( int64_t* out );
 *   ER             cClientSideTDR_getInt128( int128_t* out );
 *   ER             cClientSideTDR_putUInt8( uint8_t in );
 *   ER             cClientSideTDR_putUInt16( uint16_t in );
 *   ER             cClientSideTDR_putUInt32( uint32_t in );
 *   ER             cClientSideTDR_putUInt64( uint64_t in );
 *   ER             cClientSideTDR_putUInt128( uint128_t in );
 *   ER             cClientSideTDR_getUInt8( uint8_t* out );
 *   ER             cClientSideTDR_getUInt16( uint16_t* out );
 *   ER             cClientSideTDR_getUInt32( uint32_t* out );
 *   ER             cClientSideTDR_getUInt64( uint64_t* out );
 *   ER             cClientSideTDR_getUInt128( uint128_t* out );
 *   ER             cClientSideTDR_putChar( char_t in );
 *   ER             cClientSideTDR_getChar( char_t* out );
 *   ER             cClientSideTDR_putBool( bool_t in );
 *   ER             cClientSideTDR_getBool( bool_t* out );
 *   ER             cClientSideTDR_putFloat32( float32_t in );
 *   ER             cClientSideTDR_putDouble64( double64_t in );
 *   ER             cClientSideTDR_getFloat32( float32_t* out );
 *   ER             cClientSideTDR_getDouble64( double64_t* out );
 *   ER             cClientSideTDR_putSChar( schar_t in );
 *   ER             cClientSideTDR_putShort( short_t in );
 *   ER             cClientSideTDR_putInt( int_t in );
 *   ER             cClientSideTDR_putLong( long_t in );
 *   ER             cClientSideTDR_getSChar( schar_t* out );
 *   ER             cClientSideTDR_getShort( short_t* out );
 *   ER             cClientSideTDR_getInt( int_t* out );
 *   ER             cClientSideTDR_getLong( long_t* out );
 *   ER             cClientSideTDR_putUChar( uchar_t in );
 *   ER             cClientSideTDR_putUShort( ushort_t in );
 *   ER             cClientSideTDR_putUInt( uint_t in );
 *   ER             cClientSideTDR_putULong( ulong_t in );
 *   ER             cClientSideTDR_getUChar( unsigned char* out );
 *   ER             cClientSideTDR_getUShort( ushort_t* out );
 *   ER             cClientSideTDR_getUInt( uint_t* out );
 *   ER             cClientSideTDR_getULong( ulong_t* out );
 *   ER             cClientSideTDR_putIntptr( const intptr_t ptr );
 *   ER             cClientSideTDR_getIntptr( intptr_t* ptr );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tRPCSharedChannelMan_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eSemaphore
 * entry port: eSemaphore
 * signature:  sSemaphore
 * context:    task
 * entry port array size:  NEP_eSemaphore
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSemaphore_signal
 * name:         eSemaphore_signal
 * global_name:  tRPCSharedChannelMan_eSemaphore_signal
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSemaphore_signal(CELLIDX idx, int_t subscript)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSemaphore_wait
 * name:         eSemaphore_wait
 * global_name:  tRPCSharedChannelMan_eSemaphore_wait
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSemaphore_wait(CELLIDX idx, int_t subscript)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSemaphore_waitPolling
 * name:         eSemaphore_waitPolling
 * global_name:  tRPCSharedChannelMan_eSemaphore_waitPolling
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSemaphore_waitPolling(CELLIDX idx, int_t subscript)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSemaphore_waitTimeout
 * name:         eSemaphore_waitTimeout
 * global_name:  tRPCSharedChannelMan_eSemaphore_waitTimeout
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSemaphore_waitTimeout(CELLIDX idx, int_t subscript, TMO timeout)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSemaphore_initialize
 * name:         eSemaphore_initialize
 * global_name:  tRPCSharedChannelMan_eSemaphore_initialize
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSemaphore_initialize(CELLIDX idx, int_t subscript)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSemaphore_refer
 * name:         eSemaphore_refer
 * global_name:  tRPCSharedChannelMan_eSemaphore_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSemaphore_refer(CELLIDX idx, int_t subscript, T_RSEM* pk_semaphore_status)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
