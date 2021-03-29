/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cCall signature: sSignature context:task
 *   ER             cCall_func1( int32_t inval );
 *   ER             cCall_func2( int32_t* outval );
 *   ER             cCall_func3( struct tag stval );
 *   ER             cCall_func4( stTag stval, INT inval );
 *   ER             cCall_func5( stTag* stval, INT inval );
 *   ER             cCall_func6( int8_t* buf, int32_t sz );
 *   ER             cCall_func7( int8_t** buf, int32_t* sz );
 *   ER             cCall_func10( const stTag* stval, int32_t a );
 * allocator port for call port:throughEntry func:func6 param: buf
 *   ER             throughEntry_func6_buf_alloc( int32_t sz, void** ptr );
 *   ER             throughEntry_func6_buf_dealloc( const void* ptr );
 * allocator port for call port:throughEntry func:func7 param: buf
 *   ER             throughEntry_func7_buf_alloc( int32_t sz, void** ptr );
 *   ER             throughEntry_func7_buf_dealloc( const void* ptr );
 * allocator port for call port:cCall func:func6 param: buf
 *   ER             cCall_func6_buf_alloc( int32_t sz, void** ptr );
 *   ER             cCall_func6_buf_dealloc( const void* ptr );
 * allocator port for call port:cCall func:func7 param: buf
 *   ER             cCall_func7_buf_alloc( int32_t sz, void** ptr );
 *   ER             cCall_func7_buf_dealloc( const void* ptr );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tPlugin1_sSignature_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# throughEntry
 * entry port: throughEntry
 * signature:  sSignature
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# throughEntry_func1
 * name:         throughEntry_func1
 * global_name:  tPlugin1_sSignature_throughEntry_func1
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
throughEntry_func1(CELLIDX idx, int32_t inval)
{
  ER  retval;
  tPlugin1_sSignature_CB    *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = tPlugin1_sSignature_GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述 */
  }

  retval = cCall_func1( inval );
  return retval;
}

/* #[<ENTRY_FUNC>]# throughEntry_func2
 * name:         throughEntry_func2
 * global_name:  tPlugin1_sSignature_throughEntry_func2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
throughEntry_func2(CELLIDX idx, int32_t* outval)
{
  ER  retval;
  tPlugin1_sSignature_CB    *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = tPlugin1_sSignature_GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述 */
  }

  retval = cCall_func2( outval );
  return retval;
}

/* #[<ENTRY_FUNC>]# throughEntry_func3
 * name:         throughEntry_func3
 * global_name:  tPlugin1_sSignature_throughEntry_func3
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
throughEntry_func3(CELLIDX idx, struct tag stval)
{
  ER  retval;
  tPlugin1_sSignature_CB    *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = tPlugin1_sSignature_GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述 */
  }

  retval = cCall_func3( stval );
  return retval;
}

/* #[<ENTRY_FUNC>]# throughEntry_func4
 * name:         throughEntry_func4
 * global_name:  tPlugin1_sSignature_throughEntry_func4
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
throughEntry_func4(CELLIDX idx, stTag stval, INT inval)
{
  ER  retval;
  tPlugin1_sSignature_CB    *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = tPlugin1_sSignature_GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述 */
  }

  retval = cCall_func4( stval, inval );
  return retval;
}

/* #[<ENTRY_FUNC>]# throughEntry_func5
 * name:         throughEntry_func5
 * global_name:  tPlugin1_sSignature_throughEntry_func5
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
throughEntry_func5(CELLIDX idx, stTag* stval, INT inval)
{
  ER  retval;
  tPlugin1_sSignature_CB    *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = tPlugin1_sSignature_GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述 */
  }

  retval = cCall_func5( stval, inval );
  return retval;
}

/* #[<ENTRY_FUNC>]# throughEntry_func6
 * name:         throughEntry_func6
 * global_name:  tPlugin1_sSignature_throughEntry_func6
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
throughEntry_func6(CELLIDX idx, int8_t* buf, int32_t sz)
{
  ER  retval;
  tPlugin1_sSignature_CB    *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = tPlugin1_sSignature_GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述 */
  }

  retval = cCall_func6( buf, sz );
  return retval;
}

/* #[<ENTRY_FUNC>]# throughEntry_func7
 * name:         throughEntry_func7
 * global_name:  tPlugin1_sSignature_throughEntry_func7
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
throughEntry_func7(CELLIDX idx, int8_t** buf, int32_t* sz)
{
  ER  retval;
  tPlugin1_sSignature_CB    *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = tPlugin1_sSignature_GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述 */
  }

  retval = cCall_func7( buf, sz );
  return retval;
}

/* #[<ENTRY_FUNC>]# throughEntry_func10
 * name:         throughEntry_func10
 * global_name:  tPlugin1_sSignature_throughEntry_func10
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
throughEntry_func10(CELLIDX idx, const stTag* stval, int32_t a)
{
  ER  retval;
  tPlugin1_sSignature_CB    *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = tPlugin1_sSignature_GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述 */
  }

  retval = cCall_func10( stval, a );
  return retval;
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
