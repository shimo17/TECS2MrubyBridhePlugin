/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSimpleClient_TECSGEN_H
#define tSimpleClient_TECSGEN_H

/*
 * celltype          :  tSimpleClient
 * global name       :  tSimpleClient
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  true
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSysLog_tecsgen.h"
#include "sSimple_tecsgen.h"
#include "sSocketClientOpener_tecsgen.h"
#include "sTaskBody_tecsgen.h"
#include "sRPCErrorHandler_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tSimpleClient_CB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    jmp_buf        jbuf;
}  tSimpleClient_CB;
extern tSimpleClient_CB  tSimpleClient_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tSimpleClient_CB *tSimpleClient_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tSimpleClient_eMain_main(tSimpleClient_IDX idx);
/* sRPCErrorHandler */
ER           tSimpleClient_eHandler_errorOccured(tSimpleClient_IDX idx, int16_t func_id, ER er, int16_t state);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tSimpleClient_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSysLog_tecsgen.h"
#include "tTracePlugin_sSimple_tecsgen.h"
#include "tSocketClient_tecsgen.h"
#include "tAlloc_tecsgen.h"
#ifdef  tSimpleClient_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tSimpleClient_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tSimpleClient_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tSimpleClient_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSimpleClient_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tSimpleClient_GET_CELLCB(idx) (idx)



/* var アクセスマクロ #_VAM_# */
#define tSimpleClient_VAR_jbuf(p_that)	((p_that)->jbuf)

#define tSimpleClient_GET_jbuf(p_that)	((p_that)->jbuf)
#define tSimpleClient_SET_jbuf(p_that,val)	((p_that)->jbuf=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tSimpleClient__require_call_port_tSysLog_eSysLog_write( p_that, prio, p_syslog ) \
	  tSysLog_eSysLog_write( \
	    (prio), (p_syslog) )
#define tSimpleClient__require_call_port_tSysLog_eSysLog_read( p_that, p_syslog ) \
	  tSysLog_eSysLog_read( \
	    (p_syslog) )
#define tSimpleClient__require_call_port_tSysLog_eSysLog_mask( p_that, logmask, lowmask ) \
	  tSysLog_eSysLog_mask( \
	    (logmask), (lowmask) )
#define tSimpleClient__require_call_port_tSysLog_eSysLog_refer( p_that, pk_rlog ) \
	  tSysLog_eSysLog_refer( \
	    (pk_rlog) )
#define tSimpleClient_cCall_shutdown( p_that ) \
	  tTracePlugin_sSimple_eThroughEntry_shutdown( \
	   &tTracePlugin_sSimple_CB_tab[0] )
#define tSimpleClient_cCall_func1( p_that, inval ) \
	  tTracePlugin_sSimple_eThroughEntry_func1( \
	   &tTracePlugin_sSimple_CB_tab[0], (inval) )
#define tSimpleClient_cCall_func2( p_that, str ) \
	  tTracePlugin_sSimple_eThroughEntry_func2( \
	   &tTracePlugin_sSimple_CB_tab[0], (str) )
#define tSimpleClient_cCall_func3( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func3( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tSimpleClient_cCall_func4( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func4( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tSimpleClient_cCall_func5( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func5( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tSimpleClient_cCall_func6( p_that, array ) \
	  tTracePlugin_sSimple_eThroughEntry_func6( \
	   &tTracePlugin_sSimple_CB_tab[0], (array) )
#define tSimpleClient_cCall_func7( p_that, array2 ) \
	  tTracePlugin_sSimple_eThroughEntry_func7( \
	   &tTracePlugin_sSimple_CB_tab[0], (array2) )
#define tSimpleClient_cCall_func8( p_that, arraySt ) \
	  tTracePlugin_sSimple_eThroughEntry_func8( \
	   &tTracePlugin_sSimple_CB_tab[0], (arraySt) )
#define tSimpleClient_cCall_func9( p_that, arraySt ) \
	  tTracePlugin_sSimple_eThroughEntry_func9( \
	   &tTracePlugin_sSimple_CB_tab[0], (arraySt) )
#define tSimpleClient_cCall_func10( p_that, val ) \
	  tTracePlugin_sSimple_eThroughEntry_func10( \
	   &tTracePlugin_sSimple_CB_tab[0], (val) )
#define tSimpleClient_cCall_func11( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func11( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tSimpleClient_cCall_func12( p_that, msg ) \
	  tTracePlugin_sSimple_eThroughEntry_func12( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg) )
#define tSimpleClient_cCall_func13( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func13( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tSimpleClient_cCall_func14( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func14( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tSimpleClient_cCall_func15( p_that, array1 ) \
	  tTracePlugin_sSimple_eThroughEntry_func15( \
	   &tTracePlugin_sSimple_CB_tab[0], (array1) )
#define tSimpleClient_cCall_func16( p_that, array, sz ) \
	  tTracePlugin_sSimple_eThroughEntry_func16( \
	   &tTracePlugin_sSimple_CB_tab[0], (array), (sz) )
