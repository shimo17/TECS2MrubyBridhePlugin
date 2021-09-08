/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tTestMain_template.c => src/tTestMain.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * �ƤӸ��ؿ� #_TCPF_#
 * call port: cTECS2MrubyVM signature: sTECS2MrubyVM context:task
 *   void           cTECS2MrubyVM_init( );
 *   mrb_state*     cTECS2MrubyVM_get_mrb( );
 *   void           cTECS2MrubyVM_fin( );
 *   mrb_value*     cTECS2MrubyVM_instance_create( );
 * call port: cBody2 signature: sShimo context:task
 *   void           cBody2_mcall_lcd( const char* x );
 * call port: cBody3 signature: sRyo context:task
 *   char           cBody3_hyoji( );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tTestMain_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eBody
 * entry port: eBody
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eBody_main
 * name:         eBody_main
 * global_name:  tTestMain_eBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBody_main(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	cTECS2MrubyVM_init( );
	
	//cBody2_mcall_lcd( );
	//cBody2_lcd( );
    cBody2_mcall_lcd("5432112345");
    cBody3_hyoji();
	cTECS2MrubyVM_fin( );
	//ev3_lcd_draw_string("171717", 0, 0);

}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
