/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef GLOBAL_TECSGEN_H
#define GLOBAL_TECSGEN_H


/* import_C により import されるヘッダ #_IMP_# */
#include "tecs.h"
/**/

#ifndef TOPPERS_MACRO_ONLY


#define INITIALIZE_TECS() 
#define INITIALZE_TECSGEN() INITIALIZE_TECS()  /* for backward compatibility */

/* Descriptor for dynamic join */
#define Descriptor( signature_global_name )  DynDesc__ ## signature_global_name
#define is_descriptor_unjoined( desc )  ((desc).vdes==NULL)

#endif /* TOPPERS_MACRO_ONLY */

#define c_fp           ((const int32_t(*)())(int32_t(*)())0x300)
#define c_fp1          ((const int32_t(**)())(int32_t(**)())0x400)
#define c_fp2          ((const int32_t(**)())0)
#define c_int          ((const int32_t)100)

#endif /* GLOBAL_TECSGEN_H */
