/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSimple_TECSGEN_H
#define sSimple_TECSGEN_H

/*
 * signature   :  sSimple
 * global name :  sSimple
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSimple_VDES {
    struct tag_sSimple_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSimple_VMT {
    ER             (*onewayPtr__T)( const struct tag_sSimple_VDES *edp, const uint32_t* in );
    ER             (*onewayArray__T)( const struct tag_sSimple_VDES *edp, const uint32_t* in, int32_t len );
    ER             (*onewayDoubleArray__T)( const struct tag_sSimple_VDES *edp, const int32_t* in, int32_t len, const int32_t* in2, int32_t len2 );
    ER             (*onewayStringArray__T)( const struct tag_sSimple_VDES *edp, const char_t** in, int32_t len );
    ER             (*onewayString__T)( const struct tag_sSimple_VDES *edp, const char_t* in, int32_t len );
    ER             (*onewayStruct__T)( const struct tag_sSimple_VDES *edp, const struct stA* a );
    ER             (*onewayStruct2__T)( const struct tag_sSimple_VDES *edp, const struct stA* a, int32_t len );
    ER             (*onewayInArray__T)( const struct tag_sSimple_VDES *edp, int8_t array0[8] );
    ER             (*onewayInArray2__T)( const struct tag_sSimple_VDES *edp, const int8_t(* array1)[8] );
    ER             (*onewayNulable__T)( const struct tag_sSimple_VDES *edp, const int8_t(* array)[3] );
    void           (*exit__T)( const struct tag_sSimple_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSimple_Defined
#define  Descriptor_of_sSimple_Defined
typedef struct { struct tag_sSimple_VDES *vdes; } Descriptor( sSimple );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIMPLE_ONEWAYPTR               (1)
#define	FUNCID_SSIMPLE_ONEWAYARRAY             (2)
#define	FUNCID_SSIMPLE_ONEWAYDOUBLEARRAY       (3)
#define	FUNCID_SSIMPLE_ONEWAYSTRINGARRAY       (4)
#define	FUNCID_SSIMPLE_ONEWAYSTRING            (5)
#define	FUNCID_SSIMPLE_ONEWAYSTRUCT            (6)
#define	FUNCID_SSIMPLE_ONEWAYSTRUCT2           (7)
#define	FUNCID_SSIMPLE_ONEWAYINARRAY           (8)
#define	FUNCID_SSIMPLE_ONEWAYINARRAY2          (9)
#define	FUNCID_SSIMPLE_ONEWAYNULABLE           (10)
#define	FUNCID_SSIMPLE_EXIT                    (11)

#endif /* sSimple_TECSGEN_H */
