/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCelltype_TECSGEN_H
#define tCelltype_TECSGEN_H

/*
 * celltype          :  tCelltype
 * global name       :  tCelltype
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSig_tecsgen.h"
#include "sAlloc_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tCelltype_CB {
    int  dummy;
} tCelltype_CB;
extern tCelltype_CB  tCelltype_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tCelltype_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig */
struct tagStruct tCelltype_eEnt_func1(tCelltype_IDX idx, struct tagStruct in, const struct tagStruct* in_p, struct tagStruct* inout_p, struct tagStruct* out_p);
struct tagStruct tCelltype_eEnt_func2(tCelltype_IDX idx, struct tagStruct in, const struct tagStruct* in_p, struct tagStruct* inout_p, struct tagStruct* out_p, int32_t len);
struct tagStruct tCelltype_eEnt_func3(tCelltype_IDX idx, struct tagStruct2 in, const struct tagStruct2* in_p, struct tagStruct2* inout_p, struct tagStruct2* out_p);
struct tagStruct tCelltype_eEnt_func4(tCelltype_IDX idx, struct tagStruct2 in, const struct tagStruct2* in_p, struct tagStruct2* inout_p, struct tagStruct2* out_p, int32_t len);
struct tagStruct tCelltype_eEnt_func5(tCelltype_IDX idx, struct tagStruct* inp, struct tagStruct** outp);
struct tagStruct tCelltype_eEnt_func6(tCelltype_IDX idx, struct tagStruct2* sendp, struct tagStruct2** receivep, char_t** strs, char_t*** strr, int32_t* len);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCelltype_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tAlloc_tecsgen.h"
#ifdef  tCelltype_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCelltype_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCelltype_ID_BASE           (1)  /* ID のベース  #_NIDB_# */
#define tCelltype_N_CELL            (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCelltype_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCelltype_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tCelltype_eEnt_func5_inp_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tCelltype_eEnt_func5_inp_dealloc( p_that, p ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (p) )
#define tCelltype_eEnt_func5_outp_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tCelltype_eEnt_func5_outp_dealloc( p_that, p ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (p) )
#define tCelltype_eEnt_func6_sendp_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tCelltype_eEnt_func6_sendp_dealloc( p_that, p ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (p) )
#define tCelltype_eEnt_func6_receivep_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tCelltype_eEnt_func6_receivep_dealloc( p_that, p ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (p) )
#define tCelltype_eEnt_func6_strs_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tCelltype_eEnt_func6_strs_dealloc( p_that, p ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (p) )
#define tCelltype_eEnt_func6_strr_alloc( p_that, size, p ) \
	  tAlloc_eAlloc_alloc( \
	   (tAlloc_IDX)0, (size), (p) )
