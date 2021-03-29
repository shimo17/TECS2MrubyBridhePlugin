/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tVoidTypeInfo_tecsgen.h"
#include "nTECSInfo_tVoidTypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tVoidTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tVoidTypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tVoidTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tVoidTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tVoidTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tVoidTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tVoidTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tVoidTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tVoidTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tVoidTypeInfo_eTypeInfo_getNameLength( lepd->idx, len );
}
void           nTECSInfo_tVoidTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t* size)
{
    struct tag_nTECSInfo_tVoidTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tVoidTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tVoidTypeInfo_eTypeInfo_getSize( lepd->idx, size );
}
void           nTECSInfo_tVoidTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int8_t* kind)
{
    struct tag_nTECSInfo_tVoidTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tVoidTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tVoidTypeInfo_eTypeInfo_getKind( lepd->idx, kind );
}
void           nTECSInfo_tVoidTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t* num)
{
    struct tag_nTECSInfo_tVoidTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tVoidTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tVoidTypeInfo_eTypeInfo_getNType( lepd->idx, num );
}
void           nTECSInfo_tVoidTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tVoidTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tVoidTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tVoidTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, ith, desc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tVoidTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tVoidTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tVoidTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tVoidTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tVoidTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tVoidTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tVoidTypeInfo_eTypeInfo_getTypeInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */


/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tVoidTypeInfo_INIB nTECSInfo_tVoidTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tVoidTypeInfo_CB_tab[0]:  voidTypeInfo id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "void",                                  /* name */
        9,                                       /* typeKind */
        sizeof(void),                            /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tVoidTypeInfo_CB_tab[1]:  const__voidTypeInfo id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const void",                            /* name */
        9,                                       /* typeKind */
        sizeof(const void),                      /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tVoidTypeInfo_eTypeInfo_DES rClient_rTECSInfo_voidTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tVoidTypeInfo_eTypeInfo_DES rClient_rTECSInfo_voidTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tVoidTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tVoidTypeInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tVoidTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__voidTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tVoidTypeInfo_eTypeInfo_DES rClient_rTECSInfo_const__voidTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tVoidTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tVoidTypeInfo_INIB_tab[1],   /* INIB */
};
