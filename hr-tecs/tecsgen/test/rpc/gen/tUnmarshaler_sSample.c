/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cServerCall signature: sSample context:task
 *   ER             cServerCall_sayHello( int32_t times );
 *   ER             cServerCall_howAreYou( char_t* buf, int32_t len );
 *   ER             cServerCall_giftToYou( char_t* buf, int32_t len );
 *   ER             cServerCall_returnGiftFromYou( int16_t** buf, int32_t* len );
 *   ER             cServerCall_transferStruct( const struct stA* a, int32_t len );
 *   ER             cServerCall_transferStruct2( struct stA a );
 *   ER             cServerCall_transferInArray( int8_t array0[8] );
 *   ER             cServerCall_transferInArray2( const int8_t(* array1)[8] );
 *   ER             cServerCall_transferOutArray( int8_t(* array2)[8] );
 *   unsigned char  cServerCall_UnsignedTypes( uint8_t in, unsigned short s, uint_t ui, ulong_t ul );
 *   char           cServerCall_SignedTypes( int8_t in, short s, int_t ui, long_t ul );
 *   ER             cServerCall_onewayFunc( char_t* buf, int32_t len );
 *   void           cServerCall_exit( );
 * call port: cTDR signature: sTDR context:task
 *   ER             cTDR_reset( );
 *   ER             cTDR_sendSOP( bool_t b_client );
 *   ER             cTDR_receiveSOP( bool_t b_client );
 *   ER             cTDR_sendEOP( bool_t b_continue );
 *   ER             cTDR_receiveEOP( bool_t b_continue );
 *   ER             cTDR_putInt8( int8_t in );
 *   ER             cTDR_putInt16( int16_t in );
 *   ER             cTDR_putInt32( int32_t in );
 *   ER             cTDR_putInt64( int64_t in );
 *   ER             cTDR_putInt128( int128_t in );
 *   ER             cTDR_getInt8( int8_t* out );
 *   ER             cTDR_getInt16( int16_t* out );
 *   ER             cTDR_getInt32( int32_t* out );
 *   ER             cTDR_getInt64( int64_t* out );
 *   ER             cTDR_getInt128( int128_t* out );
 *   ER             cTDR_putUInt8( uint8_t in );
 *   ER             cTDR_putUInt16( uint16_t in );
 *   ER             cTDR_putUInt32( uint32_t in );
 *   ER             cTDR_putUInt64( uint64_t in );
 *   ER             cTDR_putUInt128( uint128_t in );
 *   ER             cTDR_getUInt8( uint8_t* out );
 *   ER             cTDR_getUInt16( uint16_t* out );
 *   ER             cTDR_getUInt32( uint32_t* out );
 *   ER             cTDR_getUInt64( uint64_t* out );
 *   ER             cTDR_getUInt128( uint128_t* out );
 *   ER             cTDR_putChar( char_t in );
 *   ER             cTDR_getChar( char_t* out );
 *   ER             cTDR_putBool( bool_t in );
 *   ER             cTDR_getBool( bool_t* out );
 *   ER             cTDR_putFloat32( float32_t in );
 *   ER             cTDR_putDouble64( double64_t in );
 *   ER             cTDR_getFloat32( float32_t* out );
 *   ER             cTDR_getDouble64( double64_t* out );
 *   ER             cTDR_putSChar( schar_t in );
 *   ER             cTDR_putShort( short_t in );
 *   ER             cTDR_putInt( int_t in );
 *   ER             cTDR_putLong( long_t in );
 *   ER             cTDR_getSChar( schar_t* out );
 *   ER             cTDR_getShort( short_t* out );
 *   ER             cTDR_getInt( int_t* out );
 *   ER             cTDR_getLong( long_t* out );
 *   ER             cTDR_putUChar( uchar_t in );
 *   ER             cTDR_putUShort( ushort_t in );
 *   ER             cTDR_putUInt( uint_t in );
 *   ER             cTDR_putULong( ulong_t in );
 *   ER             cTDR_getUChar( unsigned char* out );
 *   ER             cTDR_getUShort( ushort_t* out );
 *   ER             cTDR_getUInt( uint_t* out );
 *   ER             cTDR_getULong( ulong_t* out );
 *   ER             cTDR_putIntptr( const intptr_t ptr );
 *   ER             cTDR_getIntptr( intptr_t* ptr );
 * call port: cEventflag signature: sEventflag context:task
 *   ER             cEventflag_set( FLGPTN set_pattern );
 *   ER             cEventflag_clear( FLGPTN clear_pattern );
 *   ER             cEventflag_wait( FLGPTN wait_pattern, MODE wait_flag_mode, FLGPTN* p_flag_pattern );
 *   ER             cEventflag_waitPolling( FLGPTN wait_pattern, MODE wait_flag_mode, FLGPTN* p_flag_pattern );
 *   ER             cEventflag_waitTimeout( FLGPTN wait_pattern, MODE wait_flag_mode, FLGPTN* p_flag_pattern, TMO timeout );
 *   ER             cEventflag_initialize( );
 *   ER             cEventflag_refer( T_RFLG* pk_eventflag_status );
 * call port: cPPAllocator signature: sPPAllocator context:task
 *   ER             cPPAllocator_alloc( uint32_t size, void** ptr );
 *   ER             cPPAllocator_dealloc( const void* ptr );
 *   ER             cPPAllocator_dealloc_all( );
 * allocator port for call port:cServerCall func:giftToYou param: buf
 *   ER             cServerCall_giftToYou_buf_alloc( int32_t size, void** p );
 *   ER             cServerCall_giftToYou_buf_dealloc( const void* ptr );
 * allocator port for call port:cServerCall func:returnGiftFromYou param: buf
 *   ER             cServerCall_returnGiftFromYou_buf_alloc( int32_t size, void** p );
 *   ER             cServerCall_returnGiftFromYou_buf_dealloc( const void* ptr );
 * allocator port for call port:cServerCall func:onewayFunc param: buf
 *   ER             cServerCall_onewayFunc_buf_alloc( int32_t size, void** p );
 *   ER             cServerCall_onewayFunc_buf_dealloc( const void* ptr );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tUnmarshaler_sSample_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* アンマーシャラ関数のプロトタイプ宣言 */
