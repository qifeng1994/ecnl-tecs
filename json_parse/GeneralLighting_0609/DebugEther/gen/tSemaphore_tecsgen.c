/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
 */
#include "tSemaphore_tecsgen.h"
#include "tSemaphore_factory.h"

/* entry port descriptor type #_EDT_# */
/* eSemaphore : omitted by entry port optimize */

/* eiSemaphore : omitted by entry port optimize */

/* entry port skelton function #_EPSF_# */
/* eSemaphore : omitted by entry port optimize */
/* eiSemaphore : omitted by entry port optimize */

/* entry port skelton function table #_EPSFT_# */
/* eSemaphore : omitted by entry port optimize */
/* eiSemaphore : omitted by entry port optimize */

/* entry port descriptor referenced by call port (differ from actual definition) #_CPEPD_# */


/* call port array #_CPA_# */


/* array of attr/var #_AVAI_# */
/* cell INIB #_INIB_# */
tSemaphore_INIB tSemaphore_INIB_tab[] = {
    /* cell: tSemaphore_CB_tab[0]:  SerialPort1_ReceiveSemaphore id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        SEMID_tSemaphore_SerialPort1_ReceiveSemaphore, /* id */
    },
    /* cell: tSemaphore_CB_tab[1]:  SerialPort1_SendSemaphore id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        SEMID_tSemaphore_SerialPort1_SendSemaphore, /* id */
    },
};

/* entry port descriptor #_EPD_# */
/* eSemaphore : omitted by entry port optimize */
/* eiSemaphore : omitted by entry port optimize */
/* eSemaphore : omitted by entry port optimize */
/* eiSemaphore : omitted by entry port optimize */
/* CB initialize code #_CIC_# */
void
tSemaphore_CB_initialize()
{
    tSemaphore_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
