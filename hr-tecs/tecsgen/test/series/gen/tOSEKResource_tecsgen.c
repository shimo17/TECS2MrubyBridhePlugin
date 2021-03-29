/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tOSEKResource_tecsgen.h"
#include "tOSEKResource_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eLinkedResource */
struct tag_tOSEKResource_eLinkedResource_DES {
    const struct tag_sLinkedResource_VMT *vmt;
    tOSEKResource_IDX  idx;
    int_t  subscript;
};

/* eLinkedResource_2 */
struct tag_tOSEKResource_eLinkedResource_2_DES {
    const struct tag_sLinkedResource_VMT *vmt;
    tOSEKResource_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eLinkedResource */
void           tOSEKResource_eLinkedResource_main_skel( const struct tag_sLinkedResource_VDES *epd)
{
    struct tag_tOSEKResource_eLinkedResource_DES *lepd
        = (struct tag_tOSEKResource_eLinkedResource_DES *)epd;
    tOSEKResource_eLinkedResource_main( lepd->idx, lepd->subscript );
}
/* eLinkedResource_2 */
void           tOSEKResource_eLinkedResource_2_main_skel( const struct tag_sLinkedResource_VDES *epd)
{
    struct tag_tOSEKResource_eLinkedResource_2_DES *lepd
        = (struct tag_tOSEKResource_eLinkedResource_2_DES *)epd;
    tOSEKResource_eLinkedResource_2_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eLinkedResource */
const struct tag_sLinkedResource_VMT tOSEKResource_eLinkedResource_MT_ = {
    tOSEKResource_eLinkedResource_main_skel,
};
/* eLinkedResource_2 */
const struct tag_sLinkedResource_VMT tOSEKResource_eLinkedResource_2_MT_ = {
    tOSEKResource_eLinkedResource_2_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern const struct tag_tOSEKResource_eLinkedResource_2_DES OSEKResource_3_eLinkedResource_2_des;
extern const struct tag_tOSEKResource_eLinkedResource_2_DES OSEKResource_2_eLinkedResource_2_des;
extern const struct tag_tOSEKResource_eLinkedResource_DES OSEKResource_eLinkedResource_des0;

extern const struct tag_tOSEKResource_eLinkedResource_2_DES OSEKResource_2_eLinkedResource_2_des;

extern const struct tag_tOSEKResource_eLinkedResource_DES OSEKResource_3_eLinkedResource_des1;

/* 呼び口配列 #_CPA_# */
struct tag_sLinkedResource_VDES * const OSEKResource_cLinkedResource[] = {
    (struct tag_sLinkedResource_VDES *)&OSEKResource_3_eLinkedResource_2_des,
    (struct tag_sLinkedResource_VDES *)&OSEKResource_2_eLinkedResource_2_des,
    (struct tag_sLinkedResource_VDES *)&OSEKResource_eLinkedResource_des0,
};



/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tOSEKResource_INIB tOSEKResource_INIB_tab[] = {
    /* cell: tOSEKResource_CB_tab[0]:  OSEKResource id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        OSEKResource_cLinkedResource,            /* #_CCP3B_# */
        3,                                       /* length of cLinkedResource (n_cLinkedResource) #_CCP4_# */
        0,                                       /* #_CCP5_# */
        /* entry port #_EP_# */ 
        1,                                       /*  #_EEP_# */
        /* attribute(RO) */ 
        "OSEKResource",                          /* name */
        5,                                       /* nest_max */
    },
    /* cell: tOSEKResource_CB_tab[1]:  OSEKResource_2 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cLinkedResource (n_cLinkedResource) #_CCP6_# */
        (struct tag_sLinkedResource_VDES *)&OSEKResource_2_eLinkedResource_2_des, /* cLinkedResource2 #_CCP1_# */
        /* entry port #_EP_# */ 
        0,                                       /*  #_EEP_# */
        /* attribute(RO) */ 
        "OSEKResource_2",                        /* name */
        3,                                       /* nest_max */
    },
    /* cell: tOSEKResource_CB_tab[2]:  OSEKResource_3 id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cLinkedResource (n_cLinkedResource) #_CCP6_# */
        (struct tag_sLinkedResource_VDES *)&OSEKResource_3_eLinkedResource_des1, /* cLinkedResource2 #_CCP0_# */
        /* entry port #_EP_# */ 
        2,                                       /*  #_EEP_# */
        /* attribute(RO) */ 
        "OSEKResource_3",                        /* name */
        2,                                       /* nest_max */
    },
};

