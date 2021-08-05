/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * �ƤӸ��ؿ� #_TCPF_#
 * call port: cMethodCall signature: sTECS2MrubyVM context:task
 *   void           cMethodCall_init( );
 *   mrb_state*     cMethodCall_get_mrb( );
 *   void           cMethodCall_fin( );
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "nTECS2Mruby_tsMcall_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>
#include <mruby/string.h>


#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eEnt
 * entry port: eEnt
 * signature:  sMcall
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEnt_mcall_lcd
 * name:         eEnt_mcall_lcd
 * global_name:  nTECS2Mruby_tsMcall_eEnt_mcall_lcd
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEnt_mcall_lcd(CELLIDX idx)
{
  CELLCB    *p_cellcb;
  mrb_state *mrb = cMethodCall_get_mrb();
  if( VALID_IDX( idx ) ){
    p_cellcb = GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述*/
  }

  
  struct RClass *shimo = mrb_class_obj_get(mrb, "Shimo");
  mrb_value shimo_value = mrb_obj_value(shimo);
  mrb_value  yamashina = mrb_funcall(mrb, shimo_value, "new", 0);
  //mrb_value mcall_lcd_call = 
  mrb_funcall(mrb ,yamashina, "mcall_lcd", 0);
 
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