#define tCelltype_eEnt_func6_strr_dealloc( p_that, p ) \
	  tAlloc_eAlloc_dealloc( \
	   (tAlloc_IDX)0, (p) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tCelltype_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCelltype_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCelltype_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCelltype_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define eEnt_func5_inp_alloc( size, p ) \
          ((void)p_cellcb, tCelltype_eEnt_func5_inp_alloc( p_cellcb, size, p ))
#define eEnt_func5_inp_dealloc( p ) \
          ((void)p_cellcb, tCelltype_eEnt_func5_inp_dealloc( p_cellcb, p ))
#define eEnt_func5_outp_alloc( size, p ) \
          ((void)p_cellcb, tCelltype_eEnt_func5_outp_alloc( p_cellcb, size, p ))
#define eEnt_func5_outp_dealloc( p ) \
          ((void)p_cellcb, tCelltype_eEnt_func5_outp_dealloc( p_cellcb, p ))
#define eEnt_func6_sendp_alloc( size, p ) \
          ((void)p_cellcb, tCelltype_eEnt_func6_sendp_alloc( p_cellcb, size, p ))
#define eEnt_func6_sendp_dealloc( p ) \
          ((void)p_cellcb, tCelltype_eEnt_func6_sendp_dealloc( p_cellcb, p ))
#define eEnt_func6_receivep_alloc( size, p ) \
          ((void)p_cellcb, tCelltype_eEnt_func6_receivep_alloc( p_cellcb, size, p ))
#define eEnt_func6_receivep_dealloc( p ) \
          ((void)p_cellcb, tCelltype_eEnt_func6_receivep_dealloc( p_cellcb, p ))
#define eEnt_func6_strs_alloc( size, p ) \
          ((void)p_cellcb, tCelltype_eEnt_func6_strs_alloc( p_cellcb, size, p ))
#define eEnt_func6_strs_dealloc( p ) \
          ((void)p_cellcb, tCelltype_eEnt_func6_strs_dealloc( p_cellcb, p ))
#define eEnt_func6_strr_alloc( size, p ) \
          ((void)p_cellcb, tCelltype_eEnt_func6_strr_alloc( p_cellcb, size, p ))
#define eEnt_func6_strr_dealloc( p ) \
          ((void)p_cellcb, tCelltype_eEnt_func6_strr_dealloc( p_cellcb, p ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_func1       tCelltype_eEnt_func1
#define eEnt_func2       tCelltype_eEnt_func2
#define eEnt_func3       tCelltype_eEnt_func3
#define eEnt_func4       tCelltype_eEnt_func4
#define eEnt_func5       tCelltype_eEnt_func5
#define eEnt_func6       tCelltype_eEnt_func6

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */

/* deallocate マクロ #_DAL_#   */
#define EENT_FUNC5_INP_DEALLOC(inp) \
	  eEnt_func5_inp_dealloc( (*(inp)).buf );  \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < (*(inp)).len; i0__++ ){  \
	      eEnt_func5_inp_dealloc( (*(inp)).buf2[i0__] );  \
	    } \
	  } \
	  eEnt_func5_inp_dealloc( (*(inp)).buf2 );  \
	  eEnt_func5_inp_dealloc( (inp) ); 
#define EENT_FUNC5_OUTP_DEALLOC(outp) \
	  eEnt_func5_outp_dealloc( (*(outp)).buf );  \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < (*(outp)).len; i0__++ ){  \
	      eEnt_func5_outp_dealloc( (*(outp)).buf2[i0__] );  \
	    } \
	  } \
	  eEnt_func5_outp_dealloc( (*(outp)).buf2 );  \
	  eEnt_func5_outp_dealloc( (outp) ); 
#define EENT_FUNC6_SENDP_DEALLOC(sendp, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eEnt_func6_sendp_dealloc( (sendp)[i0__].buf );  \
	      eEnt_func6_sendp_dealloc( (sendp)[i0__].st.buf );  \
	      { int_t  i2__; \
	        for( i2__ = 0; i2__ < (sendp)[i0__].st.len; i2__++ ){  \
	          eEnt_func6_sendp_dealloc( (sendp)[i0__].st.buf2[i2__] );  \
	        } \
	      } \
	      eEnt_func6_sendp_dealloc( (sendp)[i0__].st.buf2 );  \
	      eEnt_func6_sendp_dealloc( (*(sendp)[i0__].stp).buf );  \
	      { int_t  i2__; \
	        for( i2__ = 0; i2__ < (*(sendp)[i0__].stp).len; i2__++ ){  \
	          eEnt_func6_sendp_dealloc( (*(sendp)[i0__].stp).buf2[i2__] );  \
	        } \
	      } \
	      eEnt_func6_sendp_dealloc( (*(sendp)[i0__].stp).buf2 );  \
	      eEnt_func6_sendp_dealloc( (sendp)[i0__].stp );  \
	    } \
	  } \
	  eEnt_func6_sendp_dealloc( (sendp) ); 
