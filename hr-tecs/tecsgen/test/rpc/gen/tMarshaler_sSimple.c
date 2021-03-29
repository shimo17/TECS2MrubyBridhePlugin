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
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tMarshaler_sSimple_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eClientEntry
 * entry port: eClientEntry
 * signature:  sSimple
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eClientEntry_onewayPtr
 * name:         eClientEntry_onewayPtr
 * global_name:  tMarshaler_sSimple_eClientEntry_onewayPtr
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_onewayPtr(CELLIDX idx, const uint32_t* in)
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 1;    /* id of onewayPtr: 1 */
    tMarshaler_sSimple_CB *p_cellcb;

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
	if( ( ercd_ = cTDR_putUInt32( (*in) ) ) != E_OK )	/* GenParamCopy 3 */
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

/* #[<ENTRY_FUNC>]# eClientEntry_onewayArray
 * name:         eClientEntry_onewayArray
 * global_name:  tMarshaler_sSimple_eClientEntry_onewayArray
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_onewayArray(CELLIDX idx, const uint32_t* in, int32_t len)
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 2;    /* id of onewayArray: 2 */
    tMarshaler_sSimple_CB *p_cellcb;

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
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_putUInt32( in[i__1] ) ) != E_OK )	/* GenParamCopy 3 */
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

/* #[<ENTRY_FUNC>]# eClientEntry_onewayDoubleArray
 * name:         eClientEntry_onewayDoubleArray
 * global_name:  tMarshaler_sSimple_eClientEntry_onewayDoubleArray
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_onewayDoubleArray(CELLIDX idx, const int32_t* in, int32_t len, const int32_t* in2, int32_t len2)
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 3;    /* id of onewayDoubleArray: 3 */
    tMarshaler_sSimple_CB *p_cellcb;

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
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_putInt32( in[i__1] ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
		}
	}
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_putInt32( in2[i__1] ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
		}
	}
    if( ( ercd_ = cTDR_putInt32( len2 ) ) != E_OK )
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

/* #[<ENTRY_FUNC>]# eClientEntry_onewayStringArray
 * name:         eClientEntry_onewayStringArray
 * global_name:  tMarshaler_sSimple_eClientEntry_onewayStringArray
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_onewayStringArray(CELLIDX idx, const char_t** in, int32_t len)
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 4;    /* id of onewayStringArray: 4 */
    tMarshaler_sSimple_CB *p_cellcb;

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
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				length__3 = STRLEN8(in[i__1])+1;	/* GenParamCopy 7 */
				if( ( ercd_ = cTDR_putInt32( length__3 ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_putChar( in[i__1][i__3] ) ) != E_OK )	/* GenParamCopy 3 */
						goto error_reset;
				}
			}
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

/* #[<ENTRY_FUNC>]# eClientEntry_onewayString
 * name:         eClientEntry_onewayString
 * global_name:  tMarshaler_sSimple_eClientEntry_onewayString
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_onewayString(CELLIDX idx, const char_t* in, int32_t len)
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 5;    /* id of onewayString: 5 */
    tMarshaler_sSimple_CB *p_cellcb;

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
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = STRNLEN8(in,(len-1))+1;	/* GenParamCopy 6 */
		if( length__1 < len)	length__1 += 1;
		if( ( ercd_ = cTDR_putInt32( length__1 ) ) != E_OK )	/* GenParamCopy 3 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_putChar( in[i__1] ) ) != E_OK )	/* GenParamCopy 3 */
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

