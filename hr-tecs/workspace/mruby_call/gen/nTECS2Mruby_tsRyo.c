/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cMethodCall signature: sTECS2MrubyVM context:task
 *   void           cMethodCall_init( );
 *   mrb_state*     cMethodCall_get_mrb( );
 *   void           cMethodCall_fin( );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "nTECS2Mruby_tsRyo_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eEnt
 * entry port: eEnt
 * signature:  sRyo
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEnt_hyoji
 * name:         eEnt_hyoji
 * global_name:  nTECS2Mruby_tsRyo_eEnt_hyoji
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEnt_hyoji(CELLIDX idx)
{
  CELLCB    *p_cellcb;
  mrb_state *mrb = cMethodCall_get_mrb();
  if( VALID_IDX( idx ) ){
    p_cellcb = GET_CELLCB(idx);
  }else{
     /* ��������弱�������潟�若��������������荐�菴�*/
  }

  

  struct RClass *shimo = mrb_class_get(mrb, "Ryo");
  //mrb_value shimo_value = mrb_obj_value(shimo);  
  //mrb_value  yamashina = mrb_funcall(mrb, shimo_value, "new", 0);  
  struct RClass *yamashina = mrb_class_new(mrb, shimo);
  mrb_value shimo_value = mrb_obj_value(yamashina);
  mrb_funcall(mrb ,shimo_value, "hyoji", 0);
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
