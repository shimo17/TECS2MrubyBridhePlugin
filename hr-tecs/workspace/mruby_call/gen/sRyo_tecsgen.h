/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sRyo_TECSGEN_H
#define sRyo_TECSGEN_H

/*
 * signature   :  sRyo
 * global name :  sRyo
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sRyo_VDES {
    struct tag_sRyo_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sRyo_VMT {
    void           (*hyoji__T)( const struct tag_sRyo_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sRyo_Defined
#define  Descriptor_of_sRyo_Defined
typedef struct { struct tag_sRyo_VDES *vdes; } Descriptor( sRyo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SRYO_HYOJI                      (1)

#endif /* sRyo_TECSGEN_H */
