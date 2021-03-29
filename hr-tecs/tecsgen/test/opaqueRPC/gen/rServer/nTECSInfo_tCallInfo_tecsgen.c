/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tCallInfo_tecsgen.h"
#include "nTECSInfo_tCallInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eCallInfo */
struct tag_nTECSInfo_tCallInfo_eCallInfo_DES {
    const struct tag_nTECSInfo_sCallInfo_VMT *vmt;
    tCallInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eCallInfo */
ER             nTECSInfo_tCallInfo_eCallInfo_getName_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    return nTECSInfo_tCallInfo_eCallInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tCallInfo_eCallInfo_getNameLength_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getNameLength( lepd->idx, len );
}
void           nTECSInfo_tCallInfo_eCallInfo_getSignatureInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, Descriptor( nTECSInfo_sSignatureInfo )* desc)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getSignatureInfo( lepd->idx, desc );
}
void           nTECSInfo_tCallInfo_eCallInfo_getArraySize_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, uint32_t* array_size)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getArraySize( lepd->idx, array_size );
}
void           nTECSInfo_tCallInfo_eCallInfo_getSpecifierInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, bool_t* b_optional, bool_t* b_dynamic, bool_t* b_ref_desc, bool_t* b_omit)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getSpecifierInfo( lepd->idx, b_optional, b_dynamic, b_ref_desc, b_omit );
}
void           nTECSInfo_tCallInfo_eCallInfo_getInternalInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, bool_t* b_allocator_port, bool_t* b_require_port)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getInternalInfo( lepd->idx, b_allocator_port, b_require_port );
}
void           nTECSInfo_tCallInfo_eCallInfo_getLocationInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, uint32_t* offset, uint8_t* place)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getLocationInfo( lepd->idx, offset, place );
}
void           nTECSInfo_tCallInfo_eCallInfo_getOptimizeInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, bool_t* b_VMT_useless, bool_t* b_skelton_useless, bool_t* b_cell_unique)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getOptimizeInfo( lepd->idx, b_VMT_useless, b_skelton_useless, b_cell_unique );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eCallInfo */
const struct tag_nTECSInfo_sCallInfo_VMT nTECSInfo_tCallInfo_eCallInfo_MT_ = {
    nTECSInfo_tCallInfo_eCallInfo_getName_skel,
    nTECSInfo_tCallInfo_eCallInfo_getNameLength_skel,
    nTECSInfo_tCallInfo_eCallInfo_getSignatureInfo_skel,
    nTECSInfo_tCallInfo_eCallInfo_getArraySize_skel,
    nTECSInfo_tCallInfo_eCallInfo_getSpecifierInfo_skel,
    nTECSInfo_tCallInfo_eCallInfo_getInternalInfo_skel,
    nTECSInfo_tCallInfo_eCallInfo_getLocationInfo_skel,
    nTECSInfo_tCallInfo_eCallInfo_getOptimizeInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sTaskExceptionBodySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sChannelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sSysLogSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sUnmarshalerMainSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sServerChannelOpenerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sSysLogSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sSysLogSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sSimpleSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sSocketClientOpenerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sRPCErrorHandlerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sServerChannelOpenerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sSimpleSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sSysLogSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sTDRSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sSemaphoreSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sRPCErrorHandlerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sSimpleSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sTDRSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sRPCErrorHandlerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sPPAllocatorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rServer_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des;

/* 呼び口配列 #_CPA_# */




























































































































































/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tCallInfo_INIB nTECSInfo_tCallInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tCallInfo_CB_tab[0]:  tTask_cBodyCallInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cBody",                                 /* name */
        tTask_cBody__offset,                     /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTask_cBody__place,                      /* place */
        tTask_cBody__b_VMT_useless,              /* b_VMT_useless */
        tTask_cBody__b_skelton_useless,          /* b_skelton_useless */
        tTask_cBody__b_cell_unique,              /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[1]:  tTask_cExceptionBodyCallInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sTaskExceptionBodySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cExceptionBody",                        /* name */
        tTask_cExceptionBody__offset,            /* offset */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTask_cExceptionBody__place,             /* place */
        tTask_cExceptionBody__b_VMT_useless,     /* b_VMT_useless */
        tTask_cExceptionBody__b_skelton_useless, /* b_skelton_useless */
        tTask_cExceptionBody__b_cell_unique,     /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[2]:  tNBOTDR_cChannelCallInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sChannelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cChannel",                              /* name */
        tNBOTDR_cChannel__offset,                /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tNBOTDR_cChannel__place,                 /* place */
        tNBOTDR_cChannel__b_VMT_useless,         /* b_VMT_useless */
        tNBOTDR_cChannel__b_skelton_useless,     /* b_skelton_useless */
        tNBOTDR_cChannel__b_cell_unique,         /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[3]:  tNBOTDR__require_call_port_tSysLog_eSysLogCallInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sSysLogSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "_require_call_port_tSysLog_eSysLog",    /* name */
        tNBOTDR__require_call_port_tSysLog_eSysLog__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        true,                                    /* b_require_port */
        tNBOTDR__require_call_port_tSysLog_eSysLog__place, /* place */
        tNBOTDR__require_call_port_tSysLog_eSysLog__b_VMT_useless, /* b_VMT_useless */
        tNBOTDR__require_call_port_tSysLog_eSysLog__b_skelton_useless, /* b_skelton_useless */
        tNBOTDR__require_call_port_tSysLog_eSysLog__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[4]:  tRPCDedicatedTaskMainWithOpener_cMainCallInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sUnmarshalerMainSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cMain",                                 /* name */
        tRPCDedicatedTaskMainWithOpener_cMain__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tRPCDedicatedTaskMainWithOpener_cMain__place, /* place */
        tRPCDedicatedTaskMainWithOpener_cMain__b_VMT_useless, /* b_VMT_useless */
        tRPCDedicatedTaskMainWithOpener_cMain__b_skelton_useless, /* b_skelton_useless */
        tRPCDedicatedTaskMainWithOpener_cMain__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[5]:  tRPCDedicatedTaskMainWithOpener_cOpenerCallInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sServerChannelOpenerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cOpener",                               /* name */
        tRPCDedicatedTaskMainWithOpener_cOpener__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tRPCDedicatedTaskMainWithOpener_cOpener__place, /* place */
        tRPCDedicatedTaskMainWithOpener_cOpener__b_VMT_useless, /* b_VMT_useless */
        tRPCDedicatedTaskMainWithOpener_cOpener__b_skelton_useless, /* b_skelton_useless */
        tRPCDedicatedTaskMainWithOpener_cOpener__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[6]:  tRPCDedicatedTaskMainWithOpener__require_call_port_tKernel_eKernelCallInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "_require_call_port_tKernel_eKernel",    /* name */
        tRPCDedicatedTaskMainWithOpener__require_call_port_tKernel_eKernel__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        true,                                    /* b_require_port */
        tRPCDedicatedTaskMainWithOpener__require_call_port_tKernel_eKernel__place, /* place */
        tRPCDedicatedTaskMainWithOpener__require_call_port_tKernel_eKernel__b_VMT_useless, /* b_VMT_useless */
        tRPCDedicatedTaskMainWithOpener__require_call_port_tKernel_eKernel__b_skelton_useless, /* b_skelton_useless */
        tRPCDedicatedTaskMainWithOpener__require_call_port_tKernel_eKernel__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[7]:  tSimpleServer__require_call_port_tSysLog_eSysLogCallInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sSysLogSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "_require_call_port_tSysLog_eSysLog",    /* name */
        tSimpleServer__require_call_port_tSysLog_eSysLog__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        true,                                    /* b_require_port */
        tSimpleServer__require_call_port_tSysLog_eSysLog__place, /* place */
        tSimpleServer__require_call_port_tSysLog_eSysLog__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer__require_call_port_tSysLog_eSysLog__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer__require_call_port_tSysLog_eSysLog__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[8]:  tSimpleServer_eEnt_func21_aCallInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func21_a",                         /* name */
        tSimpleServer_eEnt_func21_a__offset,     /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func21_a__place,      /* place */
        tSimpleServer_eEnt_func21_a__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func21_a__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func21_a__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[9]:  tSimpleServer_eEnt_func22_staCallInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func22_sta",                       /* name */
        tSimpleServer_eEnt_func22_sta__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func22_sta__place,    /* place */
        tSimpleServer_eEnt_func22_sta__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func22_sta__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func22_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[10]:  tSimpleServer_eEnt_func23_strCallInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func23_str",                       /* name */
        tSimpleServer_eEnt_func23_str__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func23_str__place,    /* place */
        tSimpleServer_eEnt_func23_str__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func23_str__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func23_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[11]:  tSimpleServer_eEnt_func24_msgCallInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func24_msg",                       /* name */
        tSimpleServer_eEnt_func24_msg__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func24_msg__place,    /* place */
        tSimpleServer_eEnt_func24_msg__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func24_msg__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func24_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[12]:  tSimpleServer_eEnt_func25_msgCallInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func25_msg",                       /* name */
        tSimpleServer_eEnt_func25_msg__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func25_msg__place,    /* place */
        tSimpleServer_eEnt_func25_msg__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func25_msg__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func25_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[13]:  tSimpleServer_eEnt_func26_staCallInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func26_sta",                       /* name */
        tSimpleServer_eEnt_func26_sta__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func26_sta__place,    /* place */
        tSimpleServer_eEnt_func26_sta__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func26_sta__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func26_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[14]:  tSimpleServer_eEnt_func27_array2CallInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func27_array2",                    /* name */
        tSimpleServer_eEnt_func27_array2__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func27_array2__place, /* place */
        tSimpleServer_eEnt_func27_array2__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func27_array2__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func27_array2__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[15]:  tSimpleServer_eEnt_func31_aCallInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func31_a",                         /* name */
        tSimpleServer_eEnt_func31_a__offset,     /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func31_a__place,      /* place */
        tSimpleServer_eEnt_func31_a__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func31_a__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func31_a__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[16]:  tSimpleServer_eEnt_func32_staCallInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func32_sta",                       /* name */
        tSimpleServer_eEnt_func32_sta__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func32_sta__place,    /* place */
        tSimpleServer_eEnt_func32_sta__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func32_sta__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func32_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[17]:  tSimpleServer_eEnt_func33_strCallInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func33_str",                       /* name */
        tSimpleServer_eEnt_func33_str__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func33_str__place,    /* place */
        tSimpleServer_eEnt_func33_str__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func33_str__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func33_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[18]:  tSimpleServer_eEnt_func34_msgCallInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func34_msg",                       /* name */
        tSimpleServer_eEnt_func34_msg__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func34_msg__place,    /* place */
        tSimpleServer_eEnt_func34_msg__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func34_msg__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func34_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[19]:  tSimpleServer_eEnt_func35_msgCallInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func35_msg",                       /* name */
        tSimpleServer_eEnt_func35_msg__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func35_msg__place,    /* place */
        tSimpleServer_eEnt_func35_msg__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func35_msg__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func35_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[20]:  tSimpleServer_eEnt_func36_staCallInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func36_sta",                       /* name */
        tSimpleServer_eEnt_func36_sta__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func36_sta__place,    /* place */
        tSimpleServer_eEnt_func36_sta__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func36_sta__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func36_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[21]:  tSimpleServer_eEnt_func37_staCallInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func37_sta",                       /* name */
        tSimpleServer_eEnt_func37_sta__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func37_sta__place,    /* place */
        tSimpleServer_eEnt_func37_sta__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func37_sta__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func37_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[22]:  tSimpleServer_eEnt_func38_array2CallInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func38_array2",                    /* name */
        tSimpleServer_eEnt_func38_array2__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func38_array2__place, /* place */
        tSimpleServer_eEnt_func38_array2__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func38_array2__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func38_array2__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[23]:  tSimpleServer_eEnt_func39_arrayStCallInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func39_arraySt",                   /* name */
        tSimpleServer_eEnt_func39_arraySt__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func39_arraySt__place, /* place */
        tSimpleServer_eEnt_func39_arraySt__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func39_arraySt__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func39_arraySt__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[24]:  tSimpleServer_eEnt_func63_spCallInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func63_sp",                        /* name */
        tSimpleServer_eEnt_func63_sp__offset,    /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func63_sp__place,     /* place */
        tSimpleServer_eEnt_func63_sp__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func63_sp__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func63_sp__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[25]:  tSimpleServer_eEnt_func64_rpCallInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func64_rp",                        /* name */
        tSimpleServer_eEnt_func64_rp__offset,    /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func64_rp__place,     /* place */
        tSimpleServer_eEnt_func64_rp__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func64_rp__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func64_rp__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[26]:  tSimpleServer_eEnt_func70_staCallInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func70_sta",                       /* name */
        tSimpleServer_eEnt_func70_sta__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func70_sta__place,    /* place */
        tSimpleServer_eEnt_func70_sta__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func70_sta__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func70_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[27]:  tSimpleServer_eEnt_func71_strCallInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func71_str",                       /* name */
        tSimpleServer_eEnt_func71_str__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func71_str__place,    /* place */
        tSimpleServer_eEnt_func71_str__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func71_str__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func71_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[28]:  tSimpleServer_eEnt_func72_staCallInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func72_sta",                       /* name */
        tSimpleServer_eEnt_func72_sta__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func72_sta__place,    /* place */
        tSimpleServer_eEnt_func72_sta__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func72_sta__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func72_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[29]:  tSimpleServer_eEnt_func73_strCallInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eEnt_func73_str",                       /* name */
        tSimpleServer_eEnt_func73_str__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleServer_eEnt_func73_str__place,    /* place */
        tSimpleServer_eEnt_func73_str__b_VMT_useless, /* b_VMT_useless */
        tSimpleServer_eEnt_func73_str__b_skelton_useless, /* b_skelton_useless */
        tSimpleServer_eEnt_func73_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[30]:  tSimpleClient__require_call_port_tSysLog_eSysLogCallInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sSysLogSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "_require_call_port_tSysLog_eSysLog",    /* name */
        tSimpleClient__require_call_port_tSysLog_eSysLog__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        true,                                    /* b_require_port */
        tSimpleClient__require_call_port_tSysLog_eSysLog__place, /* place */
        tSimpleClient__require_call_port_tSysLog_eSysLog__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient__require_call_port_tSysLog_eSysLog__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient__require_call_port_tSysLog_eSysLog__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[31]:  tSimpleClient_cCallCallInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sSimpleSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall",                                 /* name */
        tSimpleClient_cCall__offset,             /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall__place,              /* place */
        tSimpleClient_cCall__b_VMT_useless,      /* b_VMT_useless */
        tSimpleClient_cCall__b_skelton_useless,  /* b_skelton_useless */
        tSimpleClient_cCall__b_cell_unique,      /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[32]:  tSimpleClient_cOpenerCallInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sSocketClientOpenerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cOpener",                               /* name */
        tSimpleClient_cOpener__offset,           /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cOpener__place,            /* place */
        tSimpleClient_cOpener__b_VMT_useless,    /* b_VMT_useless */
        tSimpleClient_cOpener__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cOpener__b_cell_unique,    /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[33]:  tSimpleClient_cCall_func21_aCallInfo id=34 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func21_a",                        /* name */
        tSimpleClient_cCall_func21_a__offset,    /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func21_a__place,     /* place */
        tSimpleClient_cCall_func21_a__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func21_a__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func21_a__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[34]:  tSimpleClient_cCall_func22_staCallInfo id=35 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func22_sta",                      /* name */
        tSimpleClient_cCall_func22_sta__offset,  /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func22_sta__place,   /* place */
        tSimpleClient_cCall_func22_sta__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func22_sta__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func22_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[35]:  tSimpleClient_cCall_func23_strCallInfo id=36 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func23_str",                      /* name */
        tSimpleClient_cCall_func23_str__offset,  /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func23_str__place,   /* place */
        tSimpleClient_cCall_func23_str__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func23_str__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func23_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[36]:  tSimpleClient_cCall_func24_msgCallInfo id=37 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func24_msg",                      /* name */
        tSimpleClient_cCall_func24_msg__offset,  /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func24_msg__place,   /* place */
        tSimpleClient_cCall_func24_msg__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func24_msg__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func24_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[37]:  tSimpleClient_cCall_func25_msgCallInfo id=38 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func25_msg",                      /* name */
        tSimpleClient_cCall_func25_msg__offset,  /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func25_msg__place,   /* place */
        tSimpleClient_cCall_func25_msg__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func25_msg__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func25_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[38]:  tSimpleClient_cCall_func26_staCallInfo id=39 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func26_sta",                      /* name */
        tSimpleClient_cCall_func26_sta__offset,  /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func26_sta__place,   /* place */
        tSimpleClient_cCall_func26_sta__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func26_sta__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func26_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[39]:  tSimpleClient_cCall_func27_array2CallInfo id=40 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func27_array2",                   /* name */
        tSimpleClient_cCall_func27_array2__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func27_array2__place, /* place */
        tSimpleClient_cCall_func27_array2__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func27_array2__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func27_array2__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[40]:  tSimpleClient_cCall_func31_aCallInfo id=41 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func31_a",                        /* name */
        tSimpleClient_cCall_func31_a__offset,    /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func31_a__place,     /* place */
        tSimpleClient_cCall_func31_a__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func31_a__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func31_a__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[41]:  tSimpleClient_cCall_func32_staCallInfo id=42 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func32_sta",                      /* name */
        tSimpleClient_cCall_func32_sta__offset,  /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func32_sta__place,   /* place */
        tSimpleClient_cCall_func32_sta__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func32_sta__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func32_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[42]:  tSimpleClient_cCall_func33_strCallInfo id=43 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func33_str",                      /* name */
        tSimpleClient_cCall_func33_str__offset,  /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func33_str__place,   /* place */
        tSimpleClient_cCall_func33_str__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func33_str__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func33_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[43]:  tSimpleClient_cCall_func34_msgCallInfo id=44 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func34_msg",                      /* name */
        tSimpleClient_cCall_func34_msg__offset,  /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func34_msg__place,   /* place */
        tSimpleClient_cCall_func34_msg__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func34_msg__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func34_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[44]:  tSimpleClient_cCall_func35_msgCallInfo id=45 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func35_msg",                      /* name */
        tSimpleClient_cCall_func35_msg__offset,  /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func35_msg__place,   /* place */
        tSimpleClient_cCall_func35_msg__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func35_msg__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func35_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[45]:  tSimpleClient_cCall_func36_staCallInfo id=46 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func36_sta",                      /* name */
        tSimpleClient_cCall_func36_sta__offset,  /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func36_sta__place,   /* place */
        tSimpleClient_cCall_func36_sta__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func36_sta__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func36_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[46]:  tSimpleClient_cCall_func37_staCallInfo id=47 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func37_sta",                      /* name */
        tSimpleClient_cCall_func37_sta__offset,  /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func37_sta__place,   /* place */
        tSimpleClient_cCall_func37_sta__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func37_sta__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func37_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[47]:  tSimpleClient_cCall_func38_array2CallInfo id=48 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func38_array2",                   /* name */
        tSimpleClient_cCall_func38_array2__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func38_array2__place, /* place */
        tSimpleClient_cCall_func38_array2__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func38_array2__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func38_array2__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[48]:  tSimpleClient_cCall_func39_arrayStCallInfo id=49 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func39_arraySt",                  /* name */
        tSimpleClient_cCall_func39_arraySt__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func39_arraySt__place, /* place */
        tSimpleClient_cCall_func39_arraySt__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func39_arraySt__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func39_arraySt__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[49]:  tSimpleClient_cCall_func63_spCallInfo id=50 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func63_sp",                       /* name */
        tSimpleClient_cCall_func63_sp__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func63_sp__place,    /* place */
        tSimpleClient_cCall_func63_sp__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func63_sp__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func63_sp__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[50]:  tSimpleClient_cCall_func64_rpCallInfo id=51 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func64_rp",                       /* name */
        tSimpleClient_cCall_func64_rp__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func64_rp__place,    /* place */
        tSimpleClient_cCall_func64_rp__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func64_rp__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func64_rp__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[51]:  tSimpleClient_cCall_func70_staCallInfo id=52 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func70_sta",                      /* name */
        tSimpleClient_cCall_func70_sta__offset,  /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func70_sta__place,   /* place */
        tSimpleClient_cCall_func70_sta__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func70_sta__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func70_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[52]:  tSimpleClient_cCall_func71_strCallInfo id=53 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func71_str",                      /* name */
        tSimpleClient_cCall_func71_str__offset,  /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func71_str__place,   /* place */
        tSimpleClient_cCall_func71_str__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func71_str__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func71_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[53]:  tSimpleClient_cCall_func72_staCallInfo id=54 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func72_sta",                      /* name */
        tSimpleClient_cCall_func72_sta__offset,  /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func72_sta__place,   /* place */
        tSimpleClient_cCall_func72_sta__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func72_sta__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func72_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[54]:  tSimpleClient_cCall_func73_strCallInfo id=55 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func73_str",                      /* name */
        tSimpleClient_cCall_func73_str__offset,  /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tSimpleClient_cCall_func73_str__place,   /* place */
        tSimpleClient_cCall_func73_str__b_VMT_useless, /* b_VMT_useless */
        tSimpleClient_cCall_func73_str__b_skelton_useless, /* b_skelton_useless */
        tSimpleClient_cCall_func73_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[55]:  tClientRPCErrorHandler_cHandlerCallInfo id=56 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sRPCErrorHandlerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cHandler",                              /* name */
        tClientRPCErrorHandler_cHandler__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tClientRPCErrorHandler_cHandler__place,  /* place */
        tClientRPCErrorHandler_cHandler__b_VMT_useless, /* b_VMT_useless */
        tClientRPCErrorHandler_cHandler__b_skelton_useless, /* b_skelton_useless */
        tClientRPCErrorHandler_cHandler__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[56]:  tServerRPCErrorHandler_cOpenerCallInfo id=57 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sServerChannelOpenerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cOpener",                               /* name */
        tServerRPCErrorHandler_cOpener__offset,  /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tServerRPCErrorHandler_cOpener__place,   /* place */
        tServerRPCErrorHandler_cOpener__b_VMT_useless, /* b_VMT_useless */
        tServerRPCErrorHandler_cOpener__b_skelton_useless, /* b_skelton_useless */
        tServerRPCErrorHandler_cOpener__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[57]:  tTracePlugin_sSimple_cCallCallInfo id=58 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sSimpleSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall",                                 /* name */
        tTracePlugin_sSimple_cCall__offset,      /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall__place,       /* place */
        tTracePlugin_sSimple_cCall__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[58]:  tTracePlugin_sSimple__require_call_port_tSysLog_eSysLogCallInfo id=59 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sSysLogSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "_require_call_port_tSysLog_eSysLog",    /* name */
        tTracePlugin_sSimple__require_call_port_tSysLog_eSysLog__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        true,                                    /* b_require_port */
        tTracePlugin_sSimple__require_call_port_tSysLog_eSysLog__place, /* place */
        tTracePlugin_sSimple__require_call_port_tSysLog_eSysLog__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple__require_call_port_tSysLog_eSysLog__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple__require_call_port_tSysLog_eSysLog__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[59]:  tTracePlugin_sSimple__require_call_port_tKernel_eKernelCallInfo id=60 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "_require_call_port_tKernel_eKernel",    /* name */
        tTracePlugin_sSimple__require_call_port_tKernel_eKernel__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        true,                                    /* b_require_port */
        tTracePlugin_sSimple__require_call_port_tKernel_eKernel__place, /* place */
        tTracePlugin_sSimple__require_call_port_tKernel_eKernel__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple__require_call_port_tKernel_eKernel__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple__require_call_port_tKernel_eKernel__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[60]:  tTracePlugin_sSimple_eThroughEntry_func21_aCallInfo id=61 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func21_a",                /* name */
        tTracePlugin_sSimple_eThroughEntry_func21_a__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func21_a__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func21_a__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func21_a__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func21_a__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[61]:  tTracePlugin_sSimple_eThroughEntry_func22_staCallInfo id=62 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func22_sta",              /* name */
        tTracePlugin_sSimple_eThroughEntry_func22_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func22_sta__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func22_sta__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func22_sta__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func22_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[62]:  tTracePlugin_sSimple_eThroughEntry_func23_strCallInfo id=63 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func23_str",              /* name */
        tTracePlugin_sSimple_eThroughEntry_func23_str__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func23_str__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func23_str__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func23_str__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func23_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[63]:  tTracePlugin_sSimple_eThroughEntry_func24_msgCallInfo id=64 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func24_msg",              /* name */
        tTracePlugin_sSimple_eThroughEntry_func24_msg__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func24_msg__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func24_msg__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func24_msg__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func24_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[64]:  tTracePlugin_sSimple_eThroughEntry_func25_msgCallInfo id=65 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func25_msg",              /* name */
        tTracePlugin_sSimple_eThroughEntry_func25_msg__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func25_msg__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func25_msg__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func25_msg__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func25_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[65]:  tTracePlugin_sSimple_eThroughEntry_func26_staCallInfo id=66 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func26_sta",              /* name */
        tTracePlugin_sSimple_eThroughEntry_func26_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func26_sta__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func26_sta__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func26_sta__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func26_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[66]:  tTracePlugin_sSimple_eThroughEntry_func27_array2CallInfo id=67 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func27_array2",           /* name */
        tTracePlugin_sSimple_eThroughEntry_func27_array2__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func27_array2__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func27_array2__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func27_array2__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func27_array2__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[67]:  tTracePlugin_sSimple_eThroughEntry_func31_aCallInfo id=68 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func31_a",                /* name */
        tTracePlugin_sSimple_eThroughEntry_func31_a__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func31_a__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func31_a__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func31_a__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func31_a__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[68]:  tTracePlugin_sSimple_eThroughEntry_func32_staCallInfo id=69 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func32_sta",              /* name */
        tTracePlugin_sSimple_eThroughEntry_func32_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func32_sta__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func32_sta__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func32_sta__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func32_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[69]:  tTracePlugin_sSimple_eThroughEntry_func33_strCallInfo id=70 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func33_str",              /* name */
        tTracePlugin_sSimple_eThroughEntry_func33_str__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func33_str__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func33_str__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func33_str__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func33_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[70]:  tTracePlugin_sSimple_eThroughEntry_func34_msgCallInfo id=71 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func34_msg",              /* name */
        tTracePlugin_sSimple_eThroughEntry_func34_msg__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func34_msg__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func34_msg__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func34_msg__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func34_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[71]:  tTracePlugin_sSimple_eThroughEntry_func35_msgCallInfo id=72 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func35_msg",              /* name */
        tTracePlugin_sSimple_eThroughEntry_func35_msg__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func35_msg__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func35_msg__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func35_msg__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func35_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[72]:  tTracePlugin_sSimple_eThroughEntry_func36_staCallInfo id=73 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func36_sta",              /* name */
        tTracePlugin_sSimple_eThroughEntry_func36_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func36_sta__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func36_sta__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func36_sta__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func36_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[73]:  tTracePlugin_sSimple_eThroughEntry_func37_staCallInfo id=74 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func37_sta",              /* name */
        tTracePlugin_sSimple_eThroughEntry_func37_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func37_sta__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func37_sta__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func37_sta__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func37_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[74]:  tTracePlugin_sSimple_eThroughEntry_func38_array2CallInfo id=75 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func38_array2",           /* name */
        tTracePlugin_sSimple_eThroughEntry_func38_array2__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func38_array2__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func38_array2__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func38_array2__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func38_array2__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[75]:  tTracePlugin_sSimple_eThroughEntry_func39_arrayStCallInfo id=76 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func39_arraySt",          /* name */
        tTracePlugin_sSimple_eThroughEntry_func39_arraySt__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func39_arraySt__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func39_arraySt__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func39_arraySt__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func39_arraySt__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[76]:  tTracePlugin_sSimple_eThroughEntry_func63_spCallInfo id=77 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func63_sp",               /* name */
        tTracePlugin_sSimple_eThroughEntry_func63_sp__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func63_sp__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func63_sp__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func63_sp__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func63_sp__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[77]:  tTracePlugin_sSimple_eThroughEntry_func64_rpCallInfo id=78 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func64_rp",               /* name */
        tTracePlugin_sSimple_eThroughEntry_func64_rp__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func64_rp__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func64_rp__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func64_rp__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func64_rp__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[78]:  tTracePlugin_sSimple_eThroughEntry_func70_staCallInfo id=79 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func70_sta",              /* name */
        tTracePlugin_sSimple_eThroughEntry_func70_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func70_sta__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func70_sta__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func70_sta__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func70_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[79]:  tTracePlugin_sSimple_eThroughEntry_func71_strCallInfo id=80 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func71_str",              /* name */
        tTracePlugin_sSimple_eThroughEntry_func71_str__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func71_str__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func71_str__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func71_str__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func71_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[80]:  tTracePlugin_sSimple_eThroughEntry_func72_staCallInfo id=81 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func72_sta",              /* name */
        tTracePlugin_sSimple_eThroughEntry_func72_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func72_sta__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func72_sta__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func72_sta__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func72_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[81]:  tTracePlugin_sSimple_eThroughEntry_func73_strCallInfo id=82 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eThroughEntry_func73_str",              /* name */
        tTracePlugin_sSimple_eThroughEntry_func73_str__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_eThroughEntry_func73_str__place, /* place */
        tTracePlugin_sSimple_eThroughEntry_func73_str__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_eThroughEntry_func73_str__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_eThroughEntry_func73_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[82]:  tTracePlugin_sSimple_cCall_func21_aCallInfo id=83 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func21_a",                        /* name */
        tTracePlugin_sSimple_cCall_func21_a__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func21_a__place, /* place */
        tTracePlugin_sSimple_cCall_func21_a__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func21_a__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func21_a__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[83]:  tTracePlugin_sSimple_cCall_func22_staCallInfo id=84 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func22_sta",                      /* name */
        tTracePlugin_sSimple_cCall_func22_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func22_sta__place, /* place */
        tTracePlugin_sSimple_cCall_func22_sta__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func22_sta__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func22_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[84]:  tTracePlugin_sSimple_cCall_func23_strCallInfo id=85 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func23_str",                      /* name */
        tTracePlugin_sSimple_cCall_func23_str__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func23_str__place, /* place */
        tTracePlugin_sSimple_cCall_func23_str__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func23_str__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func23_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[85]:  tTracePlugin_sSimple_cCall_func24_msgCallInfo id=86 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func24_msg",                      /* name */
        tTracePlugin_sSimple_cCall_func24_msg__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func24_msg__place, /* place */
        tTracePlugin_sSimple_cCall_func24_msg__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func24_msg__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func24_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[86]:  tTracePlugin_sSimple_cCall_func25_msgCallInfo id=87 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func25_msg",                      /* name */
        tTracePlugin_sSimple_cCall_func25_msg__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func25_msg__place, /* place */
        tTracePlugin_sSimple_cCall_func25_msg__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func25_msg__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func25_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[87]:  tTracePlugin_sSimple_cCall_func26_staCallInfo id=88 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func26_sta",                      /* name */
        tTracePlugin_sSimple_cCall_func26_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func26_sta__place, /* place */
        tTracePlugin_sSimple_cCall_func26_sta__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func26_sta__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func26_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[88]:  tTracePlugin_sSimple_cCall_func27_array2CallInfo id=89 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func27_array2",                   /* name */
        tTracePlugin_sSimple_cCall_func27_array2__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func27_array2__place, /* place */
        tTracePlugin_sSimple_cCall_func27_array2__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func27_array2__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func27_array2__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[89]:  tTracePlugin_sSimple_cCall_func31_aCallInfo id=90 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func31_a",                        /* name */
        tTracePlugin_sSimple_cCall_func31_a__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func31_a__place, /* place */
        tTracePlugin_sSimple_cCall_func31_a__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func31_a__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func31_a__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[90]:  tTracePlugin_sSimple_cCall_func32_staCallInfo id=91 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func32_sta",                      /* name */
        tTracePlugin_sSimple_cCall_func32_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func32_sta__place, /* place */
        tTracePlugin_sSimple_cCall_func32_sta__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func32_sta__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func32_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[91]:  tTracePlugin_sSimple_cCall_func33_strCallInfo id=92 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func33_str",                      /* name */
        tTracePlugin_sSimple_cCall_func33_str__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func33_str__place, /* place */
        tTracePlugin_sSimple_cCall_func33_str__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func33_str__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func33_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[92]:  tTracePlugin_sSimple_cCall_func34_msgCallInfo id=93 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func34_msg",                      /* name */
        tTracePlugin_sSimple_cCall_func34_msg__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func34_msg__place, /* place */
        tTracePlugin_sSimple_cCall_func34_msg__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func34_msg__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func34_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[93]:  tTracePlugin_sSimple_cCall_func35_msgCallInfo id=94 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func35_msg",                      /* name */
        tTracePlugin_sSimple_cCall_func35_msg__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func35_msg__place, /* place */
        tTracePlugin_sSimple_cCall_func35_msg__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func35_msg__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func35_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[94]:  tTracePlugin_sSimple_cCall_func36_staCallInfo id=95 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func36_sta",                      /* name */
        tTracePlugin_sSimple_cCall_func36_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func36_sta__place, /* place */
        tTracePlugin_sSimple_cCall_func36_sta__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func36_sta__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func36_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[95]:  tTracePlugin_sSimple_cCall_func37_staCallInfo id=96 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func37_sta",                      /* name */
        tTracePlugin_sSimple_cCall_func37_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func37_sta__place, /* place */
        tTracePlugin_sSimple_cCall_func37_sta__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func37_sta__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func37_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[96]:  tTracePlugin_sSimple_cCall_func38_array2CallInfo id=97 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func38_array2",                   /* name */
        tTracePlugin_sSimple_cCall_func38_array2__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func38_array2__place, /* place */
        tTracePlugin_sSimple_cCall_func38_array2__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func38_array2__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func38_array2__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[97]:  tTracePlugin_sSimple_cCall_func39_arrayStCallInfo id=98 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func39_arraySt",                  /* name */
        tTracePlugin_sSimple_cCall_func39_arraySt__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func39_arraySt__place, /* place */
        tTracePlugin_sSimple_cCall_func39_arraySt__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func39_arraySt__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func39_arraySt__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[98]:  tTracePlugin_sSimple_cCall_func63_spCallInfo id=99 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func63_sp",                       /* name */
        tTracePlugin_sSimple_cCall_func63_sp__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func63_sp__place, /* place */
        tTracePlugin_sSimple_cCall_func63_sp__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func63_sp__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func63_sp__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[99]:  tTracePlugin_sSimple_cCall_func64_rpCallInfo id=100 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func64_rp",                       /* name */
        tTracePlugin_sSimple_cCall_func64_rp__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func64_rp__place, /* place */
        tTracePlugin_sSimple_cCall_func64_rp__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func64_rp__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func64_rp__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[100]:  tTracePlugin_sSimple_cCall_func70_staCallInfo id=101 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func70_sta",                      /* name */
        tTracePlugin_sSimple_cCall_func70_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func70_sta__place, /* place */
        tTracePlugin_sSimple_cCall_func70_sta__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func70_sta__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func70_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[101]:  tTracePlugin_sSimple_cCall_func71_strCallInfo id=102 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func71_str",                      /* name */
        tTracePlugin_sSimple_cCall_func71_str__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func71_str__place, /* place */
        tTracePlugin_sSimple_cCall_func71_str__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func71_str__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func71_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[102]:  tTracePlugin_sSimple_cCall_func72_staCallInfo id=103 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func72_sta",                      /* name */
        tTracePlugin_sSimple_cCall_func72_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func72_sta__place, /* place */
        tTracePlugin_sSimple_cCall_func72_sta__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func72_sta__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func72_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[103]:  tTracePlugin_sSimple_cCall_func73_strCallInfo id=104 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCall_func73_str",                      /* name */
        tTracePlugin_sSimple_cCall_func73_str__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tTracePlugin_sSimple_cCall_func73_str__place, /* place */
        tTracePlugin_sSimple_cCall_func73_str__b_VMT_useless, /* b_VMT_useless */
        tTracePlugin_sSimple_cCall_func73_str__b_skelton_useless, /* b_skelton_useless */
        tTracePlugin_sSimple_cCall_func73_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[104]:  tOpaqueMarshaler_sSimple_cTDRCallInfo id=105 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sTDRSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTDR",                                  /* name */
        tOpaqueMarshaler_sSimple_cTDR__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_cTDR__place,    /* place */
        tOpaqueMarshaler_sSimple_cTDR__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_cTDR__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_cTDR__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[105]:  tOpaqueMarshaler_sSimple_cLockChannelCallInfo id=106 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sSemaphoreSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cLockChannel",                          /* name */
        tOpaqueMarshaler_sSimple_cLockChannel__offset, /* offset */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_cLockChannel__place, /* place */
        tOpaqueMarshaler_sSimple_cLockChannel__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_cLockChannel__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_cLockChannel__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[106]:  tOpaqueMarshaler_sSimple_cErrorHandlerCallInfo id=107 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sRPCErrorHandlerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cErrorHandler",                         /* name */
        tOpaqueMarshaler_sSimple_cErrorHandler__offset, /* offset */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_cErrorHandler__place, /* place */
        tOpaqueMarshaler_sSimple_cErrorHandler__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_cErrorHandler__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_cErrorHandler__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[107]:  tOpaqueMarshaler_sSimple_eClientEntry_func21_aCallInfo id=108 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func21_a",                 /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func21_a__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func21_a__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func21_a__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func21_a__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func21_a__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[108]:  tOpaqueMarshaler_sSimple_eClientEntry_func22_staCallInfo id=109 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func22_sta",               /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func22_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func22_sta__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func22_sta__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func22_sta__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func22_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[109]:  tOpaqueMarshaler_sSimple_eClientEntry_func23_strCallInfo id=110 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func23_str",               /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func23_str__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func23_str__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func23_str__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func23_str__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func23_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[110]:  tOpaqueMarshaler_sSimple_eClientEntry_func24_msgCallInfo id=111 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func24_msg",               /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func24_msg__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func24_msg__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func24_msg__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func24_msg__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func24_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[111]:  tOpaqueMarshaler_sSimple_eClientEntry_func25_msgCallInfo id=112 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func25_msg",               /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func25_msg__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func25_msg__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func25_msg__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func25_msg__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func25_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[112]:  tOpaqueMarshaler_sSimple_eClientEntry_func26_staCallInfo id=113 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func26_sta",               /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func26_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func26_sta__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func26_sta__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func26_sta__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func26_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[113]:  tOpaqueMarshaler_sSimple_eClientEntry_func27_array2CallInfo id=114 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func27_array2",            /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func27_array2__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func27_array2__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func27_array2__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func27_array2__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func27_array2__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[114]:  tOpaqueMarshaler_sSimple_eClientEntry_func31_aCallInfo id=115 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func31_a",                 /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func31_a__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func31_a__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func31_a__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func31_a__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func31_a__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[115]:  tOpaqueMarshaler_sSimple_eClientEntry_func32_staCallInfo id=116 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func32_sta",               /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func32_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func32_sta__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func32_sta__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func32_sta__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func32_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[116]:  tOpaqueMarshaler_sSimple_eClientEntry_func33_strCallInfo id=117 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func33_str",               /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func33_str__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func33_str__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func33_str__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func33_str__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func33_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[117]:  tOpaqueMarshaler_sSimple_eClientEntry_func34_msgCallInfo id=118 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func34_msg",               /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func34_msg__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func34_msg__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func34_msg__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func34_msg__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func34_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[118]:  tOpaqueMarshaler_sSimple_eClientEntry_func35_msgCallInfo id=119 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func35_msg",               /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func35_msg__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func35_msg__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func35_msg__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func35_msg__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func35_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[119]:  tOpaqueMarshaler_sSimple_eClientEntry_func36_staCallInfo id=120 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func36_sta",               /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func36_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func36_sta__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func36_sta__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func36_sta__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func36_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[120]:  tOpaqueMarshaler_sSimple_eClientEntry_func37_staCallInfo id=121 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func37_sta",               /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func37_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func37_sta__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func37_sta__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func37_sta__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func37_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[121]:  tOpaqueMarshaler_sSimple_eClientEntry_func38_array2CallInfo id=122 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func38_array2",            /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func38_array2__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func38_array2__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func38_array2__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func38_array2__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func38_array2__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[122]:  tOpaqueMarshaler_sSimple_eClientEntry_func39_arrayStCallInfo id=123 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func39_arraySt",           /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func39_arraySt__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func39_arraySt__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func39_arraySt__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func39_arraySt__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func39_arraySt__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[123]:  tOpaqueMarshaler_sSimple_eClientEntry_func63_spCallInfo id=124 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func63_sp",                /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func63_sp__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func63_sp__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func63_sp__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func63_sp__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func63_sp__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[124]:  tOpaqueMarshaler_sSimple_eClientEntry_func64_rpCallInfo id=125 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func64_rp",                /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func64_rp__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func64_rp__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func64_rp__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func64_rp__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func64_rp__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[125]:  tOpaqueMarshaler_sSimple_eClientEntry_func70_staCallInfo id=126 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func70_sta",               /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func70_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func70_sta__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func70_sta__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func70_sta__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func70_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[126]:  tOpaqueMarshaler_sSimple_eClientEntry_func71_strCallInfo id=127 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func71_str",               /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func71_str__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func71_str__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func71_str__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func71_str__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func71_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[127]:  tOpaqueMarshaler_sSimple_eClientEntry_func72_staCallInfo id=128 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func72_sta",               /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func72_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func72_sta__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func72_sta__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func72_sta__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func72_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[128]:  tOpaqueMarshaler_sSimple_eClientEntry_func73_strCallInfo id=129 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eClientEntry_func73_str",               /* name */
        tOpaqueMarshaler_sSimple_eClientEntry_func73_str__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueMarshaler_sSimple_eClientEntry_func73_str__place, /* place */
        tOpaqueMarshaler_sSimple_eClientEntry_func73_str__b_VMT_useless, /* b_VMT_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func73_str__b_skelton_useless, /* b_skelton_useless */
        tOpaqueMarshaler_sSimple_eClientEntry_func73_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[129]:  tOpaqueUnmarshaler_sSimple_cServerCallCallInfo id=130 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sSimpleSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall",                           /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[130]:  tOpaqueUnmarshaler_sSimple_cTDRCallInfo id=131 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sTDRSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTDR",                                  /* name */
        tOpaqueUnmarshaler_sSimple_cTDR__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cTDR__place,  /* place */
        tOpaqueUnmarshaler_sSimple_cTDR__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cTDR__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cTDR__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[131]:  tOpaqueUnmarshaler_sSimple_cErrorHandlerCallInfo id=132 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sRPCErrorHandlerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cErrorHandler",                         /* name */
        tOpaqueUnmarshaler_sSimple_cErrorHandler__offset, /* offset */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cErrorHandler__place, /* place */
        tOpaqueUnmarshaler_sSimple_cErrorHandler__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cErrorHandler__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cErrorHandler__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[132]:  tOpaqueUnmarshaler_sSimple_cPPAllocatorCallInfo id=133 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sPPAllocatorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cPPAllocator",                          /* name */
        tOpaqueUnmarshaler_sSimple_cPPAllocator__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cPPAllocator__place, /* place */
        tOpaqueUnmarshaler_sSimple_cPPAllocator__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cPPAllocator__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cPPAllocator__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[133]:  tOpaqueUnmarshaler_sSimple_cServerCall_func21_aCallInfo id=134 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func21_a",                  /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func21_a__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func21_a__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func21_a__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func21_a__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func21_a__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[134]:  tOpaqueUnmarshaler_sSimple_cServerCall_func22_staCallInfo id=135 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func22_sta",                /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func22_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func22_sta__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func22_sta__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func22_sta__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func22_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[135]:  tOpaqueUnmarshaler_sSimple_cServerCall_func23_strCallInfo id=136 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func23_str",                /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func23_str__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func23_str__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func23_str__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func23_str__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func23_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[136]:  tOpaqueUnmarshaler_sSimple_cServerCall_func24_msgCallInfo id=137 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func24_msg",                /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func24_msg__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func24_msg__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func24_msg__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func24_msg__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func24_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[137]:  tOpaqueUnmarshaler_sSimple_cServerCall_func25_msgCallInfo id=138 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func25_msg",                /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func25_msg__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func25_msg__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func25_msg__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func25_msg__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func25_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[138]:  tOpaqueUnmarshaler_sSimple_cServerCall_func26_staCallInfo id=139 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func26_sta",                /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func26_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func26_sta__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func26_sta__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func26_sta__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func26_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[139]:  tOpaqueUnmarshaler_sSimple_cServerCall_func27_array2CallInfo id=140 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func27_array2",             /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func27_array2__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func27_array2__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func27_array2__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func27_array2__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func27_array2__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[140]:  tOpaqueUnmarshaler_sSimple_cServerCall_func31_aCallInfo id=141 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func31_a",                  /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func31_a__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func31_a__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func31_a__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func31_a__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func31_a__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[141]:  tOpaqueUnmarshaler_sSimple_cServerCall_func32_staCallInfo id=142 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func32_sta",                /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func32_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func32_sta__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func32_sta__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func32_sta__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func32_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[142]:  tOpaqueUnmarshaler_sSimple_cServerCall_func33_strCallInfo id=143 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func33_str",                /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func33_str__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func33_str__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func33_str__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func33_str__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func33_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[143]:  tOpaqueUnmarshaler_sSimple_cServerCall_func34_msgCallInfo id=144 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func34_msg",                /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func34_msg__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func34_msg__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func34_msg__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func34_msg__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func34_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[144]:  tOpaqueUnmarshaler_sSimple_cServerCall_func35_msgCallInfo id=145 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func35_msg",                /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func35_msg__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func35_msg__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func35_msg__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func35_msg__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func35_msg__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[145]:  tOpaqueUnmarshaler_sSimple_cServerCall_func36_staCallInfo id=146 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func36_sta",                /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func36_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func36_sta__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func36_sta__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func36_sta__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func36_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[146]:  tOpaqueUnmarshaler_sSimple_cServerCall_func37_staCallInfo id=147 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func37_sta",                /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func37_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func37_sta__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func37_sta__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func37_sta__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func37_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[147]:  tOpaqueUnmarshaler_sSimple_cServerCall_func38_array2CallInfo id=148 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func38_array2",             /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func38_array2__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func38_array2__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func38_array2__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func38_array2__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func38_array2__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[148]:  tOpaqueUnmarshaler_sSimple_cServerCall_func39_arrayStCallInfo id=149 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func39_arraySt",            /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func39_arraySt__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func39_arraySt__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func39_arraySt__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func39_arraySt__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func39_arraySt__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[149]:  tOpaqueUnmarshaler_sSimple_cServerCall_func63_spCallInfo id=150 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func63_sp",                 /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func63_sp__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func63_sp__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func63_sp__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func63_sp__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func63_sp__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[150]:  tOpaqueUnmarshaler_sSimple_cServerCall_func64_rpCallInfo id=151 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func64_rp",                 /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func64_rp__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func64_rp__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func64_rp__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func64_rp__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func64_rp__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[151]:  tOpaqueUnmarshaler_sSimple_cServerCall_func70_staCallInfo id=152 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func70_sta",                /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func70_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func70_sta__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func70_sta__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func70_sta__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func70_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[152]:  tOpaqueUnmarshaler_sSimple_cServerCall_func71_strCallInfo id=153 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func71_str",                /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func71_str__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func71_str__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func71_str__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func71_str__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func71_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[153]:  tOpaqueUnmarshaler_sSimple_cServerCall_func72_staCallInfo id=154 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func72_sta",                /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func72_sta__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func72_sta__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func72_sta__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func72_sta__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func72_sta__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[154]:  tOpaqueUnmarshaler_sSimple_cServerCall_func73_strCallInfo id=155 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_sAllocSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cServerCall_func73_str",                /* name */
        tOpaqueUnmarshaler_sSimple_cServerCall_func73_str__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        true,                                    /* b_allocator_port */
        false,                                   /* b_require_port */
        tOpaqueUnmarshaler_sSimple_cServerCall_func73_str__place, /* place */
        tOpaqueUnmarshaler_sSimple_cServerCall_func73_str__b_VMT_useless, /* b_VMT_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func73_str__b_skelton_useless, /* b_skelton_useless */
        tOpaqueUnmarshaler_sSimple_cServerCall_func73_str__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[155]:  nTECSInfo_tTECSInfo_cTECSInfoCallInfo id=156 */
    {
        /* call port (INIB) #_CP_# */ 
        &rServer_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECSInfo",                             /* name */
        nTECSInfo_tTECSInfo_cTECSInfo__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nTECSInfo_tTECSInfo_cTECSInfo__place,    /* place */
        nTECSInfo_tTECSInfo_cTECSInfo__b_VMT_useless, /* b_VMT_useless */
        nTECSInfo_tTECSInfo_cTECSInfo__b_skelton_useless, /* b_skelton_useless */
        nTECSInfo_tTECSInfo_cTECSInfo__b_cell_unique, /* b_cell_unique */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTask_cBodyCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTask_cBodyCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTask_cExceptionBodyCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTask_cExceptionBodyCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tNBOTDR_cChannelCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tNBOTDR_cChannelCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[2],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tNBOTDR__require_call_port_tSysLog_eSysLogCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tNBOTDR__require_call_port_tSysLog_eSysLogCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[3],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tRPCDedicatedTaskMainWithOpener_cMainCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tRPCDedicatedTaskMainWithOpener_cMainCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[4],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tRPCDedicatedTaskMainWithOpener_cOpenerCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tRPCDedicatedTaskMainWithOpener_cOpenerCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[5],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tRPCDedicatedTaskMainWithOpener__require_call_port_tKernel_eKernelCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tRPCDedicatedTaskMainWithOpener__require_call_port_tKernel_eKernelCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[6],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer__require_call_port_tSysLog_eSysLogCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer__require_call_port_tSysLog_eSysLogCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[7],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func21_aCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func21_aCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[8],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func22_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func22_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[9],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func23_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func23_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[10],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func24_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func24_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[11],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func25_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func25_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[12],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func26_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func26_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[13],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func27_array2CallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func27_array2CallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[14],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func31_aCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func31_aCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[15],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func32_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func32_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[16],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func33_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func33_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[17],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func34_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func34_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[18],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func35_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func35_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[19],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func36_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func36_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[20],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func37_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func37_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[21],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func38_array2CallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func38_array2CallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[22],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func39_arrayStCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func39_arrayStCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[23],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func63_spCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func63_spCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[24],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func64_rpCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func64_rpCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[25],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func70_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func70_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[26],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func71_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func71_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[27],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func72_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func72_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[28],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func73_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleServer_eEnt_func73_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[29],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient__require_call_port_tSysLog_eSysLogCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient__require_call_port_tSysLog_eSysLogCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[30],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCallCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCallCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[31],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cOpenerCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cOpenerCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[32],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func21_aCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func21_aCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[33],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func22_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func22_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[34],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func23_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func23_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[35],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func24_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func24_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[36],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func25_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func25_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[37],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func26_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func26_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[38],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func27_array2CallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func27_array2CallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[39],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func31_aCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func31_aCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[40],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func32_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func32_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[41],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func33_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func33_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[42],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func34_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func34_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[43],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func35_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func35_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[44],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func36_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func36_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[45],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func37_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func37_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[46],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func38_array2CallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func38_array2CallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[47],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func39_arrayStCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func39_arrayStCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[48],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func63_spCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func63_spCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[49],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func64_rpCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func64_rpCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[50],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func70_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func70_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[51],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func71_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func71_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[52],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func72_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func72_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[53],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func73_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tSimpleClient_cCall_func73_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[54],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tClientRPCErrorHandler_cHandlerCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tClientRPCErrorHandler_cHandlerCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[55],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tServerRPCErrorHandler_cOpenerCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tServerRPCErrorHandler_cOpenerCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[56],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCallCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCallCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[57],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple__require_call_port_tSysLog_eSysLogCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple__require_call_port_tSysLog_eSysLogCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[58],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple__require_call_port_tKernel_eKernelCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple__require_call_port_tKernel_eKernelCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[59],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func21_aCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func21_aCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[60],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func22_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func22_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[61],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func23_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func23_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[62],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func24_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func24_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[63],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func25_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func25_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[64],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func26_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func26_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[65],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func27_array2CallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func27_array2CallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[66],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func31_aCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func31_aCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[67],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func32_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func32_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[68],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func33_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func33_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[69],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func34_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func34_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[70],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func35_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func35_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[71],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func36_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func36_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[72],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func37_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func37_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[73],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func38_array2CallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func38_array2CallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[74],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func39_arrayStCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func39_arrayStCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[75],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func63_spCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func63_spCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[76],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func64_rpCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func64_rpCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[77],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func70_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func70_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[78],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func71_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func71_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[79],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func72_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func72_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[80],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func73_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_eThroughEntry_func73_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[81],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func21_aCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func21_aCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[82],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func22_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func22_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[83],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func23_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func23_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[84],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func24_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func24_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[85],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func25_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func25_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[86],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func26_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func26_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[87],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func27_array2CallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func27_array2CallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[88],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func31_aCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func31_aCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[89],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func32_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func32_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[90],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func33_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func33_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[91],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func34_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func34_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[92],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func35_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func35_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[93],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func36_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func36_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[94],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func37_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func37_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[95],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func38_array2CallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func38_array2CallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[96],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func39_arrayStCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func39_arrayStCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[97],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func63_spCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func63_spCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[98],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func64_rpCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func64_rpCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[99],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func70_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func70_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[100],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func71_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func71_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[101],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func72_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func72_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[102],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func73_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tTracePlugin_sSimple_cCall_func73_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[103],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_cTDRCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_cTDRCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[104],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_cLockChannelCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_cLockChannelCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[105],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_cErrorHandlerCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_cErrorHandlerCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[106],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func21_aCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func21_aCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[107],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func22_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func22_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[108],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func23_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func23_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[109],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func24_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func24_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[110],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func25_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func25_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[111],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func26_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func26_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[112],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func27_array2CallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func27_array2CallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[113],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func31_aCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func31_aCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[114],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func32_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func32_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[115],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func33_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func33_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[116],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func34_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func34_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[117],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func35_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func35_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[118],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func36_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func36_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[119],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func37_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func37_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[120],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func38_array2CallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func38_array2CallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[121],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func39_arrayStCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func39_arrayStCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[122],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func63_spCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func63_spCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[123],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func64_rpCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func64_rpCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[124],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func70_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func70_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[125],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func71_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func71_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[126],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func72_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func72_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[127],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func73_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueMarshaler_sSimple_eClientEntry_func73_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[128],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCallCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCallCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[129],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cTDRCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cTDRCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[130],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cErrorHandlerCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cErrorHandlerCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[131],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cPPAllocatorCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cPPAllocatorCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[132],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func21_aCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func21_aCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[133],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func22_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func22_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[134],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func23_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func23_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[135],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func24_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func24_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[136],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func25_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func25_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[137],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func26_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func26_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[138],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func27_array2CallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func27_array2CallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[139],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func31_aCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func31_aCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[140],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func32_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func32_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[141],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func33_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func33_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[142],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func34_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func34_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[143],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func35_msgCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func35_msgCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[144],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func36_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func36_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[145],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func37_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func37_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[146],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func38_array2CallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func38_array2CallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[147],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func39_arrayStCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func39_arrayStCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[148],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func63_spCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func63_spCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[149],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func64_rpCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func64_rpCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[150],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func70_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func70_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[151],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func71_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func71_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[152],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func72_staCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func72_staCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[153],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func73_strCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_tOpaqueUnmarshaler_sSimple_cServerCall_func73_strCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[154],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_nTECSInfo_tTECSInfo_cTECSInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rServer_rTECSInfo_nTECSInfo_tTECSInfo_cTECSInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[155],   /* INIB */
};
