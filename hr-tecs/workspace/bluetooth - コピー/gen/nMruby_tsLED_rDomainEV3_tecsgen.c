/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nMruby_tsLED_tecsgen.h"
#include "nMruby_tsLED_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
/* cell: rDomainEV3_BridgeLED_CB:  BridgeLED id=1 */
const nMruby_tsLED_INIB rDomainEV3_BridgeLED_INIB = {
};

/* 受け口ディスクリプタ #_EPD_# */
/* ID to INIB table #_INTAB_# */
    extern nMruby_tsLED_INIB  rDomainEV3_BridgeLED_INIB;
nMruby_tsLED_INIB *nMruby_tsLED_INIB_tab[] ={
    &rDomainEV3_BridgeLED_INIB,
};
/* CB 初期化コード #_CIC_# */
void
nMruby_tsLED_CB_initialize()
{
    nMruby_tsLED_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
