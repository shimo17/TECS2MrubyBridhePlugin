/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sShimo_TECSGEN_H
#define sShimo_TECSGEN_H

/*
 * signature   :  sShimo
 * global name :  sShimo
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sShimo_VDES {
    struct tag_sShimo_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sShimo_VMT {
    void           (*mcall_lcd__T)( const struct tag_sShimo_VDES *edp, const char* x );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sShimo_Defined
#define  Descriptor_of_sShimo_Defined
typedef struct { struct tag_sShimo_VDES *vdes; } Descriptor( sShimo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSHIMO_MCALL_LCD                (1)

#endif /* sShimo_TECSGEN_H */
