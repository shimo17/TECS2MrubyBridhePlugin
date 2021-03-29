/*
 * ���̃t�@�C���� tecsgen �ɂ�莩����������܂���
 * ���̃t�@�C����ҏW���Ďg�p���邱�Ƃ́A�Ӑ}����Ă��܂���
 */
#ifndef sSig_TECSGEN_H
#define sSig_TECSGEN_H

/*
 * signature   :  sSig
 * global name :  sSig
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �V�O�j�`���f�B�X�N���v�^ #_SD_# */
struct tag_sSig_VDES {
    struct tag_sSig_VMT *VMT;
};

/* �V�O�j�`���֐��e�[�u�� #_SFT_# */
struct tag_sSig_VMT {
    ER             (*func__T)( const struct tag_sSig_VDES *edp, int32_t par );
};

/* �V�O�j�`���f�B�X�N���v�^(���I�����p) #_SDES_# */
#ifndef Descriptor_of_sSig_Defined
#define  Descriptor_of_sSig_Defined
typedef struct { struct tag_sSig_VDES *vdes; } Descriptor( sSig );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIG_FUNC                       (1)

#endif /* sSig_TECSGEN_H */
