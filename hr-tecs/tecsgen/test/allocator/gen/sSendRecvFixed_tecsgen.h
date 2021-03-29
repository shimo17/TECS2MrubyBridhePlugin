/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSendRecvFixed_TECSGEN_H
#define sSendRecvFixed_TECSGEN_H

/*
 * signature   :  sSendRecvFixed
 * global name :  sSendRecvFixed
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSendRecvFixed_VDES {
    struct tag_sSendRecvFixed_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSendRecvFixed_VMT {
    ER             (*snd__T)( const struct tag_sSendRecvFixed_VDES *edp, int8_t* buf, int32_t sz );
    ER             (*rcv__T)( const struct tag_sSendRecvFixed_VDES *edp, int8_t** buf, int32_t* sz );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSendRecvFixed_Defined
#define  Descriptor_of_sSendRecvFixed_Defined
typedef struct { struct tag_sSendRecvFixed_VDES *vdes; } Descriptor( sSendRecvFixed );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSENDRECVFIXED_SND              (1)
#define	FUNCID_SSENDRECVFIXED_RCV              (2)

#endif /* sSendRecvFixed_TECSGEN_H */