#define EENT_FUNC6_RECEIVEP_DEALLOC(receivep, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eEnt_func6_receivep_dealloc( (receivep)[i0__].buf );  \
	      eEnt_func6_receivep_dealloc( (receivep)[i0__].st.buf );  \
	      { int_t  i2__; \
	        for( i2__ = 0; i2__ < (receivep)[i0__].st.len; i2__++ ){  \
	          eEnt_func6_receivep_dealloc( (receivep)[i0__].st.buf2[i2__] );  \
	        } \
	      } \
	      eEnt_func6_receivep_dealloc( (receivep)[i0__].st.buf2 );  \
	      eEnt_func6_receivep_dealloc( (*(receivep)[i0__].stp).buf );  \
	      { int_t  i2__; \
	        for( i2__ = 0; i2__ < (*(receivep)[i0__].stp).len; i2__++ ){  \
	          eEnt_func6_receivep_dealloc( (*(receivep)[i0__].stp).buf2[i2__] );  \
	        } \
	      } \
	      eEnt_func6_receivep_dealloc( (*(receivep)[i0__].stp).buf2 );  \
	      eEnt_func6_receivep_dealloc( (receivep)[i0__].stp );  \
	    } \
	  } \
	  eEnt_func6_receivep_dealloc( (receivep) ); 
#define EENT_FUNC6_STRS_DEALLOC(strs, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eEnt_func6_strs_dealloc( (strs)[i0__] );  \
	    } \
	  } \
	  eEnt_func6_strs_dealloc( (strs) ); 
#define EENT_FUNC6_STRR_DEALLOC(strr, count__) \
	  { int_t  i0__; \
	    for( i0__ = 0; i0__ < count__; i0__++ ){  \
	      eEnt_func6_strr_dealloc( (strr)[i0__] );  \
	    } \
	  } \
	  eEnt_func6_strr_dealloc( (strr) ); 

/* deallocate マクロ #_DAL_#  _RESET */
#define EENT_FUNC5_INP_DEALLOC_RESET(inp) \
	  if( (inp) ){ \
	    if( (*(inp)).buf ){ \
	      eEnt_func5_inp_dealloc( (*(inp)).buf );  \
	    } \
	    if( (*(inp)).buf2 ){ \
	      { int_t  i1__; \
	        for( i1__ = 0; i1__ < (*(inp)).len; i1__++ ){  \
	          if( (*(inp)).buf2[i1__] ){ \
	            eEnt_func5_inp_dealloc( (*(inp)).buf2[i1__] );  \
	          } \
	        } \
	      } \
	      eEnt_func5_inp_dealloc( (*(inp)).buf2 );  \
	    } \
	    eEnt_func5_inp_dealloc( (inp) );  \
	  }
#define EENT_FUNC5_OUTP_DEALLOC_RESET(outp) \
	  if( (outp) ){ \
	    if( (*(outp)).buf ){ \
	      eEnt_func5_outp_dealloc( (*(outp)).buf );  \
	    } \
	    if( (*(outp)).buf2 ){ \
	      { int_t  i1__; \
	        for( i1__ = 0; i1__ < (*(outp)).len; i1__++ ){  \
	          if( (*(outp)).buf2[i1__] ){ \
	            eEnt_func5_outp_dealloc( (*(outp)).buf2[i1__] );  \
	          } \
	        } \
	      } \
	      eEnt_func5_outp_dealloc( (*(outp)).buf2 );  \
	    } \
	    eEnt_func5_outp_dealloc( (outp) );  \
	  }
