/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTLSFMalloc_tecsgen.h"
#include "tTLSFMalloc_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMalloc : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eMalloc : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMalloc : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */


/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
uint64_t tTLSFMalloc_TLSFMalloc1_CB_pool_INIT[131072];
uint64_t tTLSFMalloc_TLSFMalloc2_CB_pool_INIT[131072];
/* セル INIB #_INIB_# */
tTLSFMalloc_INIB tTLSFMalloc_INIB_tab[] = {
    /* cell: tTLSFMalloc_CB_tab[0]:  TLSFMalloc1 id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1048576,                                 /* memoryPoolSize */
        tTLSFMalloc_TLSFMalloc1_CB_pool_INIT,    /* pool */
    },
    /* cell: tTLSFMalloc_CB_tab[1]:  TLSFMalloc2 id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        1048576,                                 /* memoryPoolSize */
        tTLSFMalloc_TLSFMalloc2_CB_pool_INIT,    /* pool */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eMalloc : omitted by entry port optimize */
/* eMalloc : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tTLSFMalloc_CB_initialize()
{
    tTLSFMalloc_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
