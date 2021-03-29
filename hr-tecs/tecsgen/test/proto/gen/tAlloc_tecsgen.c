/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tAlloc_tecsgen.h"
#include "tAlloc_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eAlloc */
struct tag_tAlloc_eAlloc_DES {
    const struct tag_sAlloc_VMT *vmt;
    tAlloc_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eAlloc */
ER             tAlloc_eAlloc_alloc_skel( const struct tag_sAlloc_VDES *epd, int32_t size, void** p)
{
    struct tag_tAlloc_eAlloc_DES *lepd
        = (struct tag_tAlloc_eAlloc_DES *)epd;
    return tAlloc_eAlloc_alloc( lepd->idx, size, p );
}
ER             tAlloc_eAlloc_dealloc_skel( const struct tag_sAlloc_VDES *epd, const void* p)
{
    struct tag_tAlloc_eAlloc_DES *lepd
        = (struct tag_tAlloc_eAlloc_DES *)epd;
    return tAlloc_eAlloc_dealloc( lepd->idx, p );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eAlloc */
const struct tag_sAlloc_VMT tAlloc_eAlloc_MT_ = {
    tAlloc_eAlloc_alloc_skel,
    tAlloc_eAlloc_dealloc_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
int8_t tAlloc_Allocator_CB_buffer_INIT[8192];
/* セル INIB #_INIB_# */
tAlloc_INIB tAlloc_INIB_tab[] = {
    /* cell: tAlloc_CB_tab[0]:  Allocator id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        8192,                                    /* size */
        tAlloc_Allocator_CB_buffer_INIT,         /* buffer */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tAlloc_eAlloc_DES Allocator_eAlloc_des;
const struct tag_tAlloc_eAlloc_DES Allocator_eAlloc_des = {
    &tAlloc_eAlloc_MT_,
    &tAlloc_INIB_tab[0],   /* INIB */
};
