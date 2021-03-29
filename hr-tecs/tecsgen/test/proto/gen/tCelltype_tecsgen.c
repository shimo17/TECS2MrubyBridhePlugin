/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCelltype_tecsgen.h"
#include "tCelltype_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eBody : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eBody : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eBody : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig_VDES Cell3_eEnt_des;
extern struct tag_sSig_VDES Cell4_eEnt_des;
extern struct tag_sSig_VDES Cell4_eEnt2_des2;
extern struct tag_sSig_VDES Cell4_eEnt2_des1;
extern struct tag_sAlloc_VDES Allocator_eAlloc_des;
extern struct tag_sAlloc_VDES Allocator_eAlloc_des;

extern struct tag_sSig_VDES Cell2_eEnt_des;
extern struct tag_sSig_VDES Cell3_eEnt_des;
extern struct tag_sSig_VDES Cell3_eEnt_des;
extern struct tag_sAlloc_VDES Allocator_eAlloc_des;
extern struct tag_sAlloc_VDES Allocator_eAlloc_des;

/* 呼び口配列 #_CPA_# */
struct tag_sSig_VDES * const Cell_cCall2[] = {
    &Cell3_eEnt_des,
    &Cell4_eEnt_des,
    &Cell4_eEnt2_des2,
};
struct tag_sAlloc_VDES * const Cell_cCall2_Send_buf[] = {
    &Allocator_eAlloc_des,
    &Allocator_eAlloc_des,
};

struct tag_sSig_VDES * const CompCell_Cell_cCall2[] = {
    &Cell3_eEnt_des,
    &Cell3_eEnt_des,
};
struct tag_sAlloc_VDES * const CompCell_Cell_cCall2_Send_buf[] = {
    &Allocator_eAlloc_des,
    &Allocator_eAlloc_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCelltype_INIB tCelltype_INIB_tab[] = {
    /* cell: tCelltype_CB_tab[0]:  Cell id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &Cell4_eEnt2_des1,                       /* cCall #_CCP0_# */
        Cell_cCall2,                             /* #_CCP3B_# */
        3,                                       /* length of cCall2 (n_cCall2) #_CCP4_# */
        Cell_cCall2_Send_buf,                    /* #_CCP3B_# */
        2,                                       /* length of cCall2_Send_buf (n_cCall2_Send_buf) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        0,                                       /* attr1 */
        0,                                       /* attr2 */
        0,                                       /* attr3 */
        0,                                       /* attr4 */
    },
    /* cell: tCelltype_CB_tab[1]:  CompCell_Cell id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &Cell2_eEnt_des,                         /* cCall #_CCP1_# */
        CompCell_Cell_cCall2,                    /* #_CCP3B_# */
        2,                                       /* length of cCall2 (n_cCall2) #_CCP4_# */
        CompCell_Cell_cCall2_Send_buf,           /* #_CCP3B_# */
        2,                                       /* length of cCall2_Send_buf (n_cCall2_Send_buf) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        0,                                       /* attr1 */
        0,                                       /* attr2 */
        0,                                       /* attr3 */
        0,                                       /* attr4 */
    },
};

/* セル CB #_CB_# */
struct tag_tCelltype_CB tCelltype_CB_tab[] = {
    /* cell: tCelltype_CB_tab[0]:  Cell id=1 */
    {
        &tCelltype_INIB_tab[0],                  /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        0,                                       /* var1 */
        0,                                       /* var2 */
        0,                                       /* var3 */
        0,                                       /* var4 */
    },
    /* cell: tCelltype_CB_tab[1]:  CompCell_Cell id=2 */
    {
        &tCelltype_INIB_tab[1],                  /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        0,                                       /* var1 */
        0,                                       /* var2 */
        0,                                       /* var3 */
        0,                                       /* var4 */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eBody : omitted by entry port optimize */
/* eBody : omitted by entry port optimize */
