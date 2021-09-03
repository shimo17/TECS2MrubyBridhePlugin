/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sTECS2MrubyVM_TECSGEN_H
#define sTECS2MrubyVM_TECSGEN_H

/*
 * signature   :  sTECS2MrubyVM
 * global name :  sTECS2MrubyVM
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sTECS2MrubyVM_VDES {
    struct tag_sTECS2MrubyVM_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sTECS2MrubyVM_VMT {
    void           (*init__T)( const struct tag_sTECS2MrubyVM_VDES *edp );
    mrb_state*     (*get_mrb__T)( const struct tag_sTECS2MrubyVM_VDES *edp );
    void           (*fin__T)( const struct tag_sTECS2MrubyVM_VDES *edp );
    void*          (*instance_create__T)( const struct tag_sTECS2MrubyVM_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sTECS2MrubyVM_Defined
#define  Descriptor_of_sTECS2MrubyVM_Defined
typedef struct { struct tag_sTECS2MrubyVM_VDES *vdes; } Descriptor( sTECS2MrubyVM );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STECS2MRUBYVM_INIT              (1)
#define	FUNCID_STECS2MRUBYVM_GET_MRB           (2)
#define	FUNCID_STECS2MRUBYVM_FIN               (3)
#define	FUNCID_STECS2MRUBYVM_INSTANCE_CREATE   (4)

#endif /* sTECS2MrubyVM_TECSGEN_H */
