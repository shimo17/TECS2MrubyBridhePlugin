/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sParamsOUT_TECSGEN_H
#define sParamsOUT_TECSGEN_H

/*
 * signature   :  sParamsOUT
 * global name :  sParamsOUT
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sParamsOUT_VDES {
    struct tag_sParamsOUT_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sParamsOUT_VMT {
    void           (*func00__T)( const struct tag_sParamsOUT_VDES *edp, int16_t* wstr );
    void           (*func10__T)( const struct tag_sParamsOUT_VDES *edp, int16_t* wstr );
    void           (*func21__T)( const struct tag_sParamsOUT_VDES *edp, int32_t* array );
    void           (*func23__T)( const struct tag_sParamsOUT_VDES *edp, int32_t(* array)[4] );
    void           (*func30__T)( const struct tag_sParamsOUT_VDES *edp, int16_t** str, int32_t sz );
    void           (*func31__T)( const struct tag_sParamsOUT_VDES *edp, int8_t*** str, int32_t sz );
    void           (*func41__T)( const struct tag_sParamsOUT_VDES *edp, int64_t(* array2D)[4] );
    void           (*func42__T)( const struct tag_sParamsOUT_VDES *edp, int64_t(* array2D)[4][4] );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sParamsOUT_Defined
#define  Descriptor_of_sParamsOUT_Defined
typedef struct { struct tag_sParamsOUT_VDES *vdes; } Descriptor( sParamsOUT );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SPARAMSOUT_FUNC00               (1)
#define	FUNCID_SPARAMSOUT_FUNC10               (2)
#define	FUNCID_SPARAMSOUT_FUNC21               (3)
#define	FUNCID_SPARAMSOUT_FUNC23               (4)
#define	FUNCID_SPARAMSOUT_FUNC30               (5)
#define	FUNCID_SPARAMSOUT_FUNC31               (6)
#define	FUNCID_SPARAMSOUT_FUNC41               (7)
#define	FUNCID_SPARAMSOUT_FUNC42               (8)

#endif /* sParamsOUT_TECSGEN_H */