#define tSimpleClient_cCall_func40( p_that, val ) \
	  tTracePlugin_sSimple_eThroughEntry_func40( \
	   &tTracePlugin_sSimple_CB_tab[0], (val) )
#define tSimpleClient_cCall_func41( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func41( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tSimpleClient_cCall_func42( p_that, msg ) \
	  tTracePlugin_sSimple_eThroughEntry_func42( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg) )
#define tSimpleClient_cCall_func43( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func43( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tSimpleClient_cCall_func44( p_that, array, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func44( \
	   &tTracePlugin_sSimple_CB_tab[0], (array), (len) )
#define tSimpleClient_cCall_func21( p_that, a ) \
	  tTracePlugin_sSimple_eThroughEntry_func21( \
	   &tTracePlugin_sSimple_CB_tab[0], (a) )
#define tSimpleClient_cCall_func22( p_that, sta ) \
	  tTracePlugin_sSimple_eThroughEntry_func22( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta) )
#define tSimpleClient_cCall_func23( p_that, str ) \
	  tTracePlugin_sSimple_eThroughEntry_func23( \
	   &tTracePlugin_sSimple_CB_tab[0], (str) )
#define tSimpleClient_cCall_func24( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func24( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tSimpleClient_cCall_func25( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func25( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tSimpleClient_cCall_func26( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func26( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tSimpleClient_cCall_func27( p_that, array2 ) \
	  tTracePlugin_sSimple_eThroughEntry_func27( \
	   &tTracePlugin_sSimple_CB_tab[0], (array2) )
#define tSimpleClient_cCall_func31( p_that, a ) \
	  tTracePlugin_sSimple_eThroughEntry_func31( \
	   &tTracePlugin_sSimple_CB_tab[0], (a) )
#define tSimpleClient_cCall_func32( p_that, sta ) \
	  tTracePlugin_sSimple_eThroughEntry_func32( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta) )
#define tSimpleClient_cCall_func33( p_that, str ) \
	  tTracePlugin_sSimple_eThroughEntry_func33( \
	   &tTracePlugin_sSimple_CB_tab[0], (str) )
#define tSimpleClient_cCall_func34( p_that, msg, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func34( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len) )
#define tSimpleClient_cCall_func35( p_that, msg, len, msglen ) \
	  tTracePlugin_sSimple_eThroughEntry_func35( \
	   &tTracePlugin_sSimple_CB_tab[0], (msg), (len), (msglen) )
#define tSimpleClient_cCall_func36( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func36( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tSimpleClient_cCall_func37( p_that, sta, len ) \
	  tTracePlugin_sSimple_eThroughEntry_func37( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (len) )
#define tSimpleClient_cCall_func38( p_that, array2 ) \
	  tTracePlugin_sSimple_eThroughEntry_func38( \
	   &tTracePlugin_sSimple_CB_tab[0], (array2) )
#define tSimpleClient_cCall_func39( p_that, arraySt ) \
	  tTracePlugin_sSimple_eThroughEntry_func39( \
	   &tTracePlugin_sSimple_CB_tab[0], (arraySt) )
#define tSimpleClient_cCall_func50( p_that, i, s, l ) \
	  tTracePlugin_sSimple_eThroughEntry_func50( \
	   &tTracePlugin_sSimple_CB_tab[0], (i), (s), (l) )
#define tSimpleClient_cCall_func51( p_that, i, s, l ) \
	  tTracePlugin_sSimple_eThroughEntry_func51( \
	   &tTracePlugin_sSimple_CB_tab[0], (i), (s), (l) )
#define tSimpleClient_cCall_func52( p_that, i, s, l ) \
	  tTracePlugin_sSimple_eThroughEntry_func52( \
	   &tTracePlugin_sSimple_CB_tab[0], (i), (s), (l) )
#define tSimpleClient_cCall_func53( p_that, i, s, l ) \
	  tTracePlugin_sSimple_eThroughEntry_func53( \
	   &tTracePlugin_sSimple_CB_tab[0], (i), (s), (l) )
#define tSimpleClient_cCall_func54( p_that, c, sc, uc ) \
	  tTracePlugin_sSimple_eThroughEntry_func54( \
	   &tTracePlugin_sSimple_CB_tab[0], (c), (sc), (uc) )
#define tSimpleClient_cCall_func55( p_that, c, sc, uc ) \
	  tTracePlugin_sSimple_eThroughEntry_func55( \
	   &tTracePlugin_sSimple_CB_tab[0], (c), (sc), (uc) )
#define tSimpleClient_cCall_func56( p_that, ip, op ) \
	  tTracePlugin_sSimple_eThroughEntry_func56( \
	   &tTracePlugin_sSimple_CB_tab[0], (ip), (op) )
#define tSimpleClient_cCall_func60( p_that, ip, op ) \
	  tTracePlugin_sSimple_eThroughEntry_func60( \
	   &tTracePlugin_sSimple_CB_tab[0], (ip), (op) )
