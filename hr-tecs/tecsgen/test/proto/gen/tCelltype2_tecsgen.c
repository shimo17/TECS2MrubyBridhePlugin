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

/* eEnt2 */
struct tag_tCelltype2_eEnt2_DES {
    const struct tag_sSig_VMT *vmt;
    tCelltype2_IDX  idx;
    int_t  subscript;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt */
void           tCelltype2_eEnt_func_skel( const struct tag_sSig_VDES *epd)
{
    struct tag_tCelltype2_eEnt_DES *lepd
        = (struct tag_tCelltype2_eEnt_DES *)epd;
    tCelltype2_eEnt_func( lepd->idx );
}
void           tCelltype2_eEnt_Send_skel( const struct tag_sSig_VDES *epd, int32_t* buf, int32_t sz)
{
    struct tag_tCelltype2_eEnt_DES *lepd
        = (struct tag_tCelltype2_eEnt_DES *)epd;
    tCelltype2_eEnt_Send( lepd->idx, buf, sz );
}
/* eEnt2 */
void           tCelltype2_eEnt2_func_skel( const struct tag_sSig_VDES *epd)
{
    struct tag_tCelltype2_eEnt2_DES *lepd
        = (struct tag_tCelltype2_eEnt2_DES *)epd;
    tCelltype2_eEnt2_func( lepd->idx, lepd->subscript );
}
void           tCelltype2_eEnt2_Send_skel( const struct tag_sSig_VDES *epd, int32_t* buf, int32_t sz)
{
    struct tag_tCelltype2_eEnt2_DES *lepd
        = (struct tag_tCelltype2_eEnt2_DES *)epd;
    tCelltype2_eEnt2_Send( lepd->idx, lepd->subscript, buf, sz );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt */
const struct tag_sSig_VMT tCelltype2_eEnt_MT_ = {
    tCelltype2_eEnt_func_skel,
    tCelltype2_eEnt_Send_skel,
};
/* eEnt2 */
const struct tag_sSig_VMT tCelltype2_eEnt2_MT_ = {
    tCelltype2_eEnt2_func_skel,
    tCelltype2_eEnt2_Send_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sAlloc_VDES Allocator_eAlloc_des;
extern struct tag_sAlloc_VDES Allocator_eAlloc_des;

extern struct tag_sAlloc_VDES Allocator_eAlloc_des;
extern struct tag_sAlloc_VDES Allocator_eAlloc_des;

extern struct tag_sAlloc_VDES Allocator_eAlloc_des;
extern struct tag_sAlloc_VDES Allocator_eAlloc_des;

/* 呼び口配列 #_CPA_# */
struct tag_sAlloc_VDES * const Cell2_eEnt2_Send_buf[] = {
    &Allocator_eAlloc_des,
    &Allocator_eAlloc_des,
};

struct tag_sAlloc_VDES * const Cell3_eEnt2_Send_buf[] = {
    &Allocator_eAlloc_des,
    &Allocator_eAlloc_des,
};

struct tag_sAlloc_VDES * const Cell4_eEnt2_Send_buf[] = {
    &Allocator_eAlloc_des,
    &Allocator_eAlloc_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCelltype2_INIB tCelltype2_INIB_tab[] = {
    /* cell: tCelltype2_CB_tab[0]:  Cell2 id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        Cell2_eEnt2_Send_buf,                    /* #_CCP3B_# */
        2,                                       /* length of eEnt2_Send_buf (n_eEnt2_Send_buf) #_CCP4_# */
        /* entry port #_EP_# */ 
        0,                                       /*  #_EEP_# */
        /* attribute(RO) */ 
        "tCelltype2_Cell2",                      /* name */
    },
    /* cell: tCelltype2_CB_tab[1]:  Cell3 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        Cell3_eEnt2_Send_buf,                    /* #_CCP3B_# */
        2,                                       /* length of eEnt2_Send_buf (n_eEnt2_Send_buf) #_CCP4_# */
        /* entry port #_EP_# */ 
        0,                                       /*  #_EEP_# */
        /* attribute(RO) */ 
        "tCelltype2_Cell3",                      /* name */
    },
    /* cell: tCelltype2_CB_tab[2]:  Cell4 id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        Cell4_eEnt2_Send_buf,                    /* #_CCP3B_# */
        2,                                       /* length of eEnt2_Send_buf (n_eEnt2_Send_buf) #_CCP4_# */
        /* entry port #_EP_# */ 
        3,                                       /*  #_EEP_# */
        /* attribute(RO) */ 
        "tCelltype2_Cell4",                      /* name */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCelltype2_eEnt_DES Cell2_eEnt_des;
const struct tag_tCelltype2_eEnt_DES Cell2_eEnt_des = {
    &tCelltype2_eEnt_MT_,
    &tCelltype2_INIB_tab[0],   /* INIB */
};
extern const struct tag_tCelltype2_eEnt_DES Cell3_eEnt_des;
const struct tag_tCelltype2_eEnt_DES Cell3_eEnt_des = {
    &tCelltype2_eEnt_MT_,
    &tCelltype2_INIB_tab[1],   /* INIB */
};
extern const struct tag_tCelltype2_eEnt_DES Cell4_eEnt_des;
const struct tag_tCelltype2_eEnt_DES Cell4_eEnt_des = {
    &tCelltype2_eEnt_MT_,
    &tCelltype2_INIB_tab[2],   /* INIB */
};
extern const struct tag_tCelltype2_eEnt2_DES Cell4_eEnt2_des0;
const struct tag_tCelltype2_eEnt2_DES Cell4_eEnt2_des0 = {
    &tCelltype2_eEnt2_MT_,
    &tCelltype2_INIB_tab[2],    /* INIB */
    0
};
extern const struct tag_tCelltype2_eEnt2_DES Cell4_eEnt2_des1;
const struct tag_tCelltype2_eEnt2_DES Cell4_eEnt2_des1 = {
    &tCelltype2_eEnt2_MT_,
    &tCelltype2_INIB_tab[2],    /* INIB */
    1
};
extern const struct tag_tCelltype2_eEnt2_DES Cell4_eEnt2_des2;
const struct tag_tCelltype2_eEnt2_DES Cell4_eEnt2_des2 = {
    &tCelltype2_eEnt2_MT_,
    &tCelltype2_INIB_tab[2],    /* INIB */
    2
};
