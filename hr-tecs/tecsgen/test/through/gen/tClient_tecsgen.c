/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tClient_tecsgen.h"
#include "tClient_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSignature_VDES Plugin1__1_throughEntry_des;
extern struct tag_sSignature_VDES server_eEntry_des;

/* 呼び口配列 #_CPA_# */
struct tag_sSignature_VDES * const Client_Cell_cCall2[] = {
    &Plugin1__1_throughEntry_des,
    &server_eEntry_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tClient_INIB tClient_INIB_tab[] = {
    /* cell: tClient_CB_tab[0]:  Client_Cell id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        Client_Cell_cCall2,                      /* #_CCP3B_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eMain : omitted by entry port optimize */