#define tSimpleClient_cCall_func61( p_that, ip, op ) \
	  tTracePlugin_sSimple_eThroughEntry_func61( \
	   &tTracePlugin_sSimple_CB_tab[0], (ip), (op) )
#define tSimpleClient_cCall_func62( p_that, iop ) \
	  tTracePlugin_sSimple_eThroughEntry_func62( \
	   &tTracePlugin_sSimple_CB_tab[0], (iop) )
#define tSimpleClient_cCall_func63( p_that, sp ) \
	  tTracePlugin_sSimple_eThroughEntry_func63( \
	   &tTracePlugin_sSimple_CB_tab[0], (sp) )
#define tSimpleClient_cCall_func64( p_that, rp, b_zero ) \
	  tTracePlugin_sSimple_eThroughEntry_func64( \
	   &tTracePlugin_sSimple_CB_tab[0], (rp), (b_zero) )
#define tSimpleClient_cCall_func70( p_that, sta ) \
	  tTracePlugin_sSimple_eThroughEntry_func70( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta) )
#define tSimpleClient_cCall_func71( p_that, str ) \
	  tTracePlugin_sSimple_eThroughEntry_func71( \
	   &tTracePlugin_sSimple_CB_tab[0], (str) )
#define tSimpleClient_cCall_func72( p_that, sta, b_zero ) \
	  tTracePlugin_sSimple_eThroughEntry_func72( \
	   &tTracePlugin_sSimple_CB_tab[0], (sta), (b_zero) )
#define tSimpleClient_cCall_func73( p_that, str, b_zero ) \
	  tTracePlugin_sSimple_eThroughEntry_func73( \
	   &tTracePlugin_sSimple_CB_tab[0], (str), (b_zero) )
#define tSimpleClient_cCall_func80( p_that, val ) \
	  tTracePlugin_sSimple_eThroughEntry_func80( \
	   &tTracePlugin_sSimple_CB_tab[0], (val) )
#define tSimpleClient_cCall_func81( p_that, val ) \
	  tTracePlugin_sSimple_eThroughEntry_func81( \
	   &tTracePlugin_sSimple_CB_tab[0], (val) )
#define tSimpleClient_cCall_func82( p_that, val ) \
	  tTracePlugin_sSimple_eThroughEntry_func82( \
	   &tTracePlugin_sSimple_CB_tab[0], (val) )
#define tSimpleClient_cCall_func83( p_that, val ) \
	  tTracePlugin_sSimple_eThroughEntry_func83( \
	   &tTracePlugin_sSimple_CB_tab[0], (val) )
#define tSimpleClient_cOpener_open( p_that, serverAddr, portNo, tmo ) \
	  tSocketClient_eOpener_open( \
	   &tSocketClient_CB_tab[0], (serverAddr), (portNo), (tmo) )
#define tSimpleClient_cOpener_simpleOpen( p_that, tmo ) \
	  tSocketClient_eOpener_simpleOpen( \
	   &tSocketClient_CB_tab[0], (tmo) )
#define tSimpleClient_cOpener_close( p_that, tmo ) \
	  tSocketClient_eOpener_close( \
	   &tSocketClient_CB_tab[0], (tmo) )
#define tSimpleClient_cCall_func21_a_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func21_a_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func21_a_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func22_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func22_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func22_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func23_str_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func23_str_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func23_str_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func24_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func24_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func24_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func25_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func25_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func25_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func26_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func26_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func26_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func27_array2_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func27_array2_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func27_array2_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func31_a_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func31_a_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func31_a_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func32_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func32_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func32_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func33_str_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func33_str_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func33_str_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func34_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func34_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func34_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func35_msg_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func35_msg_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func35_msg_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func36_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func36_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func36_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func37_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func37_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func37_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func38_array2_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func38_array2_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func38_array2_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func39_arraySt_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func39_arraySt_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func39_arraySt_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func63_sp_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func63_sp_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func63_sp_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func64_rp_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func64_rp_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func64_rp_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func70_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func70_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func70_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func71_str_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func71_str_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func71_str_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func72_sta_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func72_sta_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func72_sta_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )
#define tSimpleClient_cCall_func73_str_alloc( p_that, size, ptr ) \
	  tAlloc_eAlloc_alloc( \
	   &tAlloc_CB_tab[0], (size), (ptr) )
#define tSimpleClient_cCall_func73_str_dealloc( p_that, ptr ) \
	  tAlloc_eAlloc_dealloc( \
	   &tAlloc_CB_tab[0], (ptr) )
#define tSimpleClient_cCall_func73_str_printStatistics( p_that ) \
	  tAlloc_eAlloc_printStatistics( \
	   &tAlloc_CB_tab[0] )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tSimpleClient_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSimpleClient_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSimpleClient_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSimpleClient_IDX