/* セル CB #_CB_# */
struct tag_tOSEKResource_CB tOSEKResource_CB_tab[] = {
    /* cell: tOSEKResource_CB_tab[0]:  OSEKResource id=1 */
    {
        &tOSEKResource_INIB_tab[0],              /* _inib */
        /* entry port #_EP_# */ 
        1,                                       /*  #_EEP_# */
        /* var */ 
        0,                                       /* nest */
    },
    /* cell: tOSEKResource_CB_tab[1]:  OSEKResource_2 id=2 */
    {
        &tOSEKResource_INIB_tab[1],              /* _inib */
        /* entry port #_EP_# */ 
        0,                                       /*  #_EEP_# */
        /* var */ 
        0,                                       /* nest */
    },
    /* cell: tOSEKResource_CB_tab[2]:  OSEKResource_3 id=3 */
    {
        &tOSEKResource_INIB_tab[2],              /* _inib */
        /* entry port #_EP_# */ 
        2,                                       /*  #_EEP_# */
        /* var */ 
        0,                                       /* nest */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tOSEKResource_eLinkedResource_DES OSEKResource_eLinkedResource_des0;
const struct tag_tOSEKResource_eLinkedResource_DES OSEKResource_eLinkedResource_des0 = {
    &tOSEKResource_eLinkedResource_MT_,
    &tOSEKResource_CB_tab[0],      /* CB */
    0
};
extern const struct tag_tOSEKResource_eLinkedResource_2_DES OSEKResource_eLinkedResource_2_des;
const struct tag_tOSEKResource_eLinkedResource_2_DES OSEKResource_eLinkedResource_2_des = {
    &tOSEKResource_eLinkedResource_2_MT_,
    &tOSEKResource_CB_tab[0],     /* CB */
};
extern const struct tag_tOSEKResource_eLinkedResource_2_DES OSEKResource_2_eLinkedResource_2_des;
const struct tag_tOSEKResource_eLinkedResource_2_DES OSEKResource_2_eLinkedResource_2_des = {
    &tOSEKResource_eLinkedResource_2_MT_,
    &tOSEKResource_CB_tab[1],     /* CB */
};
extern const struct tag_tOSEKResource_eLinkedResource_DES OSEKResource_3_eLinkedResource_des0;
const struct tag_tOSEKResource_eLinkedResource_DES OSEKResource_3_eLinkedResource_des0 = {
    &tOSEKResource_eLinkedResource_MT_,
    &tOSEKResource_CB_tab[2],      /* CB */
    0
};
extern const struct tag_tOSEKResource_eLinkedResource_DES OSEKResource_3_eLinkedResource_des1;
const struct tag_tOSEKResource_eLinkedResource_DES OSEKResource_3_eLinkedResource_des1 = {
    &tOSEKResource_eLinkedResource_MT_,
    &tOSEKResource_CB_tab[2],      /* CB */
    1
};
extern const struct tag_tOSEKResource_eLinkedResource_2_DES OSEKResource_3_eLinkedResource_2_des;
const struct tag_tOSEKResource_eLinkedResource_2_DES OSEKResource_3_eLinkedResource_2_des = {
    &tOSEKResource_eLinkedResource_2_MT_,
    &tOSEKResource_CB_tab[2],     /* CB */
};
