/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef GLOBAL_TECSGEN_H
#define GLOBAL_TECSGEN_H


/* import_C により import されるヘッダ #_IMP_# */
#include "cygwin_tecs.h"
#include "../../../test/cygwin/cygwin_tecs.h"
/**/

#ifndef TOPPERS_MACRO_ONLY

struct tagST {
                int32_t        a;
};
struct $TAG_0 {
                int32_t        a;
                int32_t        b;
};
typedef struct $TAG_0  ST_VAL;
 extern void tTask_CB_initialize();
 extern void tAlloc_CB_initialize();
 extern void tSerialTaskBody_CB_initialize();
 extern void tSingleCellOptimizeCaller_CB_initialize();
 extern void tSingleCellOptimizeCallee_CB_initialize();
 extern void tVMTUselessOptimizeCaller_CB_initialize();
 extern void tVMTUselessOptimizeCallee_CB_initialize();
 extern void tSkeltonUselessOptimizeCaller_CB_initialize();
 extern void tSkeltonUselessOptimizeCallee_CB_initialize();
 extern void tMain_CB_initialize();
 extern void tCPArray_CB_initialize();
 extern void tNCPArray_CB_initialize();
 extern void tSendRecvClnt_CB_initialize();
 extern void tSendRecvServ_CB_initialize();
 extern void tSendRecvClntOmit_CB_initialize();
 extern void tCCP5Caller_CB_initialize();
 extern void tCCP5Callee_CB_initialize();

#define INITIALIZE_TECS() \
 	tTask_CB_initialize();\
 	tAlloc_CB_initialize();\
 	tSerialTaskBody_CB_initialize();\
 	tSingleCellOptimizeCaller_CB_initialize();\
 	tSingleCellOptimizeCallee_CB_initialize();\
 	tVMTUselessOptimizeCaller_CB_initialize();\
 	tVMTUselessOptimizeCallee_CB_initialize();\
 	tSkeltonUselessOptimizeCaller_CB_initialize();\
 	tSkeltonUselessOptimizeCallee_CB_initialize();\
 	tMain_CB_initialize();\
 	tCPArray_CB_initialize();\
 	tNCPArray_CB_initialize();\
 	tSendRecvClnt_CB_initialize();\
 	tSendRecvServ_CB_initialize();\
 	tSendRecvClntOmit_CB_initialize();\
 	tCCP5Caller_CB_initialize();\
 	tCCP5Callee_CB_initialize();\
/* INITIALIZE_TECS terminator */

#define INITIALZE_TECSGEN() INITIALIZE_TECS()  /* for backward compatibility */

/* Descriptor for dynamic join */
#define Descriptor( signature_global_name )  DynDesc__ ## signature_global_name
#define is_descriptor_unjoined( desc )  ((desc).vdes==NULL)

#endif /* TOPPERS_MACRO_ONLY */

#define TASK_STATE_0   ((const int)0)
#define TASK_STATE_1   ((const int)1)

#endif /* GLOBAL_TECSGEN_H */