/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_jbuf             tSimpleClient_VAR_jbuf( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define write( prio, p_syslog ) \
          ((void)p_cellcb, tSimpleClient__require_call_port_tSysLog_eSysLog_write( p_cellcb, prio, p_syslog ))
#define read( p_syslog ) \
          ((void)p_cellcb, tSimpleClient__require_call_port_tSysLog_eSysLog_read( p_cellcb, p_syslog ))
#define mask( logmask, lowmask ) \
          ((void)p_cellcb, tSimpleClient__require_call_port_tSysLog_eSysLog_mask( p_cellcb, logmask, lowmask ))
#define refer( pk_rlog ) \
          ((void)p_cellcb, tSimpleClient__require_call_port_tSysLog_eSysLog_refer( p_cellcb, pk_rlog ))
#define cCall_shutdown( ) \
          ((void)p_cellcb, tSimpleClient_cCall_shutdown( p_cellcb ))
#define cCall_func1( inval ) \
          ((void)p_cellcb, tSimpleClient_cCall_func1( p_cellcb, inval ))
#define cCall_func2( str ) \
          ((void)p_cellcb, tSimpleClient_cCall_func2( p_cellcb, str ))
#define cCall_func3( msg, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func3( p_cellcb, msg, len ))
#define cCall_func4( msg, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func4( p_cellcb, msg, len ))
#define cCall_func5( sta, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func5( p_cellcb, sta, len ))
#define cCall_func6( array ) \
          ((void)p_cellcb, tSimpleClient_cCall_func6( p_cellcb, array ))
#define cCall_func7( array2 ) \
          ((void)p_cellcb, tSimpleClient_cCall_func7( p_cellcb, array2 ))
#define cCall_func8( arraySt ) \
          ((void)p_cellcb, tSimpleClient_cCall_func8( p_cellcb, arraySt ))
#define cCall_func9( arraySt ) \
          ((void)p_cellcb, tSimpleClient_cCall_func9( p_cellcb, arraySt ))
#define cCall_func10( val ) \
          ((void)p_cellcb, tSimpleClient_cCall_func10( p_cellcb, val ))
#define cCall_func11( msg, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func11( p_cellcb, msg, len ))
#define cCall_func12( msg ) \
          ((void)p_cellcb, tSimpleClient_cCall_func12( p_cellcb, msg ))
#define cCall_func13( sta, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func13( p_cellcb, sta, len ))
#define cCall_func14( sta, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func14( p_cellcb, sta, len ))
#define cCall_func15( array1 ) \
          ((void)p_cellcb, tSimpleClient_cCall_func15( p_cellcb, array1 ))
#define cCall_func16( array, sz ) \
          ((void)p_cellcb, tSimpleClient_cCall_func16( p_cellcb, array, sz ))
#define cCall_func40( val ) \
          ((void)p_cellcb, tSimpleClient_cCall_func40( p_cellcb, val ))
#define cCall_func41( msg, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func41( p_cellcb, msg, len ))
#define cCall_func42( msg ) \
          ((void)p_cellcb, tSimpleClient_cCall_func42( p_cellcb, msg ))
#define cCall_func43( sta, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func43( p_cellcb, sta, len ))
#define cCall_func44( array, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func44( p_cellcb, array, len ))
#define cCall_func21( a ) \
          ((void)p_cellcb, tSimpleClient_cCall_func21( p_cellcb, a ))
#define cCall_func22( sta ) \
          ((void)p_cellcb, tSimpleClient_cCall_func22( p_cellcb, sta ))
#define cCall_func23( str ) \
          ((void)p_cellcb, tSimpleClient_cCall_func23( p_cellcb, str ))
#define cCall_func24( msg, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func24( p_cellcb, msg, len ))
#define cCall_func25( msg, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func25( p_cellcb, msg, len ))
#define cCall_func26( sta, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func26( p_cellcb, sta, len ))
#define cCall_func27( array2 ) \
          ((void)p_cellcb, tSimpleClient_cCall_func27( p_cellcb, array2 ))
#define cCall_func31( a ) \
          ((void)p_cellcb, tSimpleClient_cCall_func31( p_cellcb, a ))
#define cCall_func32( sta ) \
          ((void)p_cellcb, tSimpleClient_cCall_func32( p_cellcb, sta ))
#define cCall_func33( str ) \
          ((void)p_cellcb, tSimpleClient_cCall_func33( p_cellcb, str ))
#define cCall_func34( msg, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func34( p_cellcb, msg, len ))
#define cCall_func35( msg, len, msglen ) \
          ((void)p_cellcb, tSimpleClient_cCall_func35( p_cellcb, msg, len, msglen ))
#define cCall_func36( sta, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func36( p_cellcb, sta, len ))
#define cCall_func37( sta, len ) \
          ((void)p_cellcb, tSimpleClient_cCall_func37( p_cellcb, sta, len ))
#define cCall_func38( array2 ) \
          ((void)p_cellcb, tSimpleClient_cCall_func38( p_cellcb, array2 ))
#define cCall_func39( arraySt ) \
          ((void)p_cellcb, tSimpleClient_cCall_func39( p_cellcb, arraySt ))
#define cCall_func50( i, s, l ) \
          ((void)p_cellcb, tSimpleClient_cCall_func50( p_cellcb, i, s, l ))
#define cCall_func51( i, s, l ) \
          ((void)p_cellcb, tSimpleClient_cCall_func51( p_cellcb, i, s, l ))
#define cCall_func52( i, s, l ) \
          ((void)p_cellcb, tSimpleClient_cCall_func52( p_cellcb, i, s, l ))
#define cCall_func53( i, s, l ) \
          ((void)p_cellcb, tSimpleClient_cCall_func53( p_cellcb, i, s, l ))
#define cCall_func54( c, sc, uc ) \
          ((void)p_cellcb, tSimpleClient_cCall_func54( p_cellcb, c, sc, uc ))
#define cCall_func55( c, sc, uc ) \
          ((void)p_cellcb, tSimpleClient_cCall_func55( p_cellcb, c, sc, uc ))
#define cCall_func56( ip, op ) \
          ((void)p_cellcb, tSimpleClient_cCall_func56( p_cellcb, ip, op ))
#define cCall_func60( ip, op ) \
          ((void)p_cellcb, tSimpleClient_cCall_func60( p_cellcb, ip, op ))
#define cCall_func61( ip, op ) \
          ((void)p_cellcb, tSimpleClient_cCall_func61( p_cellcb, ip, op ))
#define cCall_func62( iop ) \
          ((void)p_cellcb, tSimpleClient_cCall_func62( p_cellcb, iop ))
#define cCall_func63( sp ) \
          ((void)p_cellcb, tSimpleClient_cCall_func63( p_cellcb, sp ))
#define cCall_func64( rp, b_zero ) \
          ((void)p_cellcb, tSimpleClient_cCall_func64( p_cellcb, rp, b_zero ))
#define cCall_func70( sta ) \
          ((void)p_cellcb, tSimpleClient_cCall_func70( p_cellcb, sta ))
#define cCall_func71( str ) \
          ((void)p_cellcb, tSimpleClient_cCall_func71( p_cellcb, str ))
#define cCall_func72( sta, b_zero ) \
          ((void)p_cellcb, tSimpleClient_cCall_func72( p_cellcb, sta, b_zero ))
#define cCall_func73( str, b_zero ) \
          ((void)p_cellcb, tSimpleClient_cCall_func73( p_cellcb, str, b_zero ))
#define cCall_func80( val ) \
          ((void)p_cellcb, tSimpleClient_cCall_func80( p_cellcb, val ))
#define cCall_func81( val ) \
          ((void)p_cellcb, tSimpleClient_cCall_func81( p_cellcb, val ))
#define cCall_func82( val ) \
          ((void)p_cellcb, tSimpleClient_cCall_func82( p_cellcb, val ))
#define cCall_func83( val ) \
          ((void)p_cellcb, tSimpleClient_cCall_func83( p_cellcb, val ))
#define cOpener_open( serverAddr, portNo, tmo ) \
          ((void)p_cellcb, tSimpleClient_cOpener_open( p_cellcb, serverAddr, portNo, tmo ))
#define cOpener_simpleOpen( tmo ) \
          ((void)p_cellcb, tSimpleClient_cOpener_simpleOpen( p_cellcb, tmo ))
#define cOpener_close( tmo ) \
          ((void)p_cellcb, tSimpleClient_cOpener_close( p_cellcb, tmo ))
#define cCall_func21_a_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func21_a_alloc( p_cellcb, size, ptr ))
#define cCall_func21_a_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func21_a_dealloc( p_cellcb, ptr ))
#define cCall_func21_a_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func21_a_printStatistics( p_cellcb ))
#define cCall_func22_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func22_sta_alloc( p_cellcb, size, ptr ))
#define cCall_func22_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func22_sta_dealloc( p_cellcb, ptr ))
#define cCall_func22_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func22_sta_printStatistics( p_cellcb ))
#define cCall_func23_str_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func23_str_alloc( p_cellcb, size, ptr ))
#define cCall_func23_str_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func23_str_dealloc( p_cellcb, ptr ))
#define cCall_func23_str_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func23_str_printStatistics( p_cellcb ))
#define cCall_func24_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func24_msg_alloc( p_cellcb, size, ptr ))
#define cCall_func24_msg_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func24_msg_dealloc( p_cellcb, ptr ))
#define cCall_func24_msg_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func24_msg_printStatistics( p_cellcb ))
#define cCall_func25_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func25_msg_alloc( p_cellcb, size, ptr ))
#define cCall_func25_msg_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func25_msg_dealloc( p_cellcb, ptr ))
#define cCall_func25_msg_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func25_msg_printStatistics( p_cellcb ))
#define cCall_func26_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func26_sta_alloc( p_cellcb, size, ptr ))
#define cCall_func26_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func26_sta_dealloc( p_cellcb, ptr ))
#define cCall_func26_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func26_sta_printStatistics( p_cellcb ))
#define cCall_func27_array2_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func27_array2_alloc( p_cellcb, size, ptr ))
#define cCall_func27_array2_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func27_array2_dealloc( p_cellcb, ptr ))
#define cCall_func27_array2_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func27_array2_printStatistics( p_cellcb ))
#define cCall_func31_a_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func31_a_alloc( p_cellcb, size, ptr ))
#define cCall_func31_a_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func31_a_dealloc( p_cellcb, ptr ))
#define cCall_func31_a_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func31_a_printStatistics( p_cellcb ))
#define cCall_func32_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func32_sta_alloc( p_cellcb, size, ptr ))
#define cCall_func32_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func32_sta_dealloc( p_cellcb, ptr ))
#define cCall_func32_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func32_sta_printStatistics( p_cellcb ))
#define cCall_func33_str_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func33_str_alloc( p_cellcb, size, ptr ))
#define cCall_func33_str_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func33_str_dealloc( p_cellcb, ptr ))
#define cCall_func33_str_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func33_str_printStatistics( p_cellcb ))
#define cCall_func34_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func34_msg_alloc( p_cellcb, size, ptr ))
#define cCall_func34_msg_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func34_msg_dealloc( p_cellcb, ptr ))
#define cCall_func34_msg_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func34_msg_printStatistics( p_cellcb ))
#define cCall_func35_msg_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func35_msg_alloc( p_cellcb, size, ptr ))
#define cCall_func35_msg_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func35_msg_dealloc( p_cellcb, ptr ))
#define cCall_func35_msg_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func35_msg_printStatistics( p_cellcb ))
#define cCall_func36_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func36_sta_alloc( p_cellcb, size, ptr ))
#define cCall_func36_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func36_sta_dealloc( p_cellcb, ptr ))
#define cCall_func36_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func36_sta_printStatistics( p_cellcb ))
#define cCall_func37_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func37_sta_alloc( p_cellcb, size, ptr ))
#define cCall_func37_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func37_sta_dealloc( p_cellcb, ptr ))
#define cCall_func37_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func37_sta_printStatistics( p_cellcb ))
#define cCall_func38_array2_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func38_array2_alloc( p_cellcb, size, ptr ))
#define cCall_func38_array2_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func38_array2_dealloc( p_cellcb, ptr ))
#define cCall_func38_array2_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func38_array2_printStatistics( p_cellcb ))
#define cCall_func39_arraySt_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func39_arraySt_alloc( p_cellcb, size, ptr ))
#define cCall_func39_arraySt_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func39_arraySt_dealloc( p_cellcb, ptr ))
#define cCall_func39_arraySt_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func39_arraySt_printStatistics( p_cellcb ))
#define cCall_func63_sp_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func63_sp_alloc( p_cellcb, size, ptr ))
#define cCall_func63_sp_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func63_sp_dealloc( p_cellcb, ptr ))
#define cCall_func63_sp_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func63_sp_printStatistics( p_cellcb ))
#define cCall_func64_rp_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func64_rp_alloc( p_cellcb, size, ptr ))
#define cCall_func64_rp_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func64_rp_dealloc( p_cellcb, ptr ))
#define cCall_func64_rp_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func64_rp_printStatistics( p_cellcb ))
#define cCall_func70_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func70_sta_alloc( p_cellcb, size, ptr ))
#define cCall_func70_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func70_sta_dealloc( p_cellcb, ptr ))
#define cCall_func70_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func70_sta_printStatistics( p_cellcb ))
#define cCall_func71_str_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func71_str_alloc( p_cellcb, size, ptr ))
#define cCall_func71_str_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func71_str_dealloc( p_cellcb, ptr ))
#define cCall_func71_str_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func71_str_printStatistics( p_cellcb ))
#define cCall_func72_sta_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func72_sta_alloc( p_cellcb, size, ptr ))
#define cCall_func72_sta_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func72_sta_dealloc( p_cellcb, ptr ))
#define cCall_func72_sta_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func72_sta_printStatistics( p_cellcb ))
#define cCall_func73_str_alloc( size, ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func73_str_alloc( p_cellcb, size, ptr ))
#define cCall_func73_str_dealloc( ptr ) \
          ((void)p_cellcb, tSimpleClient_cCall_func73_str_dealloc( p_cellcb, ptr ))
#define cCall_func73_str_printStatistics( ) \
          ((void)p_cellcb, tSimpleClient_cCall_func73_str_printStatistics( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tSimpleClient_eMain_main
#define eHandler_errorOccured tSimpleClient_eHandler_errorOccured

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSimpleClient_N_CELL; (i)++ ){ \
       (p_cb) = &tSimpleClient_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */

/* deallocate マクロ #_DAL_#   */
#define CCALL_FUNC21_A_DEALLOC(a) \
	  cCall_func21_a_dealloc( (a) ); 
#define CCALL_FUNC22_STA_DEALLOC(sta) \
	  cCall_func22_sta_dealloc( (*(sta)).msg );  \
	  cCall_func22_sta_dealloc( (sta) ); 
#define CCALL_FUNC23_STR_DEALLOC(str) \
	  cCall_func23_str_dealloc( (str) ); 
#define CCALL_FUNC24_MSG_DEALLOC(msg) \
	  cCall_func24_msg_dealloc( (msg) ); 
#define CCALL_FUNC25_MSG_DEALLOC(msg, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      cCall_func25_msg_dealloc( (msg)[i0__] );  \
	    } \
	  } \
	  cCall_func25_msg_dealloc( (msg) ); 
#define CCALL_FUNC26_STA_DEALLOC(sta, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      cCall_func26_sta_dealloc( (*(sta)[i0__]).msg );  \
	      cCall_func26_sta_dealloc( (sta)[i0__] );  \
	    } \
	  } \
	  cCall_func26_sta_dealloc( (sta) ); 
