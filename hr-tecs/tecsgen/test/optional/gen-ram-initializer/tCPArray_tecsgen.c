/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCPArray_tecsgen.h"
#include "tCPArray_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEnt */
struct tag_tCPArray_eEnt_DES {
    const struct tag_sSig_VMT *vmt;
    tCPArray_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEnt */
void           tCPArray_eEnt_func_skel( const struct tag_sSig_VDES *epd)
{
    struct tag_tCPArray_eEnt_DES *lepd
        = (struct tag_tCPArray_eEnt_DES *)epd;
    tCPArray_eEnt_func( lepd->idx );
}
int32_t        tCPArray_eEnt_func2_skel( const struct tag_sSig_VDES *epd, int32_t arg)
{
    struct tag_tCPArray_eEnt_DES *lepd
        = (struct tag_tCPArray_eEnt_DES *)epd;
    return tCPArray_eEnt_func2( lepd->idx, arg );
}
struct tagST   tCPArray_eEnt_func3_skel( const struct tag_sSig_VDES *epd, struct tagST a)
{
    struct tag_tCPArray_eEnt_DES *lepd
        = (struct tag_tCPArray_eEnt_DES *)epd;
    return tCPArray_eEnt_func3( lepd->idx, a );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEnt */
const struct tag_sSig_VMT tCPArray_eEnt_MT_ = {
    tCPArray_eEnt_func_skel,
    tCPArray_eEnt_func2_skel,
    tCPArray_eEnt_func3_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

extern struct tag_sSig_VDES SingleCellOptimizeCaller_eEnt_des;
extern struct tag_sSig_VDES VMTUselessOptimizeCaller_eEnt_des;

extern struct tag_sSig_VDES VMTUselessOptimizeCaller_eEnt_des;


/* 呼び口配列 #_CPA_# */
struct tag_sSig_VDES * const CPArray1_cCall[] = {
    0,
    0,
    0,
};

struct tag_sSig_VDES * const CPArray2_cCall[] = {
    &SingleCellOptimizeCaller_eEnt_des,
    &VMTUselessOptimizeCaller_eEnt_des,
    0,
};

struct tag_sSig_VDES * const CPArray3_cCall[] = {
    0,
    0,
    &VMTUselessOptimizeCaller_eEnt_des,
};

struct tag_sSig_VDES * const Comp_CPArray_cCall[] = {
    0,
    0,
    0,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCPArray_INIB tCPArray_INIB_tab[] = {
    /* cell: tCPArray_CB_tab[0]:  CPArray1 id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tCPArray_CB_tab[1]:  CPArray2 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        CPArray2_cCall,                          /* #_CCP3B_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tCPArray_CB_tab[2]:  CPArray3 id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        CPArray3_cCall,                          /* #_CCP3B_# */
        /* entry port #_EP_# */ 
    },
    /* cell: tCPArray_CB_tab[3]:  Comp_CPArray id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCPArray_eEnt_DES CPArray1_eEnt_des;
const struct tag_tCPArray_eEnt_DES CPArray1_eEnt_des = {
    &tCPArray_eEnt_MT_,
    &tCPArray_INIB_tab[0],   /* INIB */
};
extern const struct tag_tCPArray_eEnt_DES CPArray2_eEnt_des;
const struct tag_tCPArray_eEnt_DES CPArray2_eEnt_des = {
    &tCPArray_eEnt_MT_,
    &tCPArray_INIB_tab[1],   /* INIB */
};
extern const struct tag_tCPArray_eEnt_DES CPArray3_eEnt_des;
const struct tag_tCPArray_eEnt_DES CPArray3_eEnt_des = {
    &tCPArray_eEnt_MT_,
    &tCPArray_INIB_tab[2],   /* INIB */
};
extern const struct tag_tCPArray_eEnt_DES Comp_CPArray_eEnt_des;
const struct tag_tCPArray_eEnt_DES Comp_CPArray_eEnt_des = {
    &tCPArray_eEnt_MT_,
    &tCPArray_INIB_tab[3],   /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
tCPArray_CB_initialize()
{
    tCPArray_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