static ER  tTransparentUnmarshaler_sSample_sayHello();	/* func_id: 1 */
static ER  tTransparentUnmarshaler_sSample_howAreYou();	/* func_id: 2 */
static ER  tTransparentUnmarshaler_sSample_giftToYou();	/* func_id: 3 */
static ER  tTransparentUnmarshaler_sSample_returnGiftFromYou();	/* func_id: 4 */
static ER  tTransparentUnmarshaler_sSample_transferStruct();	/* func_id: 5 */
static ER  tTransparentUnmarshaler_sSample_transferStruct2();	/* func_id: 6 */
static ER  tTransparentUnmarshaler_sSample_transferInArray();	/* func_id: 7 */
static ER  tTransparentUnmarshaler_sSample_transferInArray2();	/* func_id: 8 */
static ER  tTransparentUnmarshaler_sSample_transferOutArray();	/* func_id: 9 */
static ER  tTransparentUnmarshaler_sSample_UnsignedTypes();	/* func_id: 10 */
static ER  tTransparentUnmarshaler_sSample_SignedTypes();	/* func_id: 11 */
static ER  tTransparentUnmarshaler_sSample_onewayFunc();	/* func_id: 12 */
static ER  tTransparentUnmarshaler_sSample_exit();	/* func_id: 13 */

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eUnmarshalAndCallFunction
 * entry port: eUnmarshalAndCallFunction
 * signature:  sUnmarshalerMain
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eUnmarshalAndCallFunction_main
 * name:         eUnmarshalAndCallFunction_main
 * global_name:  tUnmarshaler_sSample_eUnmarshalAndCallFunction_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eUnmarshalAndCallFunction_main(CELLIDX idx)
{

    int16_t   func_id_;
    ER        ercd_;

    tUnmarshaler_sSample_CB *p_cellcb;

    if( VALID_IDX( idx ) ){
        p_cellcb = GET_CELLCB(idx);
    }else{
        /* エラー処理コードをここに記述 */
    }

    /* SOPのチェック */
    if( (ercd_=cTDR_receiveSOP( false )) != E_OK )
        goto error_reset;
    /* func_id の取得 */
    if( (ercd_=cTDR_getInt16( &func_id_ )) != E_OK )
        goto error_reset;

#ifdef RPC_DEBUG
    syslog(LOG_INFO, "unmarshaler task: func_id: %d", func_id_ );
#endif
    switch( func_id_ ){
    case 1:       /*** sayHello ***/ 
        if( tTransparentUnmarshaler_sSample_sayHello() != E_OK )
            goto error_reset;
        break;
    case 2:       /*** howAreYou ***/ 
        if( tTransparentUnmarshaler_sSample_howAreYou() != E_OK )
            goto error_reset;
        break;
    case 3:       /*** giftToYou ***/ 
        if( tTransparentUnmarshaler_sSample_giftToYou() != E_OK )
            goto error_reset;
        break;
    case 4:       /*** returnGiftFromYou ***/ 
        if( tTransparentUnmarshaler_sSample_returnGiftFromYou() != E_OK )
            goto error_reset;
        break;
    case 5:       /*** transferStruct ***/ 
        if( tTransparentUnmarshaler_sSample_transferStruct() != E_OK )
            goto error_reset;
        break;
    case 6:       /*** transferStruct2 ***/ 
        if( tTransparentUnmarshaler_sSample_transferStruct2() != E_OK )
            goto error_reset;
        break;
    case 7:       /*** transferInArray ***/ 
        if( tTransparentUnmarshaler_sSample_transferInArray() != E_OK )
            goto error_reset;
        break;
    case 8:       /*** transferInArray2 ***/ 
        if( tTransparentUnmarshaler_sSample_transferInArray2() != E_OK )
            goto error_reset;
        break;
    case 9:       /*** transferOutArray ***/ 
        if( tTransparentUnmarshaler_sSample_transferOutArray() != E_OK )
            goto error_reset;
        break;
    case 10:       /*** UnsignedTypes ***/ 
        if( tTransparentUnmarshaler_sSample_UnsignedTypes() != E_OK )
            goto error_reset;
        break;
    case 11:       /*** SignedTypes ***/ 
        if( tTransparentUnmarshaler_sSample_SignedTypes() != E_OK )
            goto error_reset;
        break;
    case 12:       /*** onewayFunc ***/ 
        if( tTransparentUnmarshaler_sSample_onewayFunc() != E_OK )
            goto error_reset;
        break;
    case 13:       /*** exit ***/ 
        if( tTransparentUnmarshaler_sSample_exit() != E_OK )
            goto error_reset;
        break;
    default:
        syslog(LOG_INFO, "unmarshaler task: ERROR: unknown func_id: %d", func_id_ );
    };
    /* PPAllocator のすべてを解放 */
    cPPAllocator_dealloc_all();
    return;

error_reset:
    if( ercd_ != ERCD( E_RPC, E_RESET ) )
        (void)cTDR_reset();
    /* PPAllocator のすべてを解放 */
    cPPAllocator_dealloc_all();
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/

/*** アンマーシャラ関数 ***/

/*
 * name:    sayHello
 * func_id: 1 
 */
static ER
tTransparentUnmarshaler_sSample_sayHello()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    int32_t      times;
    ER           *retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getInt32( &(times) ) ) != E_OK )
        goto error_reset;
        if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(retval_) ) ) != E_OK )
            goto error_reset;
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    *retval_ = cServerCall_sayHello( times );
    /* 関数処理の終了を通知 */
    if( ( ercd_ = cEventflag_set( 0x01 ) ) != E_OK ){
      goto error_reset;
    }
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    howAreYou
 * func_id: 2 
 */