#define CCALL_FUNC27_ARRAY2_DEALLOC(array2) \
	  cCall_func27_array2_dealloc( (array2) ); 
#define CCALL_FUNC31_A_DEALLOC(a) \
	  cCall_func31_a_dealloc( (a) ); 
#define CCALL_FUNC32_STA_DEALLOC(sta) \
	  cCall_func32_sta_dealloc( (*(sta)).msg );  \
	  cCall_func32_sta_dealloc( (sta) ); 
#define CCALL_FUNC33_STR_DEALLOC(str) \
	  cCall_func33_str_dealloc( (str) ); 
#define CCALL_FUNC34_MSG_DEALLOC(msg) \
	  cCall_func34_msg_dealloc( (msg) ); 
#define CCALL_FUNC35_MSG_DEALLOC(msg, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      cCall_func35_msg_dealloc( (msg)[i0__] );  \
	    } \
	  } \
	  cCall_func35_msg_dealloc( (msg) ); 
#define CCALL_FUNC36_STA_DEALLOC(sta, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      cCall_func36_sta_dealloc( (sta)[i0__].msg );  \
	    } \
	  } \
	  cCall_func36_sta_dealloc( (sta) ); 
#define CCALL_FUNC37_STA_DEALLOC(sta, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      cCall_func37_sta_dealloc( (*(sta)[i0__]).msg );  \
	      cCall_func37_sta_dealloc( (sta)[i0__] );  \
	    } \
	  } \
	  cCall_func37_sta_dealloc( (sta) ); 
