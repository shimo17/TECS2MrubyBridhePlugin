/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sParamsSEND_TECSGEN_H
#define sParamsSEND_TECSGEN_H

/*
 * signature   :  sParamsSEND
 * global name :  sParamsSEND
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sParamsSEND_VDES {
    struct tag_sParamsSEND_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sParamsSEND_VMT {
    void           (*func10__T)( const struct tag_sParamsSEND_VDES *edp, char_t** str_array, int32_t len );
    void           (*func20__T)( const struct tag_sParamsSEND_VDES *edp, struct finfo* finfo, int32_t len );
    void           (*func21__T)( const struct tag_sParamsSEND_VDES *edp, struct finfo* finfo );
    void           (*funcA0__T)( const struct tag_sParamsSEND_VDES *edp, int8_t* buf, int32_t len );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sParamsSEND_Defined
#define  Descriptor_of_sParamsSEND_Defined
typedef struct { struct tag_sParamsSEND_VDES *vdes; } Descriptor( sParamsSEND );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SPARAMSSEND_FUNC10              (1)
#define	FUNCID_SPARAMSSEND_FUNC20              (2)
#define	FUNCID_SPARAMSSEND_FUNC21              (3)
#define	FUNCID_SPARAMSSEND_FUNCA0              (4)

#endif /* sParamsSEND_TECSGEN_H */
