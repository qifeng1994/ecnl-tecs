/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
 */
#include "tMbedSerial_tecsgen.h"
#include "tMbedSerial_factory.h"

/* entry port descriptor type #_EDT_# */
/* eSIOPort : omitted by entry port optimize */

/* entry port skelton function #_EPSF_# */
/* eSIOPort : omitted by entry port optimize */

/* entry port skelton function table #_EPSFT_# */
/* eSIOPort : omitted by entry port optimize */

/* entry port descriptor referenced by call port (differ from actual definition) #_CPEPD_# */

/* call port array #_CPA_# */

/* array of attr/var #_AVAI_# */
/* cell INIB #_INIB_# */
tMbedSerial_INIB tMbedSerial_INIB_tab[] = {
    /* cell: tMbedSerial_CB_tab[0]:  SIOPortTarget1_MbedSerial id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        P6_3,                                    /* tx */
        P6_2,                                    /* rx */
        115200,                                  /* baudRate */
    },
};

/* cell CB #_CB_# */
struct tag_tMbedSerial_CB tMbedSerial_CB_tab[1];
/* entry port descriptor #_EPD_# */
/* eSIOPort : omitted by entry port optimize */
/* CB initialize code #_CIC_# */
void
tMbedSerial_CB_initialize()
{
    tMbedSerial_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