static ER
tTransparentUnmarshaler_sSample_howAreYou()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    char_t*      buf;
    int32_t      len;
    ER           *retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(buf) ) ) != E_OK )
        goto error_reset;
        if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(retval_) ) ) != E_OK )
            goto error_reset;
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    *retval_ = cServerCall_howAreYou( buf, len );
    /* 関数処理の終了を通知 */
    if( ( ercd_ = cEventflag_set( 0x01 ) ) != E_OK ){
      goto error_reset;
    }
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    giftToYou
 * func_id: 3 
 */
static ER
tTransparentUnmarshaler_sSample_giftToYou()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    char_t*      buf;
    int32_t      len;
    ER           *retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(buf) ) ) != E_OK )
        goto error_reset;
        if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(retval_) ) ) != E_OK )
            goto error_reset;
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    *retval_ = cServerCall_giftToYou( buf, len );
    /* 関数処理の終了を通知 */
    if( ( ercd_ = cEventflag_set( 0x01 ) ) != E_OK ){
      goto error_reset;
    }
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    returnGiftFromYou
 * func_id: 4 
 */
static ER
tTransparentUnmarshaler_sSample_returnGiftFromYou()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    int16_t**    buf;
    int32_t*     len;
    ER           *retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(len) ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(buf) ) ) != E_OK )
        goto error_reset;
        if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(retval_) ) ) != E_OK )
            goto error_reset;
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    *retval_ = cServerCall_returnGiftFromYou( buf, len );
    /* 関数処理の終了を通知 */
    if( ( ercd_ = cEventflag_set( 0x01 ) ) != E_OK ){
      goto error_reset;
    }
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    transferStruct
 * func_id: 5 
 */
