/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sAlarm_TECSGEN_H
#define sAlarm_TECSGEN_H

/*
 * signature   :  sAlarm
 * global name :  sAlarm
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sAlarm_VDES {
    struct tag_sAlarm_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sAlarm_VMT {
    uint8_t        (*getBase__T)( const struct tag_sAlarm_VDES *edp, uint8_t* p_info );
    uint8_t        (*get__T)( const struct tag_sAlarm_VDES *edp, uint8_t* p_tick );
    uint8_t        (*setRelative__T)( const struct tag_sAlarm_VDES *edp, uint8_t incr, uint8_t cycle );
    uint8_t        (*setAbsolute__T)( const struct tag_sAlarm_VDES *edp, uint8_t start, uint8_t cycle );
    uint8_t        (*cancel__T)( const struct tag_sAlarm_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sAlarm_Defined
#define  Descriptor_of_sAlarm_Defined
typedef struct { struct tag_sAlarm_VDES *vdes; } Descriptor( sAlarm );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SALARM_GETBASE                  (1)
#define	FUNCID_SALARM_GET                      (2)
#define	FUNCID_SALARM_SETRELATIVE              (3)
#define	FUNCID_SALARM_SETABSOLUTE              (4)
#define	FUNCID_SALARM_CANCEL                   (5)

#endif /* sAlarm_TECSGEN_H */
