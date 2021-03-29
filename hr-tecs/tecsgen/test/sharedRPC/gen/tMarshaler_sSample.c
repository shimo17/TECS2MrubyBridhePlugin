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

/* #[<ENTRY_FUNC>]# eClientEntry_oneway
 * name:         eClientEntry_oneway
 * global_name:  tMarshaler_sSample_eClientEntry_oneway
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_oneway(CELLIDX idx, const int8_t* buf, int16_t len)
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 5;    /* id of oneway: 5 */
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
    if( ( ercd_ = cTDR_putInt16( len ) ) != E_OK )
        goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_putInt8( buf[i__1] ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
		}
	}
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

/* #[<ENTRY_FUNC>]# eClientEntry_shutdown
 * name:         eClientEntry_shutdown
 * global_name:  tMarshaler_sSample_eClientEntry_shutdown
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
void
eClientEntry_shutdown(CELLIDX idx)
{
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 6;    /* id of shutdown: 6 */
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
