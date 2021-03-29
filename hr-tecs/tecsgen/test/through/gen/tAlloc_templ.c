/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tAlloc_template.c => src/tAlloc.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * n_alloc          int32_t          VAR_n_alloc     
 * n_dealloc        int32_t          VAR_n_dealloc   
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tAlloc_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eA
 * entry port: eA
 * signature:  sAlloc
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eA_alloc
 * name:         eA_alloc
 * global_name:  tAlloc_eA_alloc
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eA_alloc(int32_t sz, void** ptr)
{
}

/* #[<ENTRY_FUNC>]# eA_dealloc
 * name:         eA_dealloc
 * global_name:  tAlloc_eA_dealloc
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eA_dealloc(const void* ptr)
{
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
