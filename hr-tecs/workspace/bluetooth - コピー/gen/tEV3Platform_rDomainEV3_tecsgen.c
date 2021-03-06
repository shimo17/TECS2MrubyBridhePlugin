/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tEV3Platform_tecsgen.h"
#include "tEV3Platform_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTaskBody */
struct tag_tEV3Platform_eTaskBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tEV3Platform_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTaskBody */
void           tEV3Platform_eTaskBody_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tEV3Platform_eTaskBody_DES *lepd
        = (struct tag_tEV3Platform_eTaskBody_DES *)epd;
    tEV3Platform_eTaskBody_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTaskBody */
const struct tag_sTaskBody_VMT tEV3Platform_eTaskBody_MT_ = {
    tEV3Platform_eTaskBody_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sRiteVM_VDES rDomainEV3_RiteVMBluetooth1_eRiteVM_des;
extern struct tag_sRiteVM_VDES rDomainEV3_RiteVMBluetooth2_eRiteVM_des;
extern struct tag_sTask_VDES rDomainEV3_MrubyTask1_eTask_des;
extern struct tag_sTask_VDES rDomainEV3_MrubyTask2_eTask_des;

/* 呼び口配列 #_CPA_# */
struct tag_sRiteVM_VDES * const rDomainEV3_EV3Platform_cRiteVM[] = {
    &rDomainEV3_RiteVMBluetooth1_eRiteVM_des,
    &rDomainEV3_RiteVMBluetooth2_eRiteVM_des,
};
struct tag_sTask_VDES * const rDomainEV3_EV3Platform_cTask[] = {
    &rDomainEV3_MrubyTask1_eTask_des,
    &rDomainEV3_MrubyTask2_eTask_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tEV3Platform_INIB tEV3Platform_INIB_tab[] = {
    /* cell: tEV3Platform_CB_tab[0]:  EV3Platform id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_EV3Platform_cRiteVM,          /* #_CCP3B_# */
        2,                                       /* length of cRiteVM (n_cRiteVM) #_CCP4_# */
        rDomainEV3_EV3Platform_cTask,            /* #_CCP3B_# */
        2,                                       /* length of cTask (n_cTask) #_CCP4_# */
        /* entry port #_EP_# */ 
    },
};

extern const struct tag_sTaskBody_VMT tEV3Platform_eTaskBody_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tEV3Platform_eTaskBody_DES rDomainEV3_EV3Platform_eTaskBody_des;
const struct tag_tEV3Platform_eTaskBody_DES rDomainEV3_EV3Platform_eTaskBody_des = {
    &tEV3Platform_eTaskBody_MT_,
    &tEV3Platform_INIB_tab[0],   /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
tEV3Platform_CB_initialize()
{
    tEV3Platform_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
