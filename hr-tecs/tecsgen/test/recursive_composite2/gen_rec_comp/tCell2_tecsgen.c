/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCell2_tecsgen.h"
#include "tCell2_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEntry2 : omitted by entry port optimize */

/* eEntryB : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eEntry2 : omitted by entry port optimize */
/* eEntryB : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEntry2 : omitted by entry port optimize */
/* eEntryB : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig3_VDES comp1_comp12_cell3_eEntry3_des0;
extern struct tag_sSig3_VDES comp1_comp12_cell3_eEntry3_des1;

extern struct tag_sSig3_VDES comp2_comp12_cell3_eEntry3_des0;
extern struct tag_sSig3_VDES comp2_comp12_cell3_eEntry3_des1;

/* 呼び口配列 #_CPA_# */
struct tag_sSig3_VDES * const comp1_comp11_cell2_cCall2[] = {
    &comp1_comp12_cell3_eEntry3_des0,
    &comp1_comp12_cell3_eEntry3_des1,
};

struct tag_sSig3_VDES * const comp2_comp11_cell2_cCall2[] = {
    &comp2_comp12_cell3_eEntry3_des0,
    &comp2_comp12_cell3_eEntry3_des1,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCell2_INIB tCell2_INIB_tab[] = {
    /* cell: tCell2_CB_tab[0]:  comp1_comp11_cell2 id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        comp1_comp11_cell2_cCall2,               /* #_CCP3B_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        20,                                      /* a */
        "comp1_comp11_cell2",                    /* name */
    },
    /* cell: tCell2_CB_tab[1]:  comp2_comp11_cell2 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        comp2_comp11_cell2_cCall2,               /* #_CCP3B_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        20,                                      /* a */
        "comp2_comp11_cell2",                    /* name */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eEntry2 : omitted by entry port optimize */
/* eEntryB : omitted by entry port optimize */
/* eEntry2 : omitted by entry port optimize */
/* eEntryB : omitted by entry port optimize */
