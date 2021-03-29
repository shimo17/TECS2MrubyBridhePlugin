/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCelltype2_tecsgen.h"
#include "tCelltype2_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt */
struct tag_tCelltype2_eEnt_DES {
    const struct tag_sSig_VMT *vmt;
    tCelltype2_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt */
void           tCelltype2_eEnt_func_skel( const struct tag_sSig_VDES *epd)
{
    struct tag_tCelltype2_eEnt_DES *lepd
        = (struct tag_tCelltype2_eEnt_DES *)epd;
    tCelltype2_eEnt_func( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt */
const struct tag_sSig_VMT tCelltype2_eEnt_MT_ = {
    tCelltype2_eEnt_func_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern const struct tag_tCelltype2_eEnt_DES CellB0_001_eEnt_des;

extern const struct tag_tCelltype2_eEnt_DES CellB0_002_eEnt_des;

extern const struct tag_tCelltype2_eEnt_DES CellB0_003_eEnt_des;

extern const struct tag_tCelltype2_eEnt_DES CellB0_004_eEnt_des;

extern struct tag_sSig_VDES CellX_eEnt_des2;

extern struct tag_sSig_VDES CellX_eEnt_des3;

extern struct tag_sSig_VDES CellX_eEnt_des4;

extern struct tag_sSig_VDES CellX_eEnt_des5;

/* 呼び口配列 #_CPA_# */








/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCelltype2_INIB tCelltype2_INIB_tab[] = {
    /* cell: tCelltype2_CB_tab[0]:  CellA0_000 id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_sSig_VDES *)&CellB0_001_eEnt_des, /* cCall #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        0,                                       /* a */
    },
    /* cell: tCelltype2_CB_tab[1]:  CellA0_001 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_sSig_VDES *)&CellB0_002_eEnt_des, /* cCall #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        2,                                       /* a */
    },
    /* cell: tCelltype2_CB_tab[2]:  CellA0_002 id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_sSig_VDES *)&CellB0_003_eEnt_des, /* cCall #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        4,                                       /* a */
    },
    /* cell: tCelltype2_CB_tab[3]:  CellA0_003 id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_sSig_VDES *)&CellB0_004_eEnt_des, /* cCall #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        8,                                       /* a */
    },
    /* cell: tCelltype2_CB_tab[4]:  CellB0_001 id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &CellX_eEnt_des2,                        /* cCall #_CCP0_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        200,                                     /* a */
    },
    /* cell: tCelltype2_CB_tab[5]:  CellB0_002 id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &CellX_eEnt_des3,                        /* cCall #_CCP0_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        200,                                     /* a */
    },
    /* cell: tCelltype2_CB_tab[6]:  CellB0_003 id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &CellX_eEnt_des4,                        /* cCall #_CCP0_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        200,                                     /* a */
    },
    /* cell: tCelltype2_CB_tab[7]:  CellB0_004 id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &CellX_eEnt_des5,                        /* cCall #_CCP0_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        200,                                     /* a */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCelltype2_eEnt_DES CellA0_000_eEnt_des;
const struct tag_tCelltype2_eEnt_DES CellA0_000_eEnt_des = {
    &tCelltype2_eEnt_MT_,
    &tCelltype2_INIB_tab[0],   /* INIB */
};
extern const struct tag_tCelltype2_eEnt_DES CellA0_001_eEnt_des;
const struct tag_tCelltype2_eEnt_DES CellA0_001_eEnt_des = {
    &tCelltype2_eEnt_MT_,
    &tCelltype2_INIB_tab[1],   /* INIB */
};
extern const struct tag_tCelltype2_eEnt_DES CellA0_002_eEnt_des;
const struct tag_tCelltype2_eEnt_DES CellA0_002_eEnt_des = {
    &tCelltype2_eEnt_MT_,
    &tCelltype2_INIB_tab[2],   /* INIB */
};
extern const struct tag_tCelltype2_eEnt_DES CellA0_003_eEnt_des;
const struct tag_tCelltype2_eEnt_DES CellA0_003_eEnt_des = {
    &tCelltype2_eEnt_MT_,
    &tCelltype2_INIB_tab[3],   /* INIB */
};
extern const struct tag_tCelltype2_eEnt_DES CellB0_001_eEnt_des;
const struct tag_tCelltype2_eEnt_DES CellB0_001_eEnt_des = {
    &tCelltype2_eEnt_MT_,
    &tCelltype2_INIB_tab[4],   /* INIB */
};
extern const struct tag_tCelltype2_eEnt_DES CellB0_002_eEnt_des;
const struct tag_tCelltype2_eEnt_DES CellB0_002_eEnt_des = {
    &tCelltype2_eEnt_MT_,
    &tCelltype2_INIB_tab[5],   /* INIB */
};
extern const struct tag_tCelltype2_eEnt_DES CellB0_003_eEnt_des;
const struct tag_tCelltype2_eEnt_DES CellB0_003_eEnt_des = {
    &tCelltype2_eEnt_MT_,
    &tCelltype2_INIB_tab[6],   /* INIB */
};
extern const struct tag_tCelltype2_eEnt_DES CellB0_004_eEnt_des;
const struct tag_tCelltype2_eEnt_DES CellB0_004_eEnt_des = {
    &tCelltype2_eEnt_MT_,
    &tCelltype2_INIB_tab[7],   /* INIB */
};
