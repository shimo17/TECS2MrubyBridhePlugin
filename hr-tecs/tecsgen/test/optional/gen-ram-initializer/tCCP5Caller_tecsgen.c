/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCCP5Caller_tecsgen.h"
#include "tCCP5Caller_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain */
struct tag_tCCP5Caller_eMain_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tCCP5Caller_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain */
void           tCCP5Caller_eMain_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tCCP5Caller_eMain_DES *lepd
        = (struct tag_tCCP5Caller_eMain_DES *)epd;
    tCCP5Caller_eMain_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain */
const struct tag_sTaskBody_VMT tCCP5Caller_eMain_MT_ = {
    tCCP5Caller_eMain_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig_VDES CCP5E_1_eEnt_des;


/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCCP5Caller_INIB tCCP5Caller_INIB_tab[] = {
    /* cell: tCCP5Caller_CB_tab[0]:  CCP5R_1 id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &CCP5E_1_eEnt_des,                       /* cCall #_CCP1_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tCCP5Caller_CB_tab[1]:  CCP5R_2 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP5_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCCP5Caller_eMain_DES CCP5R_1_eMain_des;
const struct tag_tCCP5Caller_eMain_DES CCP5R_1_eMain_des = {
    &tCCP5Caller_eMain_MT_,
    &tCCP5Caller_INIB_tab[0],   /* INIB */
};
extern const struct tag_tCCP5Caller_eMain_DES CCP5R_2_eMain_des;
const struct tag_tCCP5Caller_eMain_DES CCP5R_2_eMain_des = {
    &tCCP5Caller_eMain_MT_,
    &tCCP5Caller_INIB_tab[1],   /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
tCCP5Caller_CB_initialize()
{
    tCCP5Caller_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
