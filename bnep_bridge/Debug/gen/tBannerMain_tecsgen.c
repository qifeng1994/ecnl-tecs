/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
 */
#include "tBannerMain_tecsgen.h"
#include "tBannerMain_factory.h"

/* entry port descriptor type #_EDT_# */
/* eBannerInitialize : omitted by entry port optimize */

/* entry port skelton function #_EPSF_# */
/* eBannerInitialize : omitted by entry port optimize */

/* entry port skelton function table #_EPSFT_# */
/* eBannerInitialize : omitted by entry port optimize */

/* entry port descriptor referenced by call port (differ from actual definition) #_CPEPD_# */

/* call port array #_CPA_# */

/* array of attr/var #_AVAI_# */
/* cell INIB #_INIB_# */
tBannerMain_INIB tBannerMain_SINGLE_CELL_INIB = 
{
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    TARGET_NAME,                             /* targetName */
    "",                                      /* copyrightNotice */
};

/* entry port descriptor #_EPD_# */
/* eBannerInitialize : omitted by entry port optimize */
/* CB initialize code #_CIC_# */
void
tBannerMain_CB_initialize()
{
    SET_CB_INIB_POINTER(i,p_cb)
    INITIALIZE_CB()
}
