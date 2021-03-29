/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cCall signature: sSig2 context:task
 *   ER             cCall_func1( int32_t arg1, int32_t* res );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tPlugin2_sSig2_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eThroughEntry
 * entry port: eThroughEntry
 * signature:  sSig2
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eThroughEntry_func1
 * name:         eThroughEntry_func1
 * global_name:  tPlugin2_sSig2_eThroughEntry_func1
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eThroughEntry_func1(CELLIDX idx, int32_t arg1, int32_t* res)
{
  ER  retval;
  tPlugin2_sSig2_CB    *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = tPlugin2_sSig2_GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述 */
  }

  retval = cCall_func1( arg1, res );
  return retval;
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
