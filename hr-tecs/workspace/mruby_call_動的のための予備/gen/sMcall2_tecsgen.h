/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sMcall2_TECSGEN_H
#define sMcall2_TECSGEN_H

/*
 * signature   :  sMcall2
 * global name :  sMcall2
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sMcall2_VDES {
    struct tag_sMcall2_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sMcall2_VMT {
    void           (*hyoji__T)( const struct tag_sMcall2_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sMcall2_Defined
#define  Descriptor_of_sMcall2_Defined
typedef struct { struct tag_sMcall2_VDES *vdes; } Descriptor( sMcall2 );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SMCALL2_HYOJI                   (1)

#endif /* sMcall2_TECSGEN_H */
