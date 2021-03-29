/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tSimpleClient_template.c => src/tSimpleClient.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * require port: signature:sSysLog context:task
 *   ER             write( uint_t prio, const SYSLOG* p_syslog );
 *   ER_UINT        read( SYSLOG* p_syslog );
 *   ER             mask( uint_t logmask, uint_t lowmask );
 *   ER             refer( T_SYSLOG_RLOG* pk_rlog );
 * call port: cCall signature: sSimple context:task
 *   void           cCall_shutdown( );
 *   ER             cCall_func1( int32_t inval );
 *   ER             cCall_func2( const char_t* str );
 *   ER             cCall_func3( const char_t* msg, int32_t len );
 *   ER             cCall_func4( const char_t** msg, int32_t len );
 *   ER             cCall_func5( const STA** sta, int32_t len );
 *   ER             cCall_func6( const int8_t array[8] );
 *   ER             cCall_func7( const int8_t array2[8][4] );
 *   ER             cCall_func8( const STA arraySt[2] );
 *   ER             cCall_func9( const STA* arraySt[2] );
 *   ER             cCall_func10( int32_t* val );
 *   ER             cCall_func11( char_t* msg, int32_t len );
 *   ER             cCall_func12( char_t** msg );
 *   ER             cCall_func13( STB* sta, int32_t len );
 *   ER             cCall_func14( STB** sta, int32_t len );
 *   ER             cCall_func15( int8_t(* array1)[8] );
 *   ER             cCall_func40( int32_t* val );
 *   ER             cCall_func41( char_t* msg, int32_t len );
 *   ER             cCall_func42( char_t** msg );
 *   ER             cCall_func43( STA* sta, int32_t len );
 *   ER             cCall_func21( int32_t* a );
 *   ER             cCall_func22( STA* sta );
 *   ER             cCall_func23( char_t* str );
 *   ER             cCall_func24( char_t* msg, int32_t len );
 *   ER             cCall_func25( char_t** msg, int32_t len );
 *   ER             cCall_func26( STA** sta, int32_t len );
 *   ER             cCall_func27( int8_t(* array2)[8] );
 *   ER             cCall_func31( int32_t** a );
 *   ER             cCall_func32( STA** sta );
 *   ER             cCall_func33( char_t** str );
 *   ER             cCall_func34( char_t** msg, int32_t* len );
 *   ER             cCall_func35( char_t*** msg, int32_t* len, int32_t* msglen );
 *   ER             cCall_func36( STA** sta, int32_t* len );
 *   ER             cCall_func37( STA*** sta, int32_t* len );
 *   ER             cCall_func38( int8_t(** array2)[8] );
 *   ER             cCall_func39( STA*(** arraySt)[2] );
 * call port: cOpener signature: sSocketClientOpener context:task
 *   ER             cOpener_open( const char_t* serverAddr, uint16_t portNo, TMO tmo );
 *   ER             cOpener_simpleOpen( TMO tmo );
 *   ER             cOpener_close( TMO tmo );
 * call port: cSampleTask signature: sTask context:task
 *   ER             cSampleTask_activate( );
 *   ER             cSampleTask_suspend( );
 *   ER             cSampleTask_resume( );
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
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tSimpleClient_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eMain
 * entry port: eMain
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eMain_main
 * name:         eMain_main
 * global_name:  tSimpleClient_eMain_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eMain_main(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
