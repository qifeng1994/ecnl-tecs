/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
 */
#include "tGeneralLighting_tecsgen.h"
#include "tGeneralLighting_factory.h"

/* entry port descriptor type #_EDT_# */
/* eGeneralLighting : omitted by entry port optimize */

/* entry port skelton function #_EPSF_# */
/* eGeneralLighting : omitted by entry port optimize */

/* entry port skelton function table #_EPSFT_# */
/* eGeneralLighting : omitted by entry port optimize */

/* entry port descriptor referenced by call port (differ from actual definition) #_CPEPD_# */

/* call port array #_CPA_# */

/* array of attr/var #_AVAI_# */
/* entry port descriptor #_EPD_# */
/* eGeneralLighting : omitted by entry port optimize */
/* CB initialize code #_CIC_# */
void
tGeneralLighting_CB_initialize()
{
    tGeneralLighting_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
