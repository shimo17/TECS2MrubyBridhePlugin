/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef TOPPERS_sSyscall_TECSGEN_H
#define TOPPERS_sSyscall_TECSGEN_H

/*
 * signature   :  sSyscall
 * global name :  TOPPERS_sSyscall
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_TOPPERS_sSyscall_VDES {
    struct tag_TOPPERS_sSyscall_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_TOPPERS_sSyscall_VMT {
    ER_ID          (*cre_sem__T)( const struct tag_TOPPERS_sSyscall_VDES *edp );
    ER             (*wai_sem__T)( const struct tag_TOPPERS_sSyscall_VDES *edp, ID id );
    ER             (*rel_sem__T)( const struct tag_TOPPERS_sSyscall_VDES *edp, ID id );
    ER             (*del_sem__T)( const struct tag_TOPPERS_sSyscall_VDES *edp, ID id );
    ER             (*sendData__T)( const struct tag_TOPPERS_sSyscall_VDES *edp, int8_t* data, int32_t sz );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_TOPPERS_sSyscall_Defined
#define  Descriptor_of_TOPPERS_sSyscall_Defined
typedef struct { struct tag_TOPPERS_sSyscall_VDES *vdes; } Descriptor( TOPPERS_sSyscall );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_TOPPERS_SSYSCALL_CRE_SEM        (1)
#define	FUNCID_TOPPERS_SSYSCALL_WAI_SEM        (2)
#define	FUNCID_TOPPERS_SSYSCALL_REL_SEM        (3)
#define	FUNCID_TOPPERS_SSYSCALL_DEL_SEM        (4)
#define	FUNCID_TOPPERS_SSYSCALL_SENDDATA       (5)

#endif /* TOPPERS_sSyscall_TECSGEN_H */
