/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
 */
#ifndef tMbedSerial_TECSGEN_H
#define tMbedSerial_TECSGEN_H

/*
 * celltype          :  tMbedSerial
 * global name       :  tMbedSerial
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  yes
 * has_INIB          :  yes
 * rom               :  yes
 * CB initializer    :  yes
 */

/* global header #_IGH_# */
#include "global_tecsgen.h"

/* signature header #_ISH_# */
#include "sSIOPort_tecsgen.h"
#include "siSIOCBR_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* cell INIB type definition #_CIP_# */
typedef const struct tag_tMbedSerial_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        tx;
    int32_t        rx;
    uint32_t       baudRate;
}  tMbedSerial_INIB;
/* cell CB type definition #_CCTPA_# */
typedef struct tag_tMbedSerial_CB {
    tMbedSerial_INIB  *_inib;
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    bool_t         initialized;
    serial_t       serial;
}  tMbedSerial_CB;
/* singleton cell CB prototype declaration #_MCPB_# */
extern tMbedSerial_CB  tMbedSerial_CB_tab[];

/* celltype IDX type #_CTIX_# */
typedef struct tag_tMbedSerial_CB *tMbedSerial_IDX;

/* prototype declaration of entry port function #_EPP_# */
/* sSIOPort */
void         tMbedSerial_eSIOPort_open(tMbedSerial_IDX idx);
void         tMbedSerial_eSIOPort_close(tMbedSerial_IDX idx);
bool_t       tMbedSerial_eSIOPort_putChar(tMbedSerial_IDX idx, char c);
int_t        tMbedSerial_eSIOPort_getChar(tMbedSerial_IDX idx);
void         tMbedSerial_eSIOPort_enableCBR(tMbedSerial_IDX idx, uint_t cbrtn);
void         tMbedSerial_eSIOPort_disableCBR(tMbedSerial_IDX idx, uint_t cbrtn);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* to get the definition of CB type of referenced celltype for optimization #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tMbedSerial_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSIOPortGRPeachMain_tecsgen.h"
#ifdef  tMbedSerial_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tMbedSerial_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tMbedSerial_ID_BASE         (1)  /* ID Base  #_NIDB_# */
#define tMbedSerial_N_CELL          (1)  /*  number of cells  #_NCEL_# */

/* IDX validation macro #_CVI_# */
#define tMbedSerial_VALID_IDX(IDX) (1)


/* celll CB macro #_GCB_# */
#define tMbedSerial_GET_CELLCB(idx) (idx)

/* attr access  #_AAM_# */
#define tMbedSerial_ATTR_tx( p_that )	((p_that)->_inib->tx)
#define tMbedSerial_ATTR_rx( p_that )	((p_that)->_inib->rx)
#define tMbedSerial_ATTR_baudRate( p_that )	((p_that)->_inib->baudRate)

#define tMbedSerial_GET_tx(p_that)	((p_that)->_inib->tx)
#define tMbedSerial_GET_rx(p_that)	((p_that)->_inib->rx)
#define tMbedSerial_GET_baudRate(p_that)	((p_that)->_inib->baudRate)


/* var access macro #_VAM_# */
#define tMbedSerial_VAR_initialized(p_that)	((p_that)->initialized)
#define tMbedSerial_VAR_serial(p_that)	((p_that)->serial)

#define tMbedSerial_GET_initialized(p_that)	((p_that)->initialized)
#define tMbedSerial_SET_initialized(p_that,val)	((p_that)->initialized=(val))
#define tMbedSerial_GET_serial(p_that)	((p_that)->serial)
#define tMbedSerial_SET_serial(p_that,val)	((p_that)->serial=(val))

#ifndef TECSFLOW
 /* call port function macro #_CPM_# */
#define tMbedSerial_ciSIOCBR_readySend( p_that ) \
	  tSIOPortGRPeachMain_eiSIOCBR_readySend( \
	   (tSIOPortGRPeachMain_IDX)0 )
#define tMbedSerial_ciSIOCBR_readyReceive( p_that ) \
	  tSIOPortGRPeachMain_eiSIOCBR_readyReceive( \
	   (tSIOPortGRPeachMain_IDX)0 )

#else  /* TECSFLOW */
#define tMbedSerial_ciSIOCBR_readySend( p_that ) \
	  (p_that)->ciSIOCBR.readySend__T( \
 )
#define tMbedSerial_ciSIOCBR_readyReceive( p_that ) \
	  (p_that)->ciSIOCBR.readyReceive__T( \
 )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* prototype declaration of entry port function (referenced when VMT useless optimise enabled) #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX validation macro (abbrev.) #_CVIA_# */
#define VALID_IDX(IDX)  tMbedSerial_VALID_IDX(IDX)


/* cell CB macro (abbrev) #_GCBA_# */
#define GET_CELLCB(idx)  tMbedSerial_GET_CELLCB(idx)

/* CELLCB type (abbrev) #_CCT_# */
#define CELLCB	tMbedSerial_CB

/* celltype IDX type (abbrev) #_CTIXA_# */
#define CELLIDX	tMbedSerial_IDX


/* attr access macro (abbrev) #_AAMA_# */
#define ATTR_tx              tMbedSerial_ATTR_tx( p_cellcb )
#define ATTR_rx              tMbedSerial_ATTR_rx( p_cellcb )
#define ATTR_baudRate        tMbedSerial_ATTR_baudRate( p_cellcb )


/* var access macro (abbrev) #_VAMA_# */
#define VAR_initialized      tMbedSerial_VAR_initialized( p_cellcb )
#define VAR_serial           tMbedSerial_VAR_serial( p_cellcb )

/* call port function macro (abbrev) #_CPMA_# */
#define ciSIOCBR_readySend( ) \
          ((void)p_cellcb, tMbedSerial_ciSIOCBR_readySend( p_cellcb ))
#define ciSIOCBR_readyReceive( ) \
          ((void)p_cellcb, tMbedSerial_ciSIOCBR_readyReceive( p_cellcb ))




/* entry port function macro (abbrev) #_EPM_# */
#define eSIOPort_open    tMbedSerial_eSIOPort_open
#define eSIOPort_close   tMbedSerial_eSIOPort_close
#define eSIOPort_putChar tMbedSerial_eSIOPort_putChar
#define eSIOPort_getChar tMbedSerial_eSIOPort_getChar
#define eSIOPort_enableCBR tMbedSerial_eSIOPort_enableCBR
#define eSIOPort_disableCBR tMbedSerial_eSIOPort_disableCBR

/* iteration code (FOREACH_CELL) #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tMbedSerial_N_CELL; (i)++ ){ \
       (p_cb) = &tMbedSerial_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB initialize macro #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->initialized = false;
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tMbedSerial_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tMbedSerial_TECSGENH */
