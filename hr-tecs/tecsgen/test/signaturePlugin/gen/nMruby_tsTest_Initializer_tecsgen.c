/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nMruby_tsTest_Initializer_tecsgen.h"
#include "nMruby_tsTest_Initializer_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eInitialize */
struct tag_nMruby_tsTest_Initializer_eInitialize_DES {
    const struct tag_nMruby_sInitializeTECSBridge_VMT *vmt;
    int           idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eInitialize */
void           nMruby_tsTest_Initializer_eInitialize_initializeBridge_skel( const struct tag_nMruby_sInitializeTECSBridge_VDES *epd, mrb_state* mrb, struct RClass* TECS)
{
    struct tag_nMruby_tsTest_Initializer_eInitialize_DES *lepd
        = (struct tag_nMruby_tsTest_Initializer_eInitialize_DES *)epd;
    nMruby_tsTest_Initializer_eInitialize_initializeBridge( lepd->idx, mrb, TECS );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eInitialize */
const struct tag_nMruby_sInitializeTECSBridge_VMT nMruby_tsTest_Initializer_eInitialize_MT_ = {
    nMruby_tsTest_Initializer_eInitialize_initializeBridge_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nMruby_tsTest_Initializer_eInitialize_DES VM_tsTest_Initializer_eInitialize_des;
const struct tag_nMruby_tsTest_Initializer_eInitialize_DES VM_tsTest_Initializer_eInitialize_des = {
    &nMruby_tsTest_Initializer_eInitialize_MT_,
    0,
};
