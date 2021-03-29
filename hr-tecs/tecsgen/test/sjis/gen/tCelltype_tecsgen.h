/*
 * ���̃t�@�C���� tecsgen �ɂ�莩����������܂���
 * ���̃t�@�C����ҏW���Ďg�p���邱�Ƃ́A�Ӑ}����Ă��܂���
 */
#ifndef tCelltype_TECSGEN_H
#define tCelltype_TECSGEN_H

/*
 * celltype          :  tCelltype
 * global name       :  tCelltype
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  no
 */

/* �O���[�o���w�b�_ #_IGH_# */
#include "global_tecsgen.h"

/* �V�O�j�`���w�b�_ #_ISH_# */
#include "sSig_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* �Z�� INIB �^�錾 #_CIP_# */
typedef const struct tag_tCelltype_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        StrPtr;
    int32_t        a;
    int32_t        b;
    int32_t        c;
}  tCelltype_INIB;

/* CB �͑��݂��Ȃ��BINIB �� CB �̑���Ɏg�p���邽�߂� define #_DCI_# */
#define tCelltype_CB_tab           tCelltype_INIB_tab
#define tCelltype_SINGLE_CELL_CB   tCelltype_SINGLE_CELL_INIB
#define tCelltype_CB               tCelltype_INIB
#define tag_tCelltype_CB           tag_tCelltype_INIB

extern tCelltype_CB  tCelltype_CB_tab[];

/* �Z���^�C�v��IDX�^ #_CTIX_# */
typedef const struct tag_tCelltype_INIB *tCelltype_IDX;

/* �󂯌��֐��v���g�^�C�v�錾 #_EPP_# */
/* sSig */
ER           tCelltype_eEnt_func(tCelltype_IDX idx, int32_t par);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCelltype_ID_BASE           (1)  /* ID �̃x�[�X  #_NIDB_# */
#define tCelltype_N_CELL            (1)  /* �Z���̌�  #_NCEL_# */

/* IDX�̐������`�F�b�N�}�N�� #_CVI_# */
#define tCelltype_VALID_IDX(IDX) (1)


/* �Z��CB�𓾂�}�N�� #_GCB_# */
#define tCelltype_GET_CELLCB(idx) (idx)

/* �����A�N�Z�X�}�N�� #_AAM_# */
#define tCelltype_ATTR_StrPtr( p_that )	((p_that)->StrPtr)
#define tCelltype_ATTR_a( p_that )	((p_that)->a)
#define tCelltype_ATTR_b( p_that )	((p_that)->b)
#define tCelltype_ATTR_c( p_that )	((p_that)->c)

#define tCelltype_GET_StrPtr(p_that)	((p_that)->StrPtr)
#define tCelltype_GET_a(p_that)	((p_that)->a)
#define tCelltype_GET_b(p_that)	((p_that)->b)
#define tCelltype_GET_c(p_that)	((p_that)->c)



#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* �󂯌��X�P���g���֐��v���g�^�C�v�錾�iVMT�s�v�œK���ɂ��Q�Ƃ�����́j #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�̐������`�F�b�N�}�N���i�Z�k�`�j #_CVIA_# */
#define VALID_IDX(IDX)  tCelltype_VALID_IDX(IDX)


/* �Z��CB�𓾂�}�N��(�Z�k�`) #_GCBA_# */
#define GET_CELLCB(idx)  tCelltype_GET_CELLCB(idx)

/* CELLCB �^(�Z�k�`) #_CCT_# */
#define CELLCB	tCelltype_CB

/* �Z���^�C�v��IDX�^(�Z�k�`) #_CTIXA_# */
#define CELLIDX	tCelltype_IDX


/* �����A�N�Z�X�}�N��(�Z�k�`) #_AAMA_# */
#define ATTR_StrPtr          tCelltype_ATTR_StrPtr( p_cellcb )
#define ATTR_a               tCelltype_ATTR_a( p_cellcb )
#define ATTR_b               tCelltype_ATTR_b( p_cellcb )
#define ATTR_c               tCelltype_ATTR_c( p_cellcb )





/* �󂯌��֐��}�N���i�Z�k�`�j #_EPM_# */
#define eEnt_func        tCelltype_eEnt_func

/* �C�e���[�^�R�[�h (FOREACH_CELL)�̐��� #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCelltype_N_CELL; (i)++ ){ \
       //(p_cb) = &tCelltype_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB �������}�N�� #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCelltype_TECSGENH */