static ER
tTransparentUnmarshaler_sSample_transferStruct()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    struct stA*  a;
    int32_t      len;
    ER           *retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(a) ) ) != E_OK )
        goto error_reset;
        if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(retval_) ) ) != E_OK )
            goto error_reset;
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    *retval_ = cServerCall_transferStruct( a, len );
    /* 関数処理の終了を通知 */
    if( ( ercd_ = cEventflag_set( 0x01 ) ) != E_OK ){
      goto error_reset;
    }
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    transferStruct2
 * func_id: 6 
 */
static ER
tTransparentUnmarshaler_sSample_transferStruct2()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    struct stA   a;
    ER           *retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getInt32( &(a.len) ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_getInt32( &(a.a) ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_getInt32( &(a.b) ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(a.msg) ) ) != E_OK )
        goto error_reset;
        if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(retval_) ) ) != E_OK )
            goto error_reset;
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    *retval_ = cServerCall_transferStruct2( a );
    /* 関数処理の終了を通知 */
    if( ( ercd_ = cEventflag_set( 0x01 ) ) != E_OK ){
      goto error_reset;
    }
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    transferInArray
 * func_id: 7 
 */
static ER
tTransparentUnmarshaler_sSample_transferInArray()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    int8_t       (*array0);
    ER           *retval_;

        /* 入力引数受取 */
	if((ercd_=cPPAllocator_alloc(sizeof(int8_t)*(ArraySize),(void **)&array0))!=E_OK)	/* GenParamCopy 1 */
		goto error_reset;
	{	/* GenParamCopy 11 */
		int32_t  i__1, length__1 = ArraySize;
		for( i__1 = 0; i__1 < length__1; i__1++ ){
			if( ( ercd_ = cTDR_getInt8( &(array0[i__1]) ) ) != E_OK )	/* GenParamCopy 2 */
				goto error_reset;
		}
	}
        if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(retval_) ) ) != E_OK )
            goto error_reset;
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    *retval_ = cServerCall_transferInArray( array0 );
    /* 関数処理の終了を通知 */
    if( ( ercd_ = cEventflag_set( 0x01 ) ) != E_OK ){
      goto error_reset;
    }
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    transferInArray2
 * func_id: 8 
 */
