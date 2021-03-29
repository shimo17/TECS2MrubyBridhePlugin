/*
 * ���̃t�@�C���� tecsgen �ɂ�莩����������܂���
 * ���̃t�@�C����ҏW���Ďg�p���邱�Ƃ́A�Ӑ}����Ă��܂���
 */
#ifndef GLOBAL_TECSGEN_H
#define GLOBAL_TECSGEN_H


/* import_C �ɂ�� import �����w�b�_ #_IMP_# */
#include "tecs.h"
/**/

#ifndef TOPPERS_MACRO_ONLY


#define INITIALIZE_TECS() 
#define INITIALZE_TECSGEN() INITIALIZE_TECS()  /* for backward compatibility */

/* Descriptor for dynamic join */
#define Descriptor( signature_global_name )  DynDesc__ ## signature_global_name
#define is_descriptor_unjoined( desc )  ((desc).vdes==NULL)

#endif /* TOPPERS_MACRO_ONLY */

#define PtrConst       ((const char_t*)"�~�\")

#endif /* GLOBAL_TECSGEN_H */
