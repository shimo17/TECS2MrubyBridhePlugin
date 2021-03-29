/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sParamsRECEIVE_TECSGEN_H
#define sParamsRECEIVE_TECSGEN_H

/*
 * signature   :  sParamsRECEIVE
 * global name :  sParamsRECEIVE
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sParamsRECEIVE_VDES {
    struct tag_sParamsRECEIVE_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sParamsRECEIVE_VMT {
    void           (*func00__T)( const struct tag_sParamsRECEIVE_VDES *edp, struct complex_number** dat );
    void           (*func11__T)( const struct tag_sParamsRECEIVE_VDES *edp, struct complex_number** dat );
    void           (*func20__T)( const struct tag_sParamsRECEIVE_VDES *edp, int32_t** array, int32_t* sz );
    void           (*func30__T)( const struct tag_sParamsRECEIVE_VDES *edp, char_t** str );
    void           (*func40__T)( const struct tag_sParamsRECEIVE_VDES *edp, char_t*** str );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sParamsRECEIVE_Defined
#define  Descriptor_of_sParamsRECEIVE_Defined
typedef struct { struct tag_sParamsRECEIVE_VDES *vdes; } Descriptor( sParamsRECEIVE );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SPARAMSRECEIVE_FUNC00           (1)
#define	FUNCID_SPARAMSRECEIVE_FUNC11           (2)
#define	FUNCID_SPARAMSRECEIVE_FUNC20           (3)
#define	FUNCID_SPARAMSRECEIVE_FUNC30           (4)
#define	FUNCID_SPARAMSRECEIVE_FUNC40           (5)

#endif /* sParamsRECEIVE_TECSGEN_H */
