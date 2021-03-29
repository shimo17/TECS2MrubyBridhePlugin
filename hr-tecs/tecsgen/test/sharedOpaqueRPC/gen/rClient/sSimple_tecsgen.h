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
    void           (*shutdown__T)( const struct tag_sSimple_VDES *edp );
    ER             (*func1__T)( const struct tag_sSimple_VDES *edp, int32_t inval );
    ER             (*func2__T)( const struct tag_sSimple_VDES *edp, const char_t* str );
    ER             (*func3__T)( const struct tag_sSimple_VDES *edp, const char_t* msg, int32_t len );
    ER             (*func4__T)( const struct tag_sSimple_VDES *edp, const char_t** msg, int32_t len );
    ER             (*func5__T)( const struct tag_sSimple_VDES *edp, const STA** sta, int32_t len );
    ER             (*func6__T)( const struct tag_sSimple_VDES *edp, const int8_t array[8] );
    ER             (*func7__T)( const struct tag_sSimple_VDES *edp, const int8_t array2[8][4] );
    ER             (*func8__T)( const struct tag_sSimple_VDES *edp, const STA arraySt[2] );
    ER             (*func9__T)( const struct tag_sSimple_VDES *edp, const STA* arraySt[2] );
    ER             (*func10__T)( const struct tag_sSimple_VDES *edp, int32_t* val );
    ER             (*func11__T)( const struct tag_sSimple_VDES *edp, char_t* msg, int32_t len );
    ER             (*func12__T)( const struct tag_sSimple_VDES *edp, char_t** msg );
    ER             (*func13__T)( const struct tag_sSimple_VDES *edp, STB* sta, int32_t len );
    ER             (*func14__T)( const struct tag_sSimple_VDES *edp, STB** sta, int32_t len );
    ER             (*func15__T)( const struct tag_sSimple_VDES *edp, int8_t(* array1)[8] );
    ER             (*func40__T)( const struct tag_sSimple_VDES *edp, int32_t* val );
    ER             (*func41__T)( const struct tag_sSimple_VDES *edp, char_t* msg, int32_t len );
    ER             (*func42__T)( const struct tag_sSimple_VDES *edp, char_t** msg );
    ER             (*func43__T)( const struct tag_sSimple_VDES *edp, STA* sta, int32_t len );
    ER             (*func21__T)( const struct tag_sSimple_VDES *edp, int32_t* a );
    ER             (*func22__T)( const struct tag_sSimple_VDES *edp, STA* sta );
    ER             (*func23__T)( const struct tag_sSimple_VDES *edp, char_t* str );
    ER             (*func24__T)( const struct tag_sSimple_VDES *edp, char_t* msg, int32_t len );
    ER             (*func25__T)( const struct tag_sSimple_VDES *edp, char_t** msg, int32_t len );
    ER             (*func26__T)( const struct tag_sSimple_VDES *edp, STA** sta, int32_t len );
    ER             (*func27__T)( const struct tag_sSimple_VDES *edp, int8_t(* array2)[8] );
    ER             (*func31__T)( const struct tag_sSimple_VDES *edp, int32_t** a );
    ER             (*func32__T)( const struct tag_sSimple_VDES *edp, STA** sta );
    ER             (*func33__T)( const struct tag_sSimple_VDES *edp, char_t** str );
    ER             (*func34__T)( const struct tag_sSimple_VDES *edp, char_t** msg, int32_t* len );
    ER             (*func35__T)( const struct tag_sSimple_VDES *edp, char_t*** msg, int32_t* len, int32_t* msglen );
    ER             (*func36__T)( const struct tag_sSimple_VDES *edp, STA** sta, int32_t* len );
    ER             (*func37__T)( const struct tag_sSimple_VDES *edp, STA*** sta, int32_t* len );
    ER             (*func38__T)( const struct tag_sSimple_VDES *edp, int8_t(** array2)[8] );
    ER             (*func39__T)( const struct tag_sSimple_VDES *edp, STA*(** arraySt)[2] );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSimple_Defined
#define  Descriptor_of_sSimple_Defined
typedef struct { struct tag_sSimple_VDES *vdes; } Descriptor( sSimple );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIMPLE_SHUTDOWN                (1)
#define	FUNCID_SSIMPLE_FUNC1                   (2)
#define	FUNCID_SSIMPLE_FUNC2                   (3)
#define	FUNCID_SSIMPLE_FUNC3                   (4)
#define	FUNCID_SSIMPLE_FUNC4                   (5)
#define	FUNCID_SSIMPLE_FUNC5                   (6)
#define	FUNCID_SSIMPLE_FUNC6                   (7)
#define	FUNCID_SSIMPLE_FUNC7                   (8)
#define	FUNCID_SSIMPLE_FUNC8                   (9)
#define	FUNCID_SSIMPLE_FUNC9                   (10)
#define	FUNCID_SSIMPLE_FUNC10                  (11)
#define	FUNCID_SSIMPLE_FUNC11                  (12)
#define	FUNCID_SSIMPLE_FUNC12                  (13)
#define	FUNCID_SSIMPLE_FUNC13                  (14)
#define	FUNCID_SSIMPLE_FUNC14                  (15)
#define	FUNCID_SSIMPLE_FUNC15                  (16)
#define	FUNCID_SSIMPLE_FUNC40                  (17)
#define	FUNCID_SSIMPLE_FUNC41                  (18)
#define	FUNCID_SSIMPLE_FUNC42                  (19)
#define	FUNCID_SSIMPLE_FUNC43                  (20)
#define	FUNCID_SSIMPLE_FUNC21                  (21)
#define	FUNCID_SSIMPLE_FUNC22                  (22)
#define	FUNCID_SSIMPLE_FUNC23                  (23)
#define	FUNCID_SSIMPLE_FUNC24                  (24)
#define	FUNCID_SSIMPLE_FUNC25                  (25)
#define	FUNCID_SSIMPLE_FUNC26                  (26)
#define	FUNCID_SSIMPLE_FUNC27                  (27)
#define	FUNCID_SSIMPLE_FUNC31                  (28)
#define	FUNCID_SSIMPLE_FUNC32                  (29)
#define	FUNCID_SSIMPLE_FUNC33                  (30)
#define	FUNCID_SSIMPLE_FUNC34                  (31)
#define	FUNCID_SSIMPLE_FUNC35                  (32)
#define	FUNCID_SSIMPLE_FUNC36                  (33)
#define	FUNCID_SSIMPLE_FUNC37                  (34)
#define	FUNCID_SSIMPLE_FUNC38                  (35)
#define	FUNCID_SSIMPLE_FUNC39                  (36)

#endif /* sSimple_TECSGEN_H */
