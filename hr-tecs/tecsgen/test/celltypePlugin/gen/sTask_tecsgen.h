/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sTask_TECSGEN_H
#define sTask_TECSGEN_H

/*
 * signature   :  sTask
 * global name :  sTask
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sTask_VDES {
    struct tag_sTask_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sTask_VMT {
    uint8_t        (*activate__T)( const struct tag_sTask_VDES *edp );
    uint8_t        (*terminate__T)( const struct tag_sTask_VDES *edp );
    uint8_t        (*chain__T)( const struct tag_sTask_VDES *edp, uint8_t tskid );
    uint8_t        (*getId__T)( const struct tag_sTask_VDES *edp, uint8_t* p_tskid );
    uint8_t        (*getState__T)( const struct tag_sTask_VDES *edp, uint8_t* p_state );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sTask_Defined
#define  Descriptor_of_sTask_Defined
typedef struct { struct tag_sTask_VDES *vdes; } Descriptor( sTask );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STASK_ACTIVATE                  (1)
#define	FUNCID_STASK_TERMINATE                 (2)
#define	FUNCID_STASK_CHAIN                     (3)
#define	FUNCID_STASK_GETID                     (4)
#define	FUNCID_STASK_GETSTATE                  (5)

#endif /* sTask_TECSGEN_H */
