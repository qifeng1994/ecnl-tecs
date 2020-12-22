/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
 */
#ifndef GLOBAL_TECSGEN_H
#define GLOBAL_TECSGEN_H


/* header imported by import_C #_IMP_# */
#include "tecs_kernel.h"
#include "syssvc/serial.h"
#include "t_syslog.h"
#include "target_syssvc.h"
#include "termios.h"
/**/

#ifndef TOPPERS_MACRO_ONLY

 extern void tTask_CB_initialize();
 extern void tSemaphore_CB_initialize();
 extern void tInitializeRoutine_CB_initialize();
 extern void tTerminateRoutine_CB_initialize();
 extern void tSerialPortMain_CB_initialize();
 extern void tSerialAdapter_CB_initialize();
 extern void tSysLog_CB_initialize();
 extern void tSysLogAdapter_CB_initialize();
 extern void tLogTaskMain_CB_initialize();
 extern void tBannerMain_CB_initialize();
 extern void tPutLogSIOPort_CB_initialize();
 extern void tSIOPortNTShellMain_CB_initialize();

#define INITIALIZE_TECS() \
 	tTask_CB_initialize();\
 	tSemaphore_CB_initialize();\
 	tInitializeRoutine_CB_initialize();\
 	tTerminateRoutine_CB_initialize();\
 	tSerialPortMain_CB_initialize();\
 	tSerialAdapter_CB_initialize();\
 	tSysLog_CB_initialize();\
 	tSysLogAdapter_CB_initialize();\
 	tLogTaskMain_CB_initialize();\
 	tBannerMain_CB_initialize();\
 	tPutLogSIOPort_CB_initialize();\
 	tSIOPortNTShellMain_CB_initialize();\
/* INITIALIZE_TECS terminator */

#define INITIALZE_TECSGEN() INITIALIZE_TECS()  /* for backward compatibility */

/* Descriptor for dynamic join */
#define Descriptor( signature_global_name )  DynDesc__ ## signature_global_name
#define is_descriptor_unjoined( desc )  ((desc).vdes==NULL)

#endif /* TOPPERS_MACRO_ONLY */

#define SIOSendReady   ((const uint_t)1)
#define SIOReceiveReady ((const uint_t)2)
#define DefaultTaskStackSize ((const size_t)1024)
#define LogTaskStackSize ((const size_t)1024)
#define BannerTargetName ((const char*)TARGET_NAME)
#define BannerCopyrightNotice ((const char*)"")

#endif /* GLOBAL_TECSGEN_H */
