/*
 * ���̃t�@�C���� tecsgen �ɂ��e���v���[�g�Ƃ��Ď�����������܂���
 * ���̃t�@�C����ҏW���Ďg�p���邱�Ƃ��Ӑ}����Ă��܂���
 * tecsgen �̍Ď��s�ɂ��㏑������Ă��܂����߁A�ʏ�
 *   gen/tCelltype_template.c => src/tCelltype.c
 * �̂悤�ɖ��O, �t�H���_��ύX���Ă���C�����܂�
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ň͂܂ꂽ�R�����g�͕ҏW���Ȃ��ł�������
 * tecsmerge �ɂ��}�[�W�Ɏg�p����܂�
 *
 * �����A�N�Z�X�}�N�� #_CAAM_#
 * StrPtr           char_t*          ATTR_StrPtr     
 * a                int32_t          ATTR_a          
 * b                int32_t          ATTR_b          
 * c                int32_t          ATTR_c          
 *
 * #[</PREAMBLE>]# */

/* �v���g�^�C�v�錾��ϐ��̒�`�������ɏ����܂� #_PAC_# */
#include "tCelltype_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* �󂯌��֐� #_TEPF_# */
/* #[<ENTRY_PORT>]# eEnt
 * entry port: eEnt
 * signature:  sSig
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEnt_func
 * name:         eEnt_func
 * global_name:  tCelltype_eEnt_func
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func(CELLIDX idx, int32_t par)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* �����ɏ����{�̂��L�q���܂� #_TEFB_# */

	return(ercd);
}

/* #[<POSTAMBLE>]#
 *   �����艺�ɔ�󂯌��֐��������܂�
 * #[</POSTAMBLE>]#*/
