/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef GLOBAL_TECSGEN_H
#define GLOBAL_TECSGEN_H


/* import_C により import されるヘッダ #_IMP_# */
#include "cygwin_tecs.h"
/**/

#ifndef TOPPERS_MACRO_ONLY


#define INITIALIZE_TECS() 
#define INITIALZE_TECSGEN() INITIALIZE_TECS()  /* for backward compatibility */

/* Descriptor for dynamic join */
#define Descriptor( signature_global_name )  DynDesc__ ## signature_global_name
#define is_descriptor_unjoined( desc )  ((desc).vdes==NULL)

#endif /* TOPPERS_MACRO_ONLY */

#define RepeatCount    ((const int32_t)4)
#define A_000          ((const int)0)
#define A_001          ((const int)2)
#define A_002          ((const int)4)
#define A_003          ((const int)8)

#endif /* GLOBAL_TECSGEN_H */