#define CCALL_FUNC38_ARRAY2_DEALLOC(array2) \
	  cCall_func38_array2_dealloc( (array2) ); 
#define CCALL_FUNC39_ARRAYST_DEALLOC(arraySt) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < 2; i0__++ ){  \
	      cCall_func39_arraySt_dealloc( (*(*(arraySt))[i0__]).msg );  \
	      cCall_func39_arraySt_dealloc( (*(arraySt))[i0__] );  \
	    } \
	  } \
	  cCall_func39_arraySt_dealloc( (arraySt) ); 
#define CCALL_FUNC63_SP_DEALLOC(sp) \
	  if( (sp) ){	/* nullable */ \
	    cCall_func63_sp_dealloc( (sp) );  \
	  }
#define CCALL_FUNC64_RP_DEALLOC(rp) \
	  if( (rp) ){	/* nullable */ \
	    cCall_func64_rp_dealloc( (rp) );  \
	  }
#define CCALL_FUNC70_STA_DEALLOC(sta) \
	  if( (sta) ){	/* nullable */ \
	    cCall_func70_sta_dealloc( (*(sta)).msg );  \
	    cCall_func70_sta_dealloc( (sta) );  \
	  }
#define CCALL_FUNC71_STR_DEALLOC(str) \
	  if( (str) ){	/* nullable */ \
	    cCall_func71_str_dealloc( (str) );  \
	  }
