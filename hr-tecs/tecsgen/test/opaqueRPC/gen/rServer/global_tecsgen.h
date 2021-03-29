/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef GLOBAL_TECSGEN_H
#define GLOBAL_TECSGEN_H


/* import_C により import されるヘッダ #_IMP_# */
#include "cygwin_tecs.h"
#include "my_setjmp.h"
#include "t_syslog.h"
#include "../../../test/cygwin/cygwin_tecs.h"
#include "tecs_rpc.h"
#include "t_stddef.h"
/**/

#ifndef TOPPERS_MACRO_ONLY

struct stA {
                int8_t         a;
                int32_t        b;
                char_t*        msg;
                int32_t        len;
                int32_t        count;
};
typedef struct stA     STA;
struct stB {
                int8_t         a;
                int32_t        b;
};
typedef struct stB     STB;

#define INITIALIZE_TECS() 
#define INITIALZE_TECSGEN() INITIALIZE_TECS()  /* for backward compatibility */

/* Descriptor for dynamic join */
#define Descriptor( signature_global_name )  DynDesc__ ## signature_global_name
#define is_descriptor_unjoined( desc )  ((desc).vdes==NULL)

#endif /* TOPPERS_MACRO_ONLY */

#define TASK_STATE_0   ((const int)0)
#define TASK_STATE_1   ((const int)1)
#define TDR_SOP_MAGIC1 ((const uint32_t)0x672A)
#define TDR_SOP_MAGIC2 ((const uint32_t)0x561E)
#define TDR_EOP_MAGIC1 ((const uint32_t)0x5A3C)
#define TDR_EOP_MAGIC2 ((const uint32_t)0x6D5E)
#define TDR_SHSOP_MAGIC1 ((const uint32_t)0x98D5)
#define TDR_SHSOP_MAGIC2 ((const uint32_t)0xA9E1)
#define TDR_SHEOP_MAGIC1 ((const uint32_t)0xB5C3)
#define TDR_SHEOP_MAGIC2 ((const uint32_t)0x92A1)
#define RPC_CHANNEL_MAN_SOP_MAGIC ((const uint16_t)0x3141)
#define RPC_CHANNEL_MAN_EOP_MAGIC ((const uint16_t)0x2718)
#define RPCSTATE_CLIENT_GET_SEM ((const int16_t)1)
#define RPCSTATE_CLIENT_SEND_SOP ((const int16_t)2)
#define RPCSTATE_CLIENT_SEND_BODY ((const int16_t)3)
#define RPCSTATE_CLIENT_SEND_EOP ((const int16_t)4)
#define RPCSTATE_CLIENT_EXEC ((const int16_t)5)
#define RPCSTATE_CLIENT_RECV_SOP ((const int16_t)6)
#define RPCSTATE_CLIENT_RECV_BODY ((const int16_t)7)
#define RPCSTATE_CLIENT_RECV_EOP ((const int16_t)8)
#define RPCSTATE_CLIENT_RELEASE_SEM ((const int16_t)9)
#define RPCSTATE_SERVER_GET_SEM ((const int16_t)11)
#define RPCSTATE_SERVER_RECV_SOP ((const int16_t)12)
#define RPCSTATE_SERVER_RECV_BODY ((const int16_t)13)
#define RPCSTATE_SERVER_RECV_EOP ((const int16_t)14)
#define RPCSTATE_SERVER_EXEC ((const int16_t)15)
#define RPCSTATE_SERVER_SEND_SOP ((const int16_t)16)
#define RPCSTATE_SERVER_SEND_BODY ((const int16_t)17)
#define RPCSTATE_SERVER_SEND_EOP ((const int16_t)18)
#define RPCSTATE_SERVER_RELEASE_SEM ((const int16_t)19)
#define SOCKET_DEFAULT_PORT_NO ((const uint16_t)8931)
#define ArraySize      ((const int32_t)64)
#define ArraySize2     ((const int32_t)4)
#define ArraySizeSTA   ((const int32_t)2)
#define MAX_LEN        ((const int32_t)32)
#define TECSTypeKind_BoolType ((const int8_t)1)
#define TECSTypeKind_IntType ((const int8_t)2)
#define TECSTypeKind_FloatType ((const int8_t)3)
#define TECSTypeKind_PtrType ((const int8_t)4)
#define TECSTypeKind_ArrayType ((const int8_t)5)
#define TECSTypeKind_DefinedType ((const int8_t)6)
#define TECSTypeKind_StructType ((const int8_t)7)
#define TECSTypeKind_EnumType ((const int8_t)8)
#define TECSTypeKind_VoidType ((const int8_t)9)
#define TECSTypeKind_DescriptorType ((const int8_t)10)
#define PARAM_DIR_IN   ((const int8_t)1)
#define PARAM_DIR_OUT  ((const int8_t)2)
#define PARAM_DIR_INOUT ((const int8_t)3)
#define PARAM_DIR_SEND ((const int8_t)4)
#define PARAM_DIR_RECEIVE ((const int8_t)5)
#define DECLTYPE_STMEMBER ((const int8_t)1)
#define DECLTYPE_ATTR  ((const int8_t)2)
#define DECLTYPE_VAR   ((const int8_t)3)
#define CALL_PLACE_NON ((const int8_t)1)
#define CALL_PLACE_INIB_DES ((const int8_t)2)
#define CALL_PLACE_CB_DES ((const int8_t)3)
#define CALL_PLACE_INIB_IDX ((const int8_t)4)
#define CALL_PLACE_CB_IDX ((const int8_t)5)

#endif /* GLOBAL_TECSGEN_H */
