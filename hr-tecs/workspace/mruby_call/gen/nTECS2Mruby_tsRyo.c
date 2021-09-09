/*
 * ???Υե????? tecsgen ?ˤ???ư????????????
 * ???Υե???????????ƻ?Ѥ??뤳?Ȥϡ??տޤ??????ޤ??? */
/* #[<PREAMBLE>]#
 * #[<...>]# ????#[</...>]# ?ǰϤޤ줿?????Ȥ?Խ????ʤ??Ǥ???????
 * tecsmerge ?ˤ??ޡ????˻?Ѥ?????
 *
 * ?ƤӸ??ؿ?#_TCPF_#
 * call port: cMethodCall signature: sTECS2MrubyVM context:task
 *   void           cMethodCall_init( );
 *   mrb_state*     cMethodCall_get_mrb( );
 *   void           cMethodCall_fin( );
 *   mrb_value*     cMethodCall_instance_create( );
 *
 * #[</PREAMBLE>]# */

/* ?ץ?ȥ????????ѿ????򤳤??˽񤭤ޤ? #_PAC_# */
#include "nTECS2Mruby_tsRyo_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* ???????ؿ?#_TEPF_# */
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
char
eEnt_hyoji(CELLIDX idx)
{
  char  retval;
  CELLCB    *p_cellcb;
  mrb_state *mrb = cMethodCall_get_mrb();
  mrb_value *yamashina = cMethodCall_instance_create( );
  mrb_value saitama = *yamashina;
  if( VALID_IDX( idx ) ){
    p_cellcb = GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述*/
  }

  

  // struct RClass *shimo = mrb_class_get(mrb, "Ryo");
  // mrb_value shimo_value = mrb_obj_value(shimo);  
  // mrb_value  yamashina = mrb_funcall(mrb, shimo_value, "new", 0);  
  mrb_funcall(mrb ,saitama, "hyoji", 0);

}

/* #[<POSTAMBLE>]#
 *   ?????겼????????ؿ?????ޤ?
 * #[</POSTAMBLE>]#*/