#define CCALL_FUNC72_STA_DEALLOC(sta) \
	  if( (sta) ){	/* nullable */ \
	    cCall_func72_sta_dealloc( (*(sta)).msg );  \
	    cCall_func72_sta_dealloc( (sta) );  \
	  }
#define CCALL_FUNC73_STR_DEALLOC(str) \
	  if( (str) ){	/* nullable */ \
	    cCall_func73_str_dealloc( (str) );  \
	  }

/* deallocate マクロ #_DAL_#  _RESET */
#define CCALL_FUNC21_A_DEALLOC_RESET(a) \
	  if( (a) ){ \
	    cCall_func21_a_dealloc( (a) );  \
	  }
#define CCALL_FUNC22_STA_DEALLOC_RESET(sta) \
	  if( (sta) ){ \
	    if( (*(sta)).msg ){ \
	      cCall_func22_sta_dealloc( (*(sta)).msg );  \
	    } \
	    cCall_func22_sta_dealloc( (sta) );  \
	  }
#define CCALL_FUNC23_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    cCall_func23_str_dealloc( (str) );  \
	  }
#define CCALL_FUNC24_MSG_DEALLOC_RESET(msg) \
	  if( (msg) ){ \
	    cCall_func24_msg_dealloc( (msg) );  \
	  }
