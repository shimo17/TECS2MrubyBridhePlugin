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
 * 属性アクセスマクロ #_CAAM_#
 * jbuf             jmp_buf          VAR_jbuf        
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
 * call port: cOpener signature: sSocketClientOpener context:task
 *   ER             cOpener_open( const char_t* serverAddr, uint16_t portNo, TMO tmo );
 *   ER             cOpener_simpleOpen( TMO tmo );
 *   ER             cOpener_close( TMO tmo );
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

/* #[<ENTRY_PORT>]# eHandler
 * entry port: eHandler
 * signature:  sRPCErrorHandler
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eHandler_errorOccured
 * name:         eHandler_errorOccured
 * global_name:  tSimpleClient_eHandler_errorOccured
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eHandler_errorOccured(CELLIDX idx, int16_t func_id, ER er, int16_t state)
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
