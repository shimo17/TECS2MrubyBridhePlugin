/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tSCt_a_CB_a_INIB_tecsgen.h"
#include "tSCt_a_CB_a_INIB_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
int8_t tSCt_a_CB_a_INIB_SINGLE_CELL_CB_buf_INIT[6];
/* セル INIB #_INIB_# */
tSCt_a_CB_a_INIB_INIB tSCt_a_CB_a_INIB_SINGLE_CELL_INIB = 
{
    /* attribute(RO) */ 
    6,                                       /* size */
    tSCt_a_CB_a_INIB_SINGLE_CELL_CB_buf_INIT, /* buf */
};

/* セル CB #_CB_# */
struct tag_tSCt_a_CB_a_INIB_CB tSCt_a_CB_a_INIB_SINGLE_CELL_CB = 
{
    &tSCt_a_CB_a_INIB_SINGLE_CELL_INIB,      /* _inib */
    /* var */ 
    9,                                       /* a */
};

/* 受け口ディスクリプタ #_EPD_# */