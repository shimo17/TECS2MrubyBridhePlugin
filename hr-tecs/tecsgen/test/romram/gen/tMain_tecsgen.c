/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tMain_tecsgen.h"
#include "tMain_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig_VDES Single_eSig_des;
extern struct tag_sSig_VDES C0_eEnt_des;

/* 呼び口配列 #_CPA_# */
struct tag_sSig_VDES * const MainCell_cSig[] = {
    &Single_eSig_des,
    &C0_eEnt_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tMain_INIB tMain_SINGLE_CELL_INIB = 
{
    /* call port (INIB) #_CP_# */ 
    MainCell_cSig,                           /* #_CCP3B_# */
    2,                                       /* length of cSig (n_cSig) #_CCP4_# */
};

/* 受け口ディスクリプタ #_EPD_# */
