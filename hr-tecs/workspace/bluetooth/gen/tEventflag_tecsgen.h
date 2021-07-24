/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tEventflag_TECSGEN_H
#define tEventflag_TECSGEN_H

/*
 * celltype          :  tEventflag
 * global name       :  tEventflag
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sEventflag_tecsgen.h"
#include "siEventflag_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tEventflag_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    ID             id;
}  tEventflag_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tEventflag_CB_tab           tEventflag_INIB_tab
#define tEventflag_SINGLE_CELL_CB   tEventflag_SINGLE_CELL_INIB
#define tEventflag_CB               tEventflag_INIB
#define tag_tEventflag_CB           tag_tEventflag_INIB

extern tEventflag_CB  tEventflag_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tEventflag_INIB *tEventflag_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sEventflag */
Inline ER           tEventflag_eEventflag_set(tEventflag_IDX idx, FLGPTN setPattern);
Inline ER           tEventflag_eEventflag_clear(tEventflag_IDX idx, FLGPTN clearPattern);
Inline ER           tEventflag_eEventflag_wait(tEventflag_IDX idx, FLGPTN waitPattern, MODE waitFlagMode, FLGPTN* p_flagPattern);
Inline ER           tEventflag_eEventflag_waitPolling(tEventflag_IDX idx, FLGPTN waitPattern, MODE waitFlagMode, FLGPTN* p_flagPattern);
Inline ER           tEventflag_eEventflag_waitTimeout(tEventflag_IDX idx, FLGPTN waitPattern, MODE waitFlagMode, FLGPTN* p_flagPattern, TMO timeout);
Inline ER           tEventflag_eEventflag_initialize(tEventflag_IDX idx);
Inline ER           tEventflag_eEventflag_refer(tEventflag_IDX idx, T_RFLG* pk_eventflagStatus);
/* siEventflag */
Inline ER           tEventflag_eiEventflag_set(tEventflag_IDX idx, FLGPTN setPattern);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#define tEventflag_ID_BASE          (1)  /* ID �Υ١���  #_NIDB_# */
#define tEventflag_N_CELL           (2)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tEventflag_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tEventflag_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define tEventflag_ATTR_id( p_that )	((p_that)->id)

#define tEventflag_GET_id(p_that)	((p_that)->id)



#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eEventflag */
ER             tEventflag_eEventflag_set_skel( const struct tag_sEventflag_VDES *epd, FLGPTN setPattern);
ER             tEventflag_eEventflag_clear_skel( const struct tag_sEventflag_VDES *epd, FLGPTN clearPattern);
ER             tEventflag_eEventflag_wait_skel( const struct tag_sEventflag_VDES *epd, FLGPTN waitPattern, MODE waitFlagMode, FLGPTN* p_flagPattern);
ER             tEventflag_eEventflag_waitPolling_skel( const struct tag_sEventflag_VDES *epd, FLGPTN waitPattern, MODE waitFlagMode, FLGPTN* p_flagPattern);
ER             tEventflag_eEventflag_waitTimeout_skel( const struct tag_sEventflag_VDES *epd, FLGPTN waitPattern, MODE waitFlagMode, FLGPTN* p_flagPattern, TMO timeout);
ER             tEventflag_eEventflag_initialize_skel( const struct tag_sEventflag_VDES *epd);
ER             tEventflag_eEventflag_refer_skel( const struct tag_sEventflag_VDES *epd, T_RFLG* pk_eventflagStatus);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tEventflag_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tEventflag_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tEventflag_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tEventflag_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_id              tEventflag_ATTR_id( p_cellcb )





/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eEventflag_set   tEventflag_eEventflag_set
#define eEventflag_clear tEventflag_eEventflag_clear
#define eEventflag_wait  tEventflag_eEventflag_wait
#define eEventflag_waitPolling tEventflag_eEventflag_waitPolling
#define eEventflag_waitTimeout tEventflag_eEventflag_waitTimeout
#define eEventflag_initialize tEventflag_eEventflag_initialize
#define eEventflag_refer tEventflag_eEventflag_refer
#define eiEventflag_set  tEventflag_eiEventflag_set

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tEventflag_N_CELL; (i)++ ){ \
       (p_cb) = &tEventflag_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#ifndef TOPPERS_MACRO_ONLY

/* inline �إå��� include #_INL_# */
#include "tEventflag_inline.h"

#endif /* TOPPERS_MACRO_ONLY */

#ifdef TOPPERS_CB_TYPE_ONLY

/* inline �Τ���� undef #_UDF_# */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef tEventflag_IDX
#undef FOREACH_CELL
#undef END_FOREACH_CELL
#undef INITIALIZE_CB
#undef SET_CB_INIB_POINTER
#undef ATTR_id
#undef tEventflag_ATTR_id
#undef tEventflag_GET_id
#undef ATTR_attribute
#undef tEventflag_ATTR_attribute
#undef tEventflag_GET_attribute
#undef ATTR_flagPattern
#undef tEventflag_ATTR_flagPattern
#undef tEventflag_GET_flagPattern
#undef ATTR_accessPattern
#undef tEventflag_ATTR_accessPattern
#undef tEventflag_GET_accessPattern
#undef eEventflag_set
#undef eEventflag_clear
#undef eEventflag_wait
#undef eEventflag_waitPolling
#undef eEventflag_waitTimeout
#undef eEventflag_initialize
#undef eEventflag_refer
#undef eiEventflag_set
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* tEventflag_TECSGENH */
