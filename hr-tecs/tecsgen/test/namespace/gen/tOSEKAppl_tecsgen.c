/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tOSEKAppl_tecsgen.h"
#include "tOSEKAppl_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tOSEKAppl_INIB tOSEKAppl_INIB_tab[] = {
    /* cell: tOSEKAppl_CB_tab[0]:  appl3 id=1 */
    {
        /* attribute(RO) */ 
        32,                                      /* a */
    },
};

/* セル CB #_CB_# */
struct tag_tOSEKAppl_CB tOSEKAppl_CB_tab[] = {
    /* cell: tOSEKAppl_CB_tab[0]:  appl3 id=1 */
    {
        &tOSEKAppl_INIB_tab[0],                  /* _inib */
        /* var */ 
        99,                                      /* b */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
