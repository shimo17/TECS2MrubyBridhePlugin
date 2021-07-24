/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sMcall_TECSGEN_H
#define sMcall_TECSGEN_H

/*
 * signature   :  sMcall
 * global name :  sMcall
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sMcall_VDES {
    struct tag_sMcall_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sMcall_VMT {
    void           (*mcall_lcd__T)( const struct tag_sMcall_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sMcall_Defined
#define  Descriptor_of_sMcall_Defined
typedef struct { struct tag_sMcall_VDES *vdes; } Descriptor( sMcall );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SMCALL_MCALL_LCD                (1)

#endif /* sMcall_TECSGEN_H */