/* #[<ENTRY_FUNC>]# eClientEntry_onewayStruct
 * name:         eClientEntry_onewayStruct
 * global_name:  tMarshaler_sSimple_eClientEntry_onewayStruct
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_onewayStruct(CELLIDX idx, const struct stA* a)
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 6;    /* id of onewayStruct: 6 */
    tMarshaler_sSimple_CB *p_cellcb;

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
	if( ( ercd_ = cTDR_putInt32( (*a).len ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( ( ercd_ = cTDR_putInt32( (*a).a ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	if( ( ercd_ = cTDR_putInt32( (*a).b ) ) != E_OK )	/* GenParamCopy 3 */
		goto error_reset;
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = STRNLEN8((*a).msg,((*a).len-1))+1;	/* GenParamCopy 6 */
		if( length__1 < (*a).len)	length__1 += 1;
		if( ( ercd_ = cTDR_putInt32( length__1 ) ) != E_OK )	/* GenParamCopy 3 */
			goto error_reset;
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_putChar( (*a).msg[i__1] ) ) != E_OK )	/* GenParamCopy 3 */
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

/* #[<ENTRY_FUNC>]# eClientEntry_onewayStruct2
 * name:         eClientEntry_onewayStruct2
 * global_name:  tMarshaler_sSimple_eClientEntry_onewayStruct2
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_onewayStruct2(CELLIDX idx, const struct stA* a, int32_t len)
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 7;    /* id of onewayStruct2: 7 */
    tMarshaler_sSimple_CB *p_cellcb;

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
	{	/* GenParamCopy 4 */
		int32_t  i__1, length__1;
		length__1 = len;	/* GenParamCopy 5 */
		for( i__1 = 0; i__1 < length__1; i__1++ ){	/* GenParamCopy 9 */
			if( ( ercd_ = cTDR_putInt32( a[i__1].len ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			if( ( ercd_ = cTDR_putInt32( a[i__1].a ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			if( ( ercd_ = cTDR_putInt32( a[i__1].b ) ) != E_OK )	/* GenParamCopy 3 */
				goto error_reset;
			{	/* GenParamCopy 4 */
				int32_t  i__3, length__3;
				length__3 = STRNLEN8(a[i__1].msg,(a[i__1].len-1))+1;	/* GenParamCopy 6 */
				if( length__3 < a[i__1].len)	length__3 += 1;
				if( ( ercd_ = cTDR_putInt32( length__3 ) ) != E_OK )	/* GenParamCopy 3 */
					goto error_reset;
				for( i__3 = 0; i__3 < length__3; i__3++ ){	/* GenParamCopy 9 */
					if( ( ercd_ = cTDR_putChar( a[i__1].msg[i__3] ) ) != E_OK )	/* GenParamCopy 3 */
						goto error_reset;
				}
			}
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

/* #[<ENTRY_FUNC>]# eClientEntry_onewayInArray
 * name:         eClientEntry_onewayInArray
 * global_name:  tMarshaler_sSimple_eClientEntry_onewayInArray
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_onewayInArray(CELLIDX idx, int8_t array0[8])
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 8;    /* id of onewayInArray: 8 */
    tMarshaler_sSimple_CB *p_cellcb;

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

/* #[<ENTRY_FUNC>]# eClientEntry_onewayInArray2
 * name:         eClientEntry_onewayInArray2
 * global_name:  tMarshaler_sSimple_eClientEntry_onewayInArray2
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_onewayInArray2(CELLIDX idx, const int8_t(* array1)[8])
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 9;    /* id of onewayInArray2: 9 */
    tMarshaler_sSimple_CB *p_cellcb;

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
			if( ( ercd_ = cTDR_putInt8( (*array1)[i__1] ) ) != E_OK )	/* GenParamCopy 3 */
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

/* #[<ENTRY_FUNC>]# eClientEntry_onewayNulable
 * name:         eClientEntry_onewayNulable
 * global_name:  tMarshaler_sSimple_eClientEntry_onewayNulable
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
ER
eClientEntry_onewayNulable(CELLIDX idx, const int8_t(* array)[3])
{
    ER  retval_ = E_OK;
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 10;    /* id of onewayNulable: 10 */
    tMarshaler_sSimple_CB *p_cellcb;

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
	{
		int8_t  b_null_ = (int8_t)(array == NULL);	/* GenParamCopy Null 31 */
		if((ercd_=cTDR_putInt8( b_null_ )) != E_OK )	/* GenParamCopy Null 32 */
			 goto error_reset;
		if( ! b_null_ ){	/* GenParamCopy Null 33 */
			{	/* GenParamCopy 11 */
				int32_t  i__3, length__3 = 3;
				for( i__3 = 0; i__3 < length__3; i__3++ ){
					if( ( ercd_ = cTDR_putInt8( (*array)[i__3] ) ) != E_OK )	/* GenParamCopy 3 */
						goto error_reset;
				}
			}
		}	/* GenParamCopy Null 53 */
	}	/* GenParamCopy Null 54 */
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
 * global_name:  tMarshaler_sSimple_eClientEntry_exit
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
void
eClientEntry_exit(CELLIDX idx)
{
    ER      ercd_;
    FLGPTN  flgptn;
    int16_t  func_id_ = 11;    /* id of exit: 11 */
    tMarshaler_sSimple_CB *p_cellcb;

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
