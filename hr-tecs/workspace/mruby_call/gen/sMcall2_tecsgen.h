/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sMcall2_TECSGEN_H
#define sMcall2_TECSGEN_H

/*
 * signature   :  sMcall2
 * global name :  sMcall2
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sMcall2_VDES {
    struct tag_sMcall2_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sMcall2_VMT {
    void           (*hyoji__T)( const struct tag_sMcall2_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sMcall2_Defined
#define  Descriptor_of_sMcall2_Defined
typedef struct { struct tag_sMcall2_VDES *vdes; } Descriptor( sMcall2 );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SMCALL2_HYOJI                   (1)

#endif /* sMcall2_TECSGEN_H */
