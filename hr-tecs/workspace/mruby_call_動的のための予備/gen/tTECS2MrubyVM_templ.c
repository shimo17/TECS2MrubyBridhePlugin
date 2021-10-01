/*
 * ���Υե������ tecsgen �ˤ��ƥ�ץ졼�ȤȤ��Ƽ�ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥ��տޤ���Ƥ��ޤ���
 * tecsgen �κƼ¹Ԥˤ���񤭤���Ƥ��ޤ����ᡢ�̾�
 *   gen/tTECS2MrubyVM_template.c => src/tTECS2MrubyVM.c
 * �Τ褦��̾��, �ե�������ѹ����Ƥ��齤�����ޤ�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * °�����������ޥ��� #_CAAM_#
 * irep             const uint8_t*   ATTR_irep       
 * yamashina        mrb_value*       VAR_yamashina   
 * mrb              mrb_state*       VAR_mrb         
 * context          mrbc_context*    VAR_context     
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "tTECS2MrubyVM_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eTECS2MrubyVM
 * entry port: eTECS2MrubyVM
 * signature:  sTECS2MrubyVM
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eTECS2MrubyVM_init
 * name:         eTECS2MrubyVM_init
 * global_name:  tTECS2MrubyVM_eTECS2MrubyVM_init
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTECS2MrubyVM_init(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* ���顼���������ɤ򤳤��˵��Ҥ��ޤ� */
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eTECS2MrubyVM_get_mrb
 * name:         eTECS2MrubyVM_get_mrb
 * global_name:  tTECS2MrubyVM_eTECS2MrubyVM_get_mrb
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
mrb_state*
eTECS2MrubyVM_get_mrb(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* ���顼���������ɤ򤳤��˵��Ҥ��ޤ� */
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eTECS2MrubyVM_fin
 * name:         eTECS2MrubyVM_fin
 * global_name:  tTECS2MrubyVM_eTECS2MrubyVM_fin
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTECS2MrubyVM_fin(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* ���顼���������ɤ򤳤��˵��Ҥ��ޤ� */
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eTECS2MrubyVM_instance_create
 * name:         eTECS2MrubyVM_instance_create
 * global_name:  tTECS2MrubyVM_eTECS2MrubyVM_instance_create
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
mrb_value*
eTECS2MrubyVM_instance_create(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* ���顼���������ɤ򤳤��˵��Ҥ��ޤ� */
	} /* end if VALID_IDX(idx) */

	/* �����˽������Τ򵭽Ҥ��ޤ� #_TEFB_# */

}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
