/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tMainArray_tecsgen.h"
#include "tMainArray_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain */
struct tag_tMainArray_eMain_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tMainArray_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain */
void           tMainArray_eMain_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tMainArray_eMain_DES *lepd
        = (struct tag_tMainArray_eMain_DES *)epd;
    tMainArray_eMain_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain */
const struct tag_sTaskBody_VMT tMainArray_eMain_MT_ = {
    tMainArray_eMain_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sHello_VDES Talker0_eHello_des;
extern struct tag_sHello_VDES Talker0_eHello_des;
extern struct tag_sHello_VDES Talker1_eHello_des;
extern struct tag_sHello_VDES Talker2_eHello_des;
extern struct tag_sTalkerSelector_VDES Selector_eTalkerSelector_des;

extern struct tag_sHello_VDES rComposite_Talker0_eHello_des;
extern struct tag_sHello_VDES rComposite_Talker0_eHello_des;
extern struct tag_sHello_VDES rComposite_Talker1_eHello_des;
extern struct tag_sHello_VDES rComposite_Talker2_eHello_des;
extern struct tag_sTalkerSelector_VDES rComposite_Selector_eTalkerSelector_des;

/* 呼び口配列 #_CPA_# */
struct tag_sHello_VDES * const Main_cTalker_init_[] = {
    &Talker0_eHello_des,
    &Talker1_eHello_des,
    &Talker2_eHello_des,
};
struct tag_sHello_VDES * Main_cTalker[ 3 ];
struct tag_sHello_VDES * const Main_cTalker2_init_[] = {
    0,
    0,
};
struct tag_sHello_VDES * Main_cTalker2[ 2 ];

struct tag_sHello_VDES * const rComposite_CompMain_Main_cTalker_init_[] = {
    &rComposite_Talker0_eHello_des,
    &rComposite_Talker1_eHello_des,
    &rComposite_Talker2_eHello_des,
};
struct tag_sHello_VDES * rComposite_CompMain_Main_cTalker[ 3 ];
struct tag_sHello_VDES * const rComposite_CompMain_Main_cTalker2_init_[] = {
    0,
    0,
};
struct tag_sHello_VDES * rComposite_CompMain_Main_cTalker2[ 2 ];

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tMainArray_INIB tMainArray_INIB_tab[] = {
    /* cell: tMainArray_CB_tab[0]:  Main id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &Talker0_eHello_des,                     /* cDefaultTalker #_CCP1_# */
        Main_cTalker_init_,                      /* #_CCP3_# _init_ */
        Main_cTalker,                            /* #_CCP3B_# */
        3,                                       /* length of cTalker (n_cTalker) #_CCP4_# */
        Main_cTalker2_init_,                     /* #_CCP7_# _init_ */
        Main_cTalker2,                           /* #_CCP7B_# */
        &tTalkerSelector_CB_tab[0],              /* cTalkerSelector #_CCP2_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tMainArray_CB_tab[1]:  CompMain_Main id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rComposite_Talker0_eHello_des,          /* cDefaultTalker #_CCP1_# */
        rComposite_CompMain_Main_cTalker_init_,  /* #_CCP3_# _init_ */
        rComposite_CompMain_Main_cTalker,        /* #_CCP3B_# */
        3,                                       /* length of cTalker (n_cTalker) #_CCP4_# */
        rComposite_CompMain_Main_cTalker2_init_, /* #_CCP7_# _init_ */
        rComposite_CompMain_Main_cTalker2,       /* #_CCP7B_# */
        &tTalkerSelector_CB_tab[1],              /* cTalkerSelector #_CCP2_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tMainArray_eMain_DES Main_eMain_des;
const struct tag_tMainArray_eMain_DES Main_eMain_des = {
    &tMainArray_eMain_MT_,
    &tMainArray_INIB_tab[0],   /* INIB */
};
extern const struct tag_tMainArray_eMain_DES rComposite_CompMain_Main_eMain_des;
const struct tag_tMainArray_eMain_DES rComposite_CompMain_Main_eMain_des = {
    &tMainArray_eMain_MT_,
    &tMainArray_INIB_tab[1],   /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
tMainArray_CB_initialize()
{
    tMainArray_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