#define EENT_FUNC6_SENDP_DEALLOC_RESET(sendp, count__) \
	  if( (sendp) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (sendp)[i0__].buf ){ \
	          eEnt_func6_sendp_dealloc( (sendp)[i0__].buf );  \
	        } \
	        if( (sendp)[i0__].st.buf ){ \
	          eEnt_func6_sendp_dealloc( (sendp)[i0__].st.buf );  \
	        } \
	        if( (sendp)[i0__].st.buf2 ){ \
	          { int_t  i3__; \
	            for( i3__ = 0; i3__ < (sendp)[i0__].st.len; i3__++ ){  \
	              if( (sendp)[i0__].st.buf2[i3__] ){ \
	                eEnt_func6_sendp_dealloc( (sendp)[i0__].st.buf2[i3__] );  \
	              } \
	            } \
	          } \
	          eEnt_func6_sendp_dealloc( (sendp)[i0__].st.buf2 );  \
	        } \
	        if( (sendp)[i0__].stp ){ \
	          if( (*(sendp)[i0__].stp).buf ){ \
	            eEnt_func6_sendp_dealloc( (*(sendp)[i0__].stp).buf );  \
	          } \
	          if( (*(sendp)[i0__].stp).buf2 ){ \
	            { int_t  i4__; \
	              for( i4__ = 0; i4__ < (*(sendp)[i0__].stp).len; i4__++ ){  \
	                if( (*(sendp)[i0__].stp).buf2[i4__] ){ \
	                  eEnt_func6_sendp_dealloc( (*(sendp)[i0__].stp).buf2[i4__] );  \
	                } \
	              } \
	            } \
	            eEnt_func6_sendp_dealloc( (*(sendp)[i0__].stp).buf2 );  \
	          } \
	          eEnt_func6_sendp_dealloc( (sendp)[i0__].stp );  \
	        } \
	      } \
	    } \
	    eEnt_func6_sendp_dealloc( (sendp) );  \
	  }
#define EENT_FUNC6_RECEIVEP_DEALLOC_RESET(receivep, count__) \
	  if( (receivep) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (receivep)[i0__].buf ){ \
	          eEnt_func6_receivep_dealloc( (receivep)[i0__].buf );  \
	        } \
	        if( (receivep)[i0__].st.buf ){ \
	          eEnt_func6_receivep_dealloc( (receivep)[i0__].st.buf );  \
	        } \
	        if( (receivep)[i0__].st.buf2 ){ \
	          { int_t  i3__; \
	            for( i3__ = 0; i3__ < (receivep)[i0__].st.len; i3__++ ){  \
	              if( (receivep)[i0__].st.buf2[i3__] ){ \
	                eEnt_func6_receivep_dealloc( (receivep)[i0__].st.buf2[i3__] );  \
	              } \
	            } \
	          } \
	          eEnt_func6_receivep_dealloc( (receivep)[i0__].st.buf2 );  \
	        } \
	        if( (receivep)[i0__].stp ){ \
	          if( (*(receivep)[i0__].stp).buf ){ \
	            eEnt_func6_receivep_dealloc( (*(receivep)[i0__].stp).buf );  \
	          } \
	          if( (*(receivep)[i0__].stp).buf2 ){ \
	            { int_t  i4__; \
	              for( i4__ = 0; i4__ < (*(receivep)[i0__].stp).len; i4__++ ){  \
	                if( (*(receivep)[i0__].stp).buf2[i4__] ){ \
	                  eEnt_func6_receivep_dealloc( (*(receivep)[i0__].stp).buf2[i4__] );  \
	                } \
	              } \
	            } \
	            eEnt_func6_receivep_dealloc( (*(receivep)[i0__].stp).buf2 );  \
	          } \
	          eEnt_func6_receivep_dealloc( (receivep)[i0__].stp );  \
	        } \
	      } \
	    } \
	    eEnt_func6_receivep_dealloc( (receivep) );  \
	  }
#define EENT_FUNC6_STRS_DEALLOC_RESET(strs, count__) \
	  if( (strs) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (strs)[i0__] ){ \
	          eEnt_func6_strs_dealloc( (strs)[i0__] );  \
	        } \
	      } \
	    } \
	    eEnt_func6_strs_dealloc( (strs) );  \
	  }
#define EENT_FUNC6_STRR_DEALLOC_RESET(strr, count__) \
	  if( (strr) ){ \
	    { int_t  i0__; \
	      for( i0__ = 0; i0__ < count__; i0__++ ){  \
	        if( (strr)[i0__] ){ \
	          eEnt_func6_strr_dealloc( (strr)[i0__] );  \
	        } \
	      } \
	    } \
	    eEnt_func6_strr_dealloc( (strr) );  \
	  }
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCelltype_TECSGENH */
