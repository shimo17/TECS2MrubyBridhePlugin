/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
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
 * call port: cLockChannel signature: sSemaphore context:task optional:true
 *   bool_t     is_cLockChannel_joined()                     check if joined
 *   ER             cLockChannel_signal( );
 *   ER             cLockChannel_wait( );
 *   ER             cLockChannel_waitPolling( );
 *   ER             cLockChannel_waitTimeout( TMO timeout );
 *   ER             cLockChannel_initialize( );
 *   ER             cLockChannel_refer( T_RSEM* pk_semaphore_status );
 * allocator port for call port:eClientEntry func:giftToYou param: buf
 *   ER             eClientEntry_giftToYou_buf_alloc( int32_t size, void** p );
 *   ER             eClientEntry_giftToYou_buf_dealloc( const void* ptr );
 * allocator port for call port:eClientEntry func:returnGiftFromYou param: buf
 *   ER             eClientEntry_returnGiftFromYou_buf_alloc( int32_t size, void** p );
 *   ER             eClientEntry_returnGiftFromYou_buf_dealloc( const void* ptr );
 * allocator port for call port:eClientEntry func:onewayFunc param: buf
 *   ER             eClientEntry_onewayFunc_buf_alloc( int32_t size, void** p );
 *   ER             eClientEntry_onewayFunc_buf_dealloc( const void* ptr );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tMarshaler_sSample_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eClientEntry
 * entry port: eClientEntry
 * signature:  sSample
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eClientEntry_sayHello
 * name:         eClientEntry_sayHello
 * global_name:  tMarshaler_sSample_eClientEntry_sayHello
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_sayHello(CELLIDX idx, int32_t times)
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 1;    /* id of sayHello: 1 */
    tMarshaler_sSample_CB *p_cellcb;

    if( VALID_IDX( idx ) ){
        p_cellcb = GET_CELLCB(idx);
    }else{
         return ERCD( E_RPC, E_ID );
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_wait();

    /* SOPの送出 */
    if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
      goto error_reset;
    /* 関数 id の送出 */
    if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
        goto error_reset;
    /* 入力引数送出 */
    if( ( ercd_ = cTDR_putInt32( times ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)&retval_ ) ) != E_OK )
        goto error_reset;
    /* EOPの送出（パケットの掃きだし） */
    if( (ercd_=cTDR_sendEOP(true)) != E_OK )
        goto error_reset;

    if( (ercd_=cEventflag_wait( 0x01, TWF_ANDW, &flgptn )) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    if( (ercd_=cEventflag_clear( 0x00 ) ) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();
    return retval_;

error_reset:
    if( ercd_ != ERCD( E_RPC, E_RESET ) )
        (void)cTDR_reset();
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();

    return ercd_;
}

/* #[<ENTRY_FUNC>]# eClientEntry_howAreYou
 * name:         eClientEntry_howAreYou
 * global_name:  tMarshaler_sSample_eClientEntry_howAreYou
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_howAreYou(CELLIDX idx, char_t* buf, int32_t len)
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 2;    /* id of howAreYou: 2 */
    tMarshaler_sSample_CB *p_cellcb;

    if( VALID_IDX( idx ) ){
        p_cellcb = GET_CELLCB(idx);
    }else{
         return ERCD( E_RPC, E_ID );
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_wait();

    /* SOPの送出 */
    if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
      goto error_reset;
    /* 関数 id の送出 */
    if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
        goto error_reset;
    /* 入力引数送出 */
    if( ( ercd_ = cTDR_putInt32( len ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)buf ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)&retval_ ) ) != E_OK )
        goto error_reset;
    /* EOPの送出（パケットの掃きだし） */
    if( (ercd_=cTDR_sendEOP(true)) != E_OK )
        goto error_reset;

    if( (ercd_=cEventflag_wait( 0x01, TWF_ANDW, &flgptn )) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    if( (ercd_=cEventflag_clear( 0x00 ) ) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();
    return retval_;

error_reset:
    if( ercd_ != ERCD( E_RPC, E_RESET ) )
        (void)cTDR_reset();
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();

    return ercd_;
}

/* #[<ENTRY_FUNC>]# eClientEntry_giftToYou
 * name:         eClientEntry_giftToYou
 * global_name:  tMarshaler_sSample_eClientEntry_giftToYou
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_giftToYou(CELLIDX idx, char_t* buf, int32_t len)
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 3;    /* id of giftToYou: 3 */
    tMarshaler_sSample_CB *p_cellcb;

    if( VALID_IDX( idx ) ){
        p_cellcb = GET_CELLCB(idx);
    }else{
         return ERCD( E_RPC, E_ID );
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_wait();

    /* SOPの送出 */
    if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
      goto error_reset;
    /* 関数 id の送出 */
    if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
        goto error_reset;
    /* 入力引数送出 */
    if( ( ercd_ = cTDR_putInt32( len ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)buf ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)&retval_ ) ) != E_OK )
        goto error_reset;
    /* EOPの送出（パケットの掃きだし） */
    if( (ercd_=cTDR_sendEOP(true)) != E_OK )
        goto error_reset;

    if( (ercd_=cEventflag_wait( 0x01, TWF_ANDW, &flgptn )) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    if( (ercd_=cEventflag_clear( 0x00 ) ) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();
    return retval_;

error_reset:
    if( ercd_ != ERCD( E_RPC, E_RESET ) )
        (void)cTDR_reset();
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();

    return ercd_;
}

/* #[<ENTRY_FUNC>]# eClientEntry_returnGiftFromYou
 * name:         eClientEntry_returnGiftFromYou
 * global_name:  tMarshaler_sSample_eClientEntry_returnGiftFromYou
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_returnGiftFromYou(CELLIDX idx, int16_t** buf, int32_t* len)
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 4;    /* id of returnGiftFromYou: 4 */
    tMarshaler_sSample_CB *p_cellcb;

    if( VALID_IDX( idx ) ){
        p_cellcb = GET_CELLCB(idx);
    }else{
         return ERCD( E_RPC, E_ID );
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_wait();

    /* SOPの送出 */
    if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
      goto error_reset;
    /* 関数 id の送出 */
    if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
        goto error_reset;
    /* 入力引数送出 */
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)len ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)buf ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)&retval_ ) ) != E_OK )
        goto error_reset;
    /* EOPの送出（パケットの掃きだし） */
    if( (ercd_=cTDR_sendEOP(true)) != E_OK )
        goto error_reset;

    if( (ercd_=cEventflag_wait( 0x01, TWF_ANDW, &flgptn )) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    if( (ercd_=cEventflag_clear( 0x00 ) ) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();
    return retval_;

error_reset:
    if( ercd_ != ERCD( E_RPC, E_RESET ) )
        (void)cTDR_reset();
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();

    return ercd_;
}

/* #[<ENTRY_FUNC>]# eClientEntry_transferStruct
 * name:         eClientEntry_transferStruct
 * global_name:  tMarshaler_sSample_eClientEntry_transferStruct
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_transferStruct(CELLIDX idx, const struct stA* a, int32_t len)
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 5;    /* id of transferStruct: 5 */
    tMarshaler_sSample_CB *p_cellcb;

    if( VALID_IDX( idx ) ){
        p_cellcb = GET_CELLCB(idx);
    }else{
         return ERCD( E_RPC, E_ID );
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_wait();

    /* SOPの送出 */
    if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
      goto error_reset;
    /* 関数 id の送出 */
    if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
        goto error_reset;
    /* 入力引数送出 */
    if( ( ercd_ = cTDR_putInt32( len ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)a ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)&retval_ ) ) != E_OK )
        goto error_reset;
    /* EOPの送出（パケットの掃きだし） */
    if( (ercd_=cTDR_sendEOP(true)) != E_OK )
        goto error_reset;

    if( (ercd_=cEventflag_wait( 0x01, TWF_ANDW, &flgptn )) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    if( (ercd_=cEventflag_clear( 0x00 ) ) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();
    return retval_;

error_reset:
    if( ercd_ != ERCD( E_RPC, E_RESET ) )
        (void)cTDR_reset();
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();

    return ercd_;
}

/* #[<ENTRY_FUNC>]# eClientEntry_transferStruct2
 * name:         eClientEntry_transferStruct2
 * global_name:  tMarshaler_sSample_eClientEntry_transferStruct2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_transferStruct2(CELLIDX idx, struct stA a)
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 6;    /* id of transferStruct2: 6 */
    tMarshaler_sSample_CB *p_cellcb;

    if( VALID_IDX( idx ) ){
        p_cellcb = GET_CELLCB(idx);
    }else{
         return ERCD( E_RPC, E_ID );
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_wait();

    /* SOPの送出 */
    if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
      goto error_reset;
    /* 関数 id の送出 */
    if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
        goto error_reset;
    /* 入力引数送出 */
    if( ( ercd_ = cTDR_putInt32( a.len ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putInt32( a.a ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putInt32( a.b ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)a.msg ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)&retval_ ) ) != E_OK )
        goto error_reset;
    /* EOPの送出（パケットの掃きだし） */
    if( (ercd_=cTDR_sendEOP(true)) != E_OK )
        goto error_reset;

    if( (ercd_=cEventflag_wait( 0x01, TWF_ANDW, &flgptn )) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    if( (ercd_=cEventflag_clear( 0x00 ) ) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();
    return retval_;

error_reset:
    if( ercd_ != ERCD( E_RPC, E_RESET ) )
        (void)cTDR_reset();
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();

    return ercd_;
}

/* #[<ENTRY_FUNC>]# eClientEntry_transferInArray
 * name:         eClientEntry_transferInArray
 * global_name:  tMarshaler_sSample_eClientEntry_transferInArray
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_transferInArray(CELLIDX idx, int8_t array0[8])
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 7;    /* id of transferInArray: 7 */
    tMarshaler_sSample_CB *p_cellcb;

    if( VALID_IDX( idx ) ){
        p_cellcb = GET_CELLCB(idx);
    }else{
         return ERCD( E_RPC, E_ID );
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_wait();

    /* SOPの送出 */
    if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
      goto error_reset;
    /* 関数 id の送出 */
    if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
        goto error_reset;
    /* 入力引数送出 */
	{	/* GenParamCopy 11 */
		int32_t  i__1, length__1 = ArraySize;
		for( i__1 = 0; i__1 < length__1; i__1++ ){
			if( ( ercd_ = cTDR_putInt8( array0[i__1] ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
		}
	}
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)&retval_ ) ) != E_OK )
        goto error_reset;
    /* EOPの送出（パケットの掃きだし） */
    if( (ercd_=cTDR_sendEOP(true)) != E_OK )
        goto error_reset;

    if( (ercd_=cEventflag_wait( 0x01, TWF_ANDW, &flgptn )) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    if( (ercd_=cEventflag_clear( 0x00 ) ) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();
    return retval_;

error_reset:
    if( ercd_ != ERCD( E_RPC, E_RESET ) )
        (void)cTDR_reset();
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();

    return ercd_;
}

/* #[<ENTRY_FUNC>]# eClientEntry_transferInArray2
 * name:         eClientEntry_transferInArray2
 * global_name:  tMarshaler_sSample_eClientEntry_transferInArray2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_transferInArray2(CELLIDX idx, const int8_t(* array1)[8])
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 8;    /* id of transferInArray2: 8 */
    tMarshaler_sSample_CB *p_cellcb;

    if( VALID_IDX( idx ) ){
        p_cellcb = GET_CELLCB(idx);
    }else{
         return ERCD( E_RPC, E_ID );
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_wait();

    /* SOPの送出 */
    if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
      goto error_reset;
    /* 関数 id の送出 */
    if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
        goto error_reset;
    /* 入力引数送出 */
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)array1 ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)&retval_ ) ) != E_OK )
        goto error_reset;
    /* EOPの送出（パケットの掃きだし） */
    if( (ercd_=cTDR_sendEOP(true)) != E_OK )
        goto error_reset;

    if( (ercd_=cEventflag_wait( 0x01, TWF_ANDW, &flgptn )) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    if( (ercd_=cEventflag_clear( 0x00 ) ) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();
    return retval_;

error_reset:
    if( ercd_ != ERCD( E_RPC, E_RESET ) )
        (void)cTDR_reset();
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();

    return ercd_;
}

/* #[<ENTRY_FUNC>]# eClientEntry_transferOutArray
 * name:         eClientEntry_transferOutArray
 * global_name:  tMarshaler_sSample_eClientEntry_transferOutArray
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_transferOutArray(CELLIDX idx, int8_t(* array2)[8])
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 9;    /* id of transferOutArray: 9 */
    tMarshaler_sSample_CB *p_cellcb;

    if( VALID_IDX( idx ) ){
        p_cellcb = GET_CELLCB(idx);
    }else{
         return ERCD( E_RPC, E_ID );
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_wait();

    /* SOPの送出 */
    if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
      goto error_reset;
    /* 関数 id の送出 */
    if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
        goto error_reset;
    /* 入力引数送出 */
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)array2 ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)&retval_ ) ) != E_OK )
        goto error_reset;
    /* EOPの送出（パケットの掃きだし） */
    if( (ercd_=cTDR_sendEOP(true)) != E_OK )
        goto error_reset;

    if( (ercd_=cEventflag_wait( 0x01, TWF_ANDW, &flgptn )) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    if( (ercd_=cEventflag_clear( 0x00 ) ) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();
    return retval_;

error_reset:
    if( ercd_ != ERCD( E_RPC, E_RESET ) )
        (void)cTDR_reset();
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();

    return ercd_;
}

/* #[<ENTRY_FUNC>]# eClientEntry_UnsignedTypes
 * name:         eClientEntry_UnsignedTypes
 * global_name:  tMarshaler_sSample_eClientEntry_UnsignedTypes
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
unsigned char
eClientEntry_UnsignedTypes(CELLIDX idx, uint8_t in, unsigned short s, uint_t ui, ulong_t ul)
{
    unsigned char  retval_;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 10;    /* id of UnsignedTypes: 10 */
    tMarshaler_sSample_CB *p_cellcb;

    if( VALID_IDX( idx ) ){
        p_cellcb = GET_CELLCB(idx);
    }else{
        /* エラー処理コードをここに記述 */
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_wait();

    /* SOPの送出 */
    if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
      goto error_reset;
    /* 関数 id の送出 */
    if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
        goto error_reset;
    /* 入力引数送出 */
    if( ( ercd_ = cTDR_putUInt8( in ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putUShort( (ushort_t)s ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putUInt( (uint_t)ui ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putULong( (ulong_t)ul ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)&retval_ ) ) != E_OK )
        goto error_reset;
    /* EOPの送出（パケットの掃きだし） */
    if( (ercd_=cTDR_sendEOP(true)) != E_OK )
        goto error_reset;

    if( (ercd_=cEventflag_wait( 0x01, TWF_ANDW, &flgptn )) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    if( (ercd_=cEventflag_clear( 0x00 ) ) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();
    return retval_;

error_reset:
    if( ercd_ != ERCD( E_RPC, E_RESET ) )
        (void)cTDR_reset();
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();

    return;
}

/* #[<ENTRY_FUNC>]# eClientEntry_SignedTypes
 * name:         eClientEntry_SignedTypes
 * global_name:  tMarshaler_sSample_eClientEntry_SignedTypes
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
char
eClientEntry_SignedTypes(CELLIDX idx, int8_t in, short s, int_t ui, long_t ul)
{
    char  retval_;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 11;    /* id of SignedTypes: 11 */
    tMarshaler_sSample_CB *p_cellcb;

    if( VALID_IDX( idx ) ){
        p_cellcb = GET_CELLCB(idx);
    }else{
        /* エラー処理コードをここに記述 */
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_wait();

    /* SOPの送出 */
    if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
      goto error_reset;
    /* 関数 id の送出 */
    if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
        goto error_reset;
    /* 入力引数送出 */
    if( ( ercd_ = cTDR_putInt8( in ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putShort( (short_t)s ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putInt( (int_t)ui ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putLong( (long_t)ul ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)&retval_ ) ) != E_OK )
        goto error_reset;
    /* EOPの送出（パケットの掃きだし） */
    if( (ercd_=cTDR_sendEOP(true)) != E_OK )
        goto error_reset;

    if( (ercd_=cEventflag_wait( 0x01, TWF_ANDW, &flgptn )) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    if( (ercd_=cEventflag_clear( 0x00 ) ) != E_OK ){
      ercd_ = ERCD(E_RPC,ercd_);
      goto error_reset;
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();
    return retval_;

error_reset:
    if( ercd_ != ERCD( E_RPC, E_RESET ) )
        (void)cTDR_reset();
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();

    return;
}

/* #[<ENTRY_FUNC>]# eClientEntry_onewayFunc
 * name:         eClientEntry_onewayFunc
 * global_name:  tMarshaler_sSample_eClientEntry_onewayFunc
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_onewayFunc(CELLIDX idx, char_t* buf, int32_t len)
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 12;    /* id of onewayFunc: 12 */
    tMarshaler_sSample_CB *p_cellcb;

    if( VALID_IDX( idx ) ){
        p_cellcb = GET_CELLCB(idx);
    }else{
         return ERCD( E_RPC, E_ID );
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_wait();

    /* SOPの送出 */
    if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
      goto error_reset;
    /* 関数 id の送出 */
    if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
        goto error_reset;
    /* 入力引数送出 */
    if( ( ercd_ = cTDR_putInt32( len ) ) != E_OK )
        goto error_reset;
    if( ( ercd_ = cTDR_putIntptr( (intptr_t)buf ) ) != E_OK )
        goto error_reset;
    /* EOPの送出（パケットの掃きだし） */
    if( (ercd_=cTDR_sendEOP(false)) != E_OK )
        goto error_reset;

    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();
    return retval_;

error_reset:
    if( ercd_ != ERCD( E_RPC, E_RESET ) )
        (void)cTDR_reset();
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();

    return ercd_;
}

/* #[<ENTRY_FUNC>]# eClientEntry_exit
 * name:         eClientEntry_exit
 * global_name:  tMarshaler_sSample_eClientEntry_exit
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
void
eClientEntry_exit(CELLIDX idx)
{
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 13;    /* id of exit: 13 */
    tMarshaler_sSample_CB *p_cellcb;

    if( VALID_IDX( idx ) ){
        p_cellcb = GET_CELLCB(idx);
    }else{
        /* エラー処理コードをここに記述 */
    }
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_wait();

    /* SOPの送出 */
    if( ( ercd_ = cTDR_sendSOP( true ) ) != E_OK )
      goto error_reset;
    /* 関数 id の送出 */
    if( ( ercd_ = cTDR_putInt16( func_id_ ) ) != E_OK )
        goto error_reset;
    /* 入力引数送出 */
    /* EOPの送出（パケットの掃きだし） */
    if( (ercd_=cTDR_sendEOP(false)) != E_OK )
        goto error_reset;

    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();
    return;

error_reset:
    if( ercd_ != ERCD( E_RPC, E_RESET ) )
        (void)cTDR_reset();
    /* Channel Lock */
    if( is_cLockChannel_joined() )
      cLockChannel_signal();

    return;
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