#define CCALL_FUNC25_MSG_DEALLOC_RESET(msg, count__) \
	  if( (msg) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (msg)[i0__] ){ \
	          cCall_func25_msg_dealloc( (msg)[i0__] );  \
	        } \
	      } \
	    } \
	    cCall_func25_msg_dealloc( (msg) );  \
	  }
#define CCALL_FUNC26_STA_DEALLOC_RESET(sta, count__) \
	  if( (sta) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sta)[i0__] ){ \
	          if( (*(sta)[i0__]).msg ){ \
	            cCall_func26_sta_dealloc( (*(sta)[i0__]).msg );  \
	          } \
	          cCall_func26_sta_dealloc( (sta)[i0__] );  \
	        } \
	      } \
	    } \
	    cCall_func26_sta_dealloc( (sta) );  \
	  }
#define CCALL_FUNC27_ARRAY2_DEALLOC_RESET(array2) \
	  if( (array2) ){ \
	    cCall_func27_array2_dealloc( (array2) );  \
	  }
#define CCALL_FUNC31_A_DEALLOC_RESET(a) \
	  if( (a) ){ \
	    cCall_func31_a_dealloc( (a) );  \
	  }
#define CCALL_FUNC32_STA_DEALLOC_RESET(sta) \
	  if( (sta) ){ \
	    if( (*(sta)).msg ){ \
	      cCall_func32_sta_dealloc( (*(sta)).msg );  \
	    } \
	    cCall_func32_sta_dealloc( (sta) );  \
	  }
#define CCALL_FUNC33_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    cCall_func33_str_dealloc( (str) );  \
	  }
#define CCALL_FUNC34_MSG_DEALLOC_RESET(msg) \
	  if( (msg) ){ \
	    cCall_func34_msg_dealloc( (msg) );  \
	  }
#define CCALL_FUNC35_MSG_DEALLOC_RESET(msg, count__) \
	  if( (msg) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (msg)[i0__] ){ \
	          cCall_func35_msg_dealloc( (msg)[i0__] );  \
	        } \
	      } \
	    } \
	    cCall_func35_msg_dealloc( (msg) );  \
	  }
#define CCALL_FUNC36_STA_DEALLOC_RESET(sta, count__) \
	  if( (sta) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sta)[i0__].msg ){ \
	          cCall_func36_sta_dealloc( (sta)[i0__].msg );  \
	        } \
	      } \
	    } \
	    cCall_func36_sta_dealloc( (sta) );  \
	  }
#define CCALL_FUNC37_STA_DEALLOC_RESET(sta, count__) \
	  if( (sta) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sta)[i0__] ){ \
	          if( (*(sta)[i0__]).msg ){ \
	            cCall_func37_sta_dealloc( (*(sta)[i0__]).msg );  \
	          } \
	          cCall_func37_sta_dealloc( (sta)[i0__] );  \
	        } \
	      } \
	    } \
	    cCall_func37_sta_dealloc( (sta) );  \
	  }
#define CCALL_FUNC38_ARRAY2_DEALLOC_RESET(array2) \
	  if( (array2) ){ \
	    cCall_func38_array2_dealloc( (array2) );  \
	  }
#define CCALL_FUNC39_ARRAYST_DEALLOC_RESET(arraySt) \
	  if( (arraySt) ){ \
	    { int_t  i1__; \
	      for( i1__ = 0; i1__ < 2; i1__++ ){  \
	        if( (*(arraySt))[i1__] ){ \
	          if( (*(*(arraySt))[i1__]).msg ){ \
	            cCall_func39_arraySt_dealloc( (*(*(arraySt))[i1__]).msg );  \
	          } \
	          cCall_func39_arraySt_dealloc( (*(arraySt))[i1__] );  \
	        } \
	      } \
	    } \
	    cCall_func39_arraySt_dealloc( (arraySt) );  \
	  }
#define CCALL_FUNC63_SP_DEALLOC_RESET(sp) \
	  if( (sp) ){ \
	    cCall_func63_sp_dealloc( (sp) );  \
	  }
#define CCALL_FUNC64_RP_DEALLOC_RESET(rp) \
	  if( (rp) ){ \
	    cCall_func64_rp_dealloc( (rp) );  \
	  }
#define CCALL_FUNC70_STA_DEALLOC_RESET(sta) \
	  if( (sta) ){ \
	    if( (*(sta)).msg ){ \
	      cCall_func70_sta_dealloc( (*(sta)).msg );  \
	    } \
	    cCall_func70_sta_dealloc( (sta) );  \
	  }
#define CCALL_FUNC71_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    cCall_func71_str_dealloc( (str) );  \
	  }
#define CCALL_FUNC72_STA_DEALLOC_RESET(sta) \
	  if( (sta) ){ \
	    if( (*(sta)).msg ){ \
	      cCall_func72_sta_dealloc( (*(sta)).msg );  \
	    } \
	    cCall_func72_sta_dealloc( (sta) );  \
	  }
#define CCALL_FUNC73_STR_DEALLOC_RESET(str) \
	  if( (str) ){ \
	    cCall_func73_str_dealloc( (str) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSimpleClient_TECSGENH */
