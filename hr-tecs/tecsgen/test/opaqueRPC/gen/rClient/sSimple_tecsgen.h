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
    ER             (*func6__T)( const struct tag_sSimple_VDES *edp, const int8_t array[64] );
    ER             (*func7__T)( const struct tag_sSimple_VDES *edp, const int8_t array2[64][4] );
    ER             (*func8__T)( const struct tag_sSimple_VDES *edp, const STA arraySt[2] );
    ER             (*func9__T)( const struct tag_sSimple_VDES *edp, const STA* arraySt[2] );
    ER             (*func10__T)( const struct tag_sSimple_VDES *edp, int32_t* val );
    ER             (*func11__T)( const struct tag_sSimple_VDES *edp, char_t* msg, int32_t len );
    ER             (*func12__T)( const struct tag_sSimple_VDES *edp, char_t** msg );
    ER             (*func13__T)( const struct tag_sSimple_VDES *edp, STB* sta, int32_t len );
    ER             (*func14__T)( const struct tag_sSimple_VDES *edp, STB** sta, int32_t len );
    ER             (*func15__T)( const struct tag_sSimple_VDES *edp, int8_t(* array1)[64] );
    ER             (*func16__T)( const struct tag_sSimple_VDES *edp, int8_t* array, int16_t* sz );
    ER             (*func40__T)( const struct tag_sSimple_VDES *edp, int32_t* val );
    ER             (*func41__T)( const struct tag_sSimple_VDES *edp, char_t* msg, int32_t len );
    ER             (*func42__T)( const struct tag_sSimple_VDES *edp, char_t** msg );
    ER             (*func43__T)( const struct tag_sSimple_VDES *edp, STA* sta, int32_t len );
    ER             (*func44__T)( const struct tag_sSimple_VDES *edp, int8_t* array, int32_t* len );
    ER             (*func21__T)( const struct tag_sSimple_VDES *edp, int32_t* a );
    ER             (*func22__T)( const struct tag_sSimple_VDES *edp, STA* sta );
    ER             (*func23__T)( const struct tag_sSimple_VDES *edp, char_t* str );
    ER             (*func24__T)( const struct tag_sSimple_VDES *edp, char_t* msg, int32_t len );
    ER             (*func25__T)( const struct tag_sSimple_VDES *edp, char_t** msg, int32_t len );
    ER             (*func26__T)( const struct tag_sSimple_VDES *edp, STA** sta, int32_t len );
    ER             (*func27__T)( const struct tag_sSimple_VDES *edp, int8_t(* array2)[64] );
    ER             (*func31__T)( const struct tag_sSimple_VDES *edp, int32_t** a );
    ER             (*func32__T)( const struct tag_sSimple_VDES *edp, STA** sta );
    ER             (*func33__T)( const struct tag_sSimple_VDES *edp, char_t** str );
    ER             (*func34__T)( const struct tag_sSimple_VDES *edp, char_t** msg, int32_t* len );
    ER             (*func35__T)( const struct tag_sSimple_VDES *edp, char_t*** msg, int32_t* len, int32_t* msglen );
    ER             (*func36__T)( const struct tag_sSimple_VDES *edp, STA** sta, int32_t* len );
    ER             (*func37__T)( const struct tag_sSimple_VDES *edp, STA*** sta, int32_t* len );
    ER             (*func38__T)( const struct tag_sSimple_VDES *edp, int8_t(** array2)[64] );
    ER             (*func39__T)( const struct tag_sSimple_VDES *edp, STA*(** arraySt)[2] );
    ER             (*func50__T)( const struct tag_sSimple_VDES *edp, int_t i, short_t s, long_t l );
    ER             (*func51__T)( const struct tag_sSimple_VDES *edp, uint_t i, ushort_t s, ulong_t l );
    ER             (*func52__T)( const struct tag_sSimple_VDES *edp, int_t* i, short_t* s, long_t* l );
    ER             (*func53__T)( const struct tag_sSimple_VDES *edp, uint_t* i, ushort_t* s, ulong_t* l );
    ER             (*func54__T)( const struct tag_sSimple_VDES *edp, char_t c, schar_t sc, uchar_t uc );
    ER             (*func55__T)( const struct tag_sSimple_VDES *edp, char_t* c, schar_t* sc, uchar_t* uc );
    ER             (*func56__T)( const struct tag_sSimple_VDES *edp, intptr_t ip, intptr_t* op );
    ER             (*func60__T)( const struct tag_sSimple_VDES *edp, intptr_t ip, intptr_t* op );
    ER             (*func61__T)( const struct tag_sSimple_VDES *edp, const int32_t* ip, intptr_t* op );
    ER             (*func62__T)( const struct tag_sSimple_VDES *edp, int32_t* iop );
    ER             (*func63__T)( const struct tag_sSimple_VDES *edp, int32_t* sp );
    ER             (*func64__T)( const struct tag_sSimple_VDES *edp, int32_t** rp, bool_t b_zero );
    ER             (*func70__T)( const struct tag_sSimple_VDES *edp, STA* sta );
    ER             (*func71__T)( const struct tag_sSimple_VDES *edp, char_t* str );
    ER             (*func72__T)( const struct tag_sSimple_VDES *edp, STA** sta, bool_t b_zero );
    ER             (*func73__T)( const struct tag_sSimple_VDES *edp, char_t** str, bool_t b_zero );
    ER             (*func80__T)( const struct tag_sSimple_VDES *edp, float32_t val );
    ER             (*func81__T)( const struct tag_sSimple_VDES *edp, float32_t* val );
    ER             (*func82__T)( const struct tag_sSimple_VDES *edp, double64_t val );
    ER             (*func83__T)( const struct tag_sSimple_VDES *edp, double64_t* val );
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
#define	FUNCID_SSIMPLE_FUNC16                  (17)
#define	FUNCID_SSIMPLE_FUNC40                  (18)
#define	FUNCID_SSIMPLE_FUNC41                  (19)
#define	FUNCID_SSIMPLE_FUNC42                  (20)
#define	FUNCID_SSIMPLE_FUNC43                  (21)
#define	FUNCID_SSIMPLE_FUNC44                  (22)
#define	FUNCID_SSIMPLE_FUNC21                  (23)
#define	FUNCID_SSIMPLE_FUNC22                  (24)
#define	FUNCID_SSIMPLE_FUNC23                  (25)
#define	FUNCID_SSIMPLE_FUNC24                  (26)
#define	FUNCID_SSIMPLE_FUNC25                  (27)
#define	FUNCID_SSIMPLE_FUNC26                  (28)
#define	FUNCID_SSIMPLE_FUNC27                  (29)
#define	FUNCID_SSIMPLE_FUNC31                  (30)
#define	FUNCID_SSIMPLE_FUNC32                  (31)
#define	FUNCID_SSIMPLE_FUNC33                  (32)
#define	FUNCID_SSIMPLE_FUNC34                  (33)
#define	FUNCID_SSIMPLE_FUNC35                  (34)
#define	FUNCID_SSIMPLE_FUNC36                  (35)
#define	FUNCID_SSIMPLE_FUNC37                  (36)
#define	FUNCID_SSIMPLE_FUNC38                  (37)
#define	FUNCID_SSIMPLE_FUNC39                  (38)
#define	FUNCID_SSIMPLE_FUNC50                  (39)
#define	FUNCID_SSIMPLE_FUNC51                  (40)
#define	FUNCID_SSIMPLE_FUNC52                  (41)
#define	FUNCID_SSIMPLE_FUNC53                  (42)
#define	FUNCID_SSIMPLE_FUNC54                  (43)
#define	FUNCID_SSIMPLE_FUNC55                  (44)
#define	FUNCID_SSIMPLE_FUNC56                  (45)
#define	FUNCID_SSIMPLE_FUNC60                  (46)
#define	FUNCID_SSIMPLE_FUNC61                  (47)
#define	FUNCID_SSIMPLE_FUNC62                  (48)
#define	FUNCID_SSIMPLE_FUNC63                  (49)
#define	FUNCID_SSIMPLE_FUNC64                  (50)
#define	FUNCID_SSIMPLE_FUNC70                  (51)
#define	FUNCID_SSIMPLE_FUNC71                  (52)
#define	FUNCID_SSIMPLE_FUNC72                  (53)
#define	FUNCID_SSIMPLE_FUNC73                  (54)
#define	FUNCID_SSIMPLE_FUNC80                  (55)
#define	FUNCID_SSIMPLE_FUNC81                  (56)
#define	FUNCID_SSIMPLE_FUNC82                  (57)
#define	FUNCID_SSIMPLE_FUNC83                  (58)

#endif /* sSimple_TECSGEN_H */
