/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nMruby_tsBattery_tecsgen.h"
#include "nMruby_tsBattery_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
/* cell: rDomainEV3_BridgeBattery_CB:  BridgeBattery id=1 */
const nMruby_tsBattery_INIB rDomainEV3_BridgeBattery_INIB = {
};

/* 受け口ディスクリプタ #_EPD_# */
/* ID to INIB table #_INTAB_# */
    extern nMruby_tsBattery_INIB  rDomainEV3_BridgeBattery_INIB;
nMruby_tsBattery_INIB *nMruby_tsBattery_INIB_tab[] ={
    &rDomainEV3_BridgeBattery_INIB,
};
/* CB 初期化コード #_CIC_# */
void
nMruby_tsBattery_CB_initialize()
{
    nMruby_tsBattery_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
