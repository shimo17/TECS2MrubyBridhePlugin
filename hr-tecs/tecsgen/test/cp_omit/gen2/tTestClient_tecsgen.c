/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTestClient_tecsgen.h"
#include "tTestClient_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBody : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eBody : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBody : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */


/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tTestClient_INIB tTestClient_INIB_tab[] = {
    /* cell: tTestClient_CB_tab[0]:  Cl id=1 */
    {
        /* entry port #_EP_# */ 
    },
    /* cell: tTestClient_CB_tab[1]:  Cl2_Cell id=2 */
    {
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eBody : omitted by entry port optimize */
/* eBody : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tTestClient_CB_initialize()
{
    tTestClient_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
