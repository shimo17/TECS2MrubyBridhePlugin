/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECS2Mruby_tsMcall2_tecsgen.h"
#include "nTECS2Mruby_tsMcall2_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECS2Mruby_tsMcall2_INIB nTECS2Mruby_tsMcall2_INIB_tab[] = {
    /* cell: nTECS2Mruby_tsMcall2_CB_tab[0]:  McallBridge2 id=1 */
    {
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eEnt : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
nTECS2Mruby_tsMcall2_CB_initialize()
{
    nTECS2Mruby_tsMcall2_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
