/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sReset_TECSGEN_H
#define sReset_TECSGEN_H

/*
 * signature   :  sReset
 * global name :  sReset
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sReset_VDES {
    struct tag_sReset_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sReset_VMT {
    void           (*reset__T)( const struct tag_sReset_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sReset_Defined
#define  Descriptor_of_sReset_Defined
typedef struct { struct tag_sReset_VDES *vdes; } Descriptor( sReset );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SRESET_RESET                    (1)

#endif /* sReset_TECSGEN_H */
