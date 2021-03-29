/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sParamsIN_TECSGEN_H
#define sParamsIN_TECSGEN_H

/*
 * signature   :  sParamsIN
 * global name :  sParamsIN
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sParamsIN_VDES {
    struct tag_sParamsIN_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sParamsIN_VMT {
    void           (*func10__T)( const struct tag_sParamsIN_VDES *edp, const int16_t* wstr );
    void           (*func21__T)( const struct tag_sParamsIN_VDES *edp, const int32_t* array );
    void           (*func22__T)( const struct tag_sParamsIN_VDES *edp, const int32_t array[4] );
    void           (*func23__T)( const struct tag_sParamsIN_VDES *edp, const int32_t(* array)[4] );
    void           (*func24__T)( const struct tag_sParamsIN_VDES *edp, const int32_t* array[4] );
    void           (*func30__T)( const struct tag_sParamsIN_VDES *edp, const int16_t** str, int32_t sz );
    void           (*func31__T)( const struct tag_sParamsIN_VDES *edp, const int8_t*** str, int32_t sz );
    void           (*func41__T)( const struct tag_sParamsIN_VDES *edp, const int64_t(* array2D)[4] );
    void           (*func42__T)( const struct tag_sParamsIN_VDES *edp, const int64_t(* array2D)[4][4] );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sParamsIN_Defined
#define  Descriptor_of_sParamsIN_Defined
typedef struct { struct tag_sParamsIN_VDES *vdes; } Descriptor( sParamsIN );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SPARAMSIN_FUNC10                (1)
#define	FUNCID_SPARAMSIN_FUNC21                (2)
#define	FUNCID_SPARAMSIN_FUNC22                (3)
#define	FUNCID_SPARAMSIN_FUNC23                (4)
#define	FUNCID_SPARAMSIN_FUNC24                (5)
#define	FUNCID_SPARAMSIN_FUNC30                (6)
#define	FUNCID_SPARAMSIN_FUNC31                (7)
#define	FUNCID_SPARAMSIN_FUNC41                (8)
#define	FUNCID_SPARAMSIN_FUNC42                (9)

#endif /* sParamsIN_TECSGEN_H */