static ER
tTransparentUnmarshaler_sSample_transferInArray2()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    int8_t(*     array1)[8];
    ER           *retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(array1) ) ) != E_OK )
        goto error_reset;
        if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(retval_) ) ) != E_OK )
            goto error_reset;
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    *retval_ = cServerCall_transferInArray2( array1 );
    /* 関数処理の終了を通知 */
    if( ( ercd_ = cEventflag_set( 0x01 ) ) != E_OK ){
      goto error_reset;
    }
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    transferOutArray
 * func_id: 9 
 */
static ER
tTransparentUnmarshaler_sSample_transferOutArray()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    int8_t(*     array2)[8];
    ER           *retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(array2) ) ) != E_OK )
        goto error_reset;
        if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(retval_) ) ) != E_OK )
            goto error_reset;
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    *retval_ = cServerCall_transferOutArray( array2 );
    /* 関数処理の終了を通知 */
    if( ( ercd_ = cEventflag_set( 0x01 ) ) != E_OK ){
      goto error_reset;
    }
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    UnsignedTypes
 * func_id: 10 
 */
static ER
tTransparentUnmarshaler_sSample_UnsignedTypes()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    uint8_t      in;
    unsigned short s;
    uint_t       ui;
    ulong_t      ul;
    unsigned char *retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getUInt8( &(in) ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_getUShort( (ushort_t*)&(s) ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_getUInt( (uint_t*)&(ui) ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_getULong( (ulong_t*)&(ul) ) ) != E_OK )
        goto error_reset;
        if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(retval_) ) ) != E_OK )
            goto error_reset;
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    *retval_ = cServerCall_UnsignedTypes( in, s, ui, ul );
    /* 関数処理の終了を通知 */
    if( ( ercd_ = cEventflag_set( 0x01 ) ) != E_OK ){
      goto error_reset;
    }
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    SignedTypes
 * func_id: 11 
 */
static ER
tTransparentUnmarshaler_sSample_SignedTypes()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    int8_t       in;
    short        s;
    int_t        ui;
    long_t       ul;
    char         *retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getInt8( &(in) ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_getShort( (short_t*)&(s) ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_getInt( (int_t*)&(ui) ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_getLong( (long_t*)&(ul) ) ) != E_OK )
        goto error_reset;
        if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(retval_) ) ) != E_OK )
            goto error_reset;
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(true)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    *retval_ = cServerCall_SignedTypes( in, s, ui, ul );
    /* 関数処理の終了を通知 */
    if( ( ercd_ = cEventflag_set( 0x01 ) ) != E_OK ){
      goto error_reset;
    }
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    onewayFunc
 * func_id: 12 
 */
static ER
tTransparentUnmarshaler_sSample_onewayFunc()
{
	ER  ercd_;
	CELLCB  *p_cellcb;
    char_t*      buf;
    int32_t      len;
    ER           retval_;

        /* 入力引数受取 */
    if( ( ercd_ = cTDR_getInt32( &(len) ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_getIntptr( (intptr_t*)&(buf) ) ) != E_OK )
        goto error_reset;
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    retval_ = cServerCall_onewayFunc( buf, len );
    return E_OK;
error_reset:
    return ercd_;
}

/*
 * name:    exit
 * func_id: 13 
 */
static ER
tTransparentUnmarshaler_sSample_exit()
{
	ER  ercd_;
	CELLCB  *p_cellcb;

        /* 入力引数受取 */
        /* パケット終わりをチェック */
    if( (ercd_=cTDR_receiveEOP(false)) != E_OK )
        goto error_reset;

    /* 対象関数の呼出し */
    cServerCall_exit( );
    return E_OK;
error_reset:
    return ercd_;
}

