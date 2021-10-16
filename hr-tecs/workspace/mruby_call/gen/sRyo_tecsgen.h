/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sRyo_TECSGEN_H
#define sRyo_TECSGEN_H

/*
 * signature   :  sRyo
 * global name :  sRyo
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sRyo_VDES {
    struct tag_sRyo_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sRyo_VMT {
    void           (*hyoji__T)( const struct tag_sRyo_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sRyo_Defined
#define  Descriptor_of_sRyo_Defined
typedef struct { struct tag_sRyo_VDES *vdes; } Descriptor( sRyo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SRYO_HYOJI                      (1)

#endif /* sRyo_TECSGEN_H */
