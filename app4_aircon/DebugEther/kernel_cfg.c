/* kernel_cfg.c */
#include "kernel/kernel_int.h"
#include "kernel_cfg.h"

#if !(TKERNEL_PRID == 0x0007U && (TKERNEL_PRVER & 0xf000U) == 0x3000U)
#error The kernel does not match this configuration file.
#endif

/*
 *  Include Directives
 */

#include "target_timer.h"
#include "main.h"
#include <tinet_config.h>
#include <net/net_endian.h>
#include <netinet/in.h>
#include <netinet/in_itron.h>
#include <tinet_nic_defs.h>
#include <netinet/in_var.h>
#include <net/ethernet.h>
#include <net/if6_var.h>
#include <echonet.h>
#include "tTask_tecsgen.h"
#include "tInitializeRoutine_tecsgen.h"
#include "tTerminateRoutine_tecsgen.h"
#include "target_sil.h"
#include <itron.h>
#include <tinet_defs.h>
#include <tinet_config.h>
#include <net/if.h>
#include <net/if_ppp.h>
#include <net/if_loop.h>
#include <net/ethernet.h>
#include <net/if_arp.h>
#include <net/net.h>
#include <net/net_endian.h>
#include <net/net_buf.h>
#include <net/net_timer.h>
#include <net/ppp_var.h>
#include <net/ether_var.h>
#include <netinet/in.h>
#include <netinet/in_var.h>
#include <netinet/ip.h>
#include <netinet/ip_var.h>
#include <netinet/tcp.h>
#include <netinet/tcp_var.h>
#include <netinet/udp_var.h>
#include "device.h"
#include "tinet_target_config.h"
#include "main.h"
#include "netapp/dhcp4_cli.h"
#include "netapp/resolver.h"
#include "ntp_cli.h"
#include "net_misc.h"
#include "ffarch.h"
#include "usb_hbth.h"
#include "ntshell_main.h"
#include "main.h"
#include "echonet_task.h"
#include "echonet_lcl_task.h"
#include "echonet_lcl_task.h"
#include "echonet.h"
#include "echonet_main.h"

/*
 *  Task Management Functions
 */

#define TNUM_STSKID	15
const ID _kernel_tmax_tskid = (TMIN_TSKID + TNUM_TSKID - 1);
const ID _kernel_tmax_stskid = (TMIN_TSKID + TNUM_STSKID - 1);

/*static*/ STK_T _kernel_stack_TSKID_tTask_Task[COUNT_STK_T(1024)];
/*static*/ STK_T _kernel_stack_TSKID_tTask_LogTask_Task[COUNT_STK_T(1024)];
/*static*/ STK_T _kernel_stack_IF_MBED_PHY_TASK[COUNT_STK_T(IF_MBED_PHY_STACK_SIZE)];
/*static*/ STK_T _kernel_stack_NET_TIMER_TASK[COUNT_STK_T(NET_TIMER_STACK_SIZE)];
/*static*/ STK_T _kernel_stack_ETHER_OUTPUT_TASK[COUNT_STK_T(ETHER_OUTPUT_STACK_SIZE)];
/*static*/ STK_T _kernel_stack_ETHER_INPUT_TASK[COUNT_STK_T(ETHER_INPUT_STACK_SIZE)];
/*static*/ STK_T _kernel_stack_TCP_OUTPUT_TASK[COUNT_STK_T(TCP_OUT_TASK_STACK_SIZE)];
/*static*/ STK_T _kernel_stack_UDP_OUTPUT_TASK[COUNT_STK_T(UDP_OUT_TASK_STACK_SIZE)];
/*static*/ STK_T _kernel_stack_NET_MISC_TASK[COUNT_STK_T(NET_MISC_STACK_SIZE)];
/*static*/ STK_T _kernel_stack_FFARCH_TASK[COUNT_STK_T(FFARCH_STACK_SIZE)];
/*static*/ STK_T _kernel_stack_NTSHELL_TASK[COUNT_STK_T(NTSHELL_STACK_SIZE)];
/*static*/ STK_T _kernel_stack_ECHONET_SVC_TASK[COUNT_STK_T(ECHONET_TASK_STACK_SIZE)];
/*static*/ STK_T _kernel_stack_ECHONET_UDP_TASK[COUNT_STK_T(ECHONET_UDP_TASK_STACK_SIZE)];
/*static*/ STK_T _kernel_stack_ECHONET_MAIN_TASK[COUNT_STK_T(ECHONET_MAIN_STACK_SIZE)];
/*static*/ STK_T _kernel_stack_MAIN_TASK[COUNT_STK_T(MAIN_STACK_SIZE)];
const TINIB _kernel_tinib_table[TNUM_STSKID] = {
	{ (TA_ACT), (intptr_t)(&tTask_INIB_tab[0]), (TASK)(tTask_start), INT_PRIORITY(10), ROUND_STK_T(1024), _kernel_stack_TSKID_tTask_Task, "tTask_start" },
	{ (TA_ACT), (intptr_t)(&tTask_INIB_tab[1]), (TASK)(tTask_start), INT_PRIORITY(3), ROUND_STK_T(1024), _kernel_stack_TSKID_tTask_LogTask_Task, "tTask_start" },
	{ (TA_ACT), (intptr_t)(1), (TASK)(if_mbed_phy_task), INT_PRIORITY(IF_MBED_PHY_PRIORITY), ROUND_STK_T(IF_MBED_PHY_STACK_SIZE), _kernel_stack_IF_MBED_PHY_TASK, "if_mbed_phy_task" },
	{ (TA_HLNG), (intptr_t)(0), (TASK)(net_timer_task), INT_PRIORITY(NET_TIMER_PRIORITY), ROUND_STK_T(NET_TIMER_STACK_SIZE), _kernel_stack_NET_TIMER_TASK, "net_timer_task" },
	{ (TA_HLNG), (intptr_t)(0), (TASK)(ether_output_task), INT_PRIORITY(ETHER_OUTPUT_PRIORITY), ROUND_STK_T(ETHER_OUTPUT_STACK_SIZE), _kernel_stack_ETHER_OUTPUT_TASK, "ether_output_task" },
	{ (TA_HLNG|TA_ACT), (intptr_t)(0), (TASK)(ether_input_task), INT_PRIORITY(ETHER_INPUT_PRIORITY), ROUND_STK_T(ETHER_INPUT_STACK_SIZE), _kernel_stack_ETHER_INPUT_TASK, "ether_input_task" },
	{ (TA_HLNG), (intptr_t)(0), (TASK)(tcp_output_task), INT_PRIORITY(TCP_OUT_TASK_PRIORITY), ROUND_STK_T(TCP_OUT_TASK_STACK_SIZE), _kernel_stack_TCP_OUTPUT_TASK, "tcp_output_task" },
	{ (TA_HLNG), (intptr_t)(0), (TASK)(udp_output_task), INT_PRIORITY(UDP_OUT_TASK_PRIORITY), ROUND_STK_T(UDP_OUT_TASK_STACK_SIZE), _kernel_stack_UDP_OUTPUT_TASK, "udp_output_task" },
	{ (TA_HLNG|TA_ACT), (intptr_t)(0), (TASK)(net_misc_task), INT_PRIORITY(NET_MISC_MAIN_PRIORITY), ROUND_STK_T(NET_MISC_STACK_SIZE), _kernel_stack_NET_MISC_TASK, "net_misc_task" },
	{ (TA_NULL), (intptr_t)(0), (TASK)(ffarch_task), INT_PRIORITY(FFARCH_PRIORITY), ROUND_STK_T(FFARCH_STACK_SIZE), _kernel_stack_FFARCH_TASK, "ffarch_task" },
	{ (TA_FPU), (intptr_t)(0), (TASK)(ntshell_task), INT_PRIORITY(NTSHELL_PRIORITY), ROUND_STK_T(NTSHELL_STACK_SIZE), _kernel_stack_NTSHELL_TASK, "ntshell_task" },
	{ (TA_HLNG), (intptr_t)(0), (TASK)(echonet_task), INT_PRIORITY(ECHONET_TASK_PRIORITY), ROUND_STK_T(ECHONET_TASK_STACK_SIZE), _kernel_stack_ECHONET_SVC_TASK, "echonet_task" },
	{ (TA_HLNG), (intptr_t)(0), (TASK)(echonet_udp_task), INT_PRIORITY(ECHONET_UDP_TASK_PRIORITY), ROUND_STK_T(ECHONET_UDP_TASK_STACK_SIZE), _kernel_stack_ECHONET_UDP_TASK, "echonet_udp_task" },
	{ (TA_ACT), (intptr_t)(0), (TASK)(echonet_main_task), INT_PRIORITY(ECHONET_MAIN_PRIORITY), ROUND_STK_T(ECHONET_MAIN_STACK_SIZE), _kernel_stack_ECHONET_MAIN_TASK, "echonet_main_task" },
	{ (TA_NULL), (intptr_t)(0), (TASK)(main_task), INT_PRIORITY(MAIN_PRIORITY), ROUND_STK_T(MAIN_STACK_SIZE), _kernel_stack_MAIN_TASK, "main_task" }
};

TOPPERS_EMPTY_LABEL(TINIB, _kernel_atinib_table);

TCB _kernel_tcb_table[TNUM_TSKID];

const ID _kernel_torder_table[TNUM_STSKID] = { 
	TSKID_tTask_Task, TSKID_tTask_LogTask_Task, IF_MBED_PHY_TASK, NET_TIMER_TASK, ETHER_OUTPUT_TASK, ETHER_INPUT_TASK, TCP_OUTPUT_TASK, UDP_OUTPUT_TASK, NET_MISC_TASK, FFARCH_TASK, NTSHELL_TASK, ECHONET_SVC_TASK, ECHONET_UDP_TASK, ECHONET_MAIN_TASK, MAIN_TASK
};

/*
 *  Semaphore Functions
 */

#define TNUM_SSEMID	40
const ID _kernel_tmax_semid = (TMIN_SEMID + TNUM_SEMID - 1);
const ID _kernel_tmax_ssemid = (TMIN_SEMID + TNUM_SSEMID - 1);

const SEMINIB _kernel_seminib_table[TNUM_SSEMID] = {
	{ (TA_NULL), (0), (1) },
	{ (TA_NULL), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (NUM_IF_MBED_TXBUF), (NUM_IF_MBED_TXBUF) },
	{ (TA_TPRI), (0), (NUM_IF_MBED_RXBUF) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (0), (NUM_NET_CALLOUT) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (0), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (0), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) },
	{ (TA_TPRI), (1), (1) }
};

TOPPERS_EMPTY_LABEL(SEMINIB, _kernel_aseminib_table);

SEMCB _kernel_semcb_table[TNUM_SEMID];

/*
 *  Eventflag Functions
 */

#define TNUM_SFLGID	25
const ID _kernel_tmax_flgid = (TMIN_FLGID + TNUM_FLGID - 1);
const ID _kernel_tmax_sflgid = (TMIN_FLGID + TNUM_SFLGID - 1);

const FLGINIB _kernel_flginib_table[TNUM_SFLGID] = {
	{ (TA_WMUL), (0x00) },
	{ (TA_TFIFO|TA_WSGL), (TCP_CEP_EVT_CLOSED) },
	{ (TA_TFIFO|TA_WSGL), (TCP_CEP_EVT_SWBUF_READY) },
	{ (TA_TFIFO|TA_WSGL), (0) },
	{ (TA_TFIFO|TA_WSGL), (TCP_CEP_EVT_CLOSED) },
	{ (TA_TFIFO|TA_WSGL), (TCP_CEP_EVT_SWBUF_READY) },
	{ (TA_TFIFO|TA_WSGL), (0) },
	{ (TA_TFIFO|TA_WSGL), (TCP_CEP_EVT_CLOSED) },
	{ (TA_TFIFO|TA_WSGL), (TCP_CEP_EVT_SWBUF_READY) },
	{ (TA_TFIFO|TA_WSGL), (0) },
	{ (TA_TFIFO|TA_WSGL), (TCP_CEP_EVT_CLOSED) },
	{ (TA_TFIFO|TA_WSGL), (TCP_CEP_EVT_SWBUF_READY) },
	{ (TA_TFIFO|TA_WSGL), (0) },
	{ (TA_TFIFO|TA_WSGL), (TCP_CEP_EVT_CLOSED) },
	{ (TA_TFIFO|TA_WSGL), (TCP_CEP_EVT_SWBUF_READY) },
	{ (TA_TFIFO|TA_WSGL), (0) },
	{ (TA_TFIFO|TA_WSGL), (TCP_CEP_EVT_CLOSED) },
	{ (TA_TFIFO|TA_WSGL), (TCP_CEP_EVT_SWBUF_READY) },
	{ (TA_TFIFO|TA_WSGL), (0) },
	{ (TA_TFIFO|TA_WSGL), (TCP_CEP_EVT_CLOSED) },
	{ (TA_TFIFO|TA_WSGL), (TCP_CEP_EVT_SWBUF_READY) },
	{ (TA_TFIFO|TA_WSGL), (0) },
	{ (TA_TFIFO|TA_WSGL), (TCP_CEP_EVT_CLOSED) },
	{ (TA_TFIFO|TA_WSGL), (TCP_CEP_EVT_SWBUF_READY) },
	{ (TA_TFIFO|TA_WSGL), (0) }
};

TOPPERS_EMPTY_LABEL(FLGINIB, _kernel_aflginib_table);

FLGCB _kernel_flgcb_table[TNUM_FLGID];

/*
 *  Dataqueue Functions
 */

#define TNUM_SDTQID	13
const ID _kernel_tmax_dtqid = (TMIN_DTQID + TNUM_DTQID - 1);
const ID _kernel_tmax_sdtqid = (TMIN_DTQID + TNUM_SDTQID - 1);

static DTQMB _kernel_dtqmb_DTQ_ETHER_OUTPUT[NUM_DTQ_ETHER_OUTPUT];
static DTQMB _kernel_dtqmb_ECHONET_API_DATAQUEUE[ECHONET_API_DATAQUEUE_COUNT];
static DTQMB _kernel_dtqmb_ECHONET_SVC_DATAQUEUE[ECHONET_SVC_DATAQUEUE_COUNT];
static DTQMB _kernel_dtqmb_ECHONET_UDP_DATAQUEUE[ECHONET_UDP_DATAQUEUE_COUNT];
static DTQMB _kernel_dtqmb_MAIN_DATAQUEUE[NUM_MAIN_DATAQUEUE];
static DTQMB _kernel_dtqmb_DTQ_UDP4_RCVQ1[NUM_DTQ_UDP_RCVQ];
static DTQMB _kernel_dtqmb_DTQ_UDP4_RCVQ2[NUM_DTQ_UDP_RCVQ];
static DTQMB _kernel_dtqmb_DTQ_UDP4_RCVQ3[NUM_DTQ_UDP_RCVQ];
static DTQMB _kernel_dtqmb_DTQ_UDP4_RCVQ4[NUM_DTQ_UDP_RCVQ];
static DTQMB _kernel_dtqmb_DTQ_UDP4_RCVQ5[NUM_DTQ_UDP_RCVQ];
static DTQMB _kernel_dtqmb_DTQ_UDP4_RCVQ6[NUM_DTQ_UDP_RCVQ];
static DTQMB _kernel_dtqmb_DTQ_UDP4_RCVQ7[NUM_DTQ_UDP_RCVQ];
static DTQMB _kernel_dtqmb_DTQ_UDP4_RCVQ8[NUM_DTQ_UDP_RCVQ];
const DTQINIB _kernel_dtqinib_table[TNUM_SDTQID] = {
	{ (TA_TFIFO), (NUM_DTQ_ETHER_OUTPUT), _kernel_dtqmb_DTQ_ETHER_OUTPUT },
	{ (TA_TFIFO), (ECHONET_API_DATAQUEUE_COUNT), _kernel_dtqmb_ECHONET_API_DATAQUEUE },
	{ (TA_TFIFO), (ECHONET_SVC_DATAQUEUE_COUNT), _kernel_dtqmb_ECHONET_SVC_DATAQUEUE },
	{ (TA_TFIFO), (ECHONET_UDP_DATAQUEUE_COUNT), _kernel_dtqmb_ECHONET_UDP_DATAQUEUE },
	{ (TA_TFIFO), (NUM_MAIN_DATAQUEUE), _kernel_dtqmb_MAIN_DATAQUEUE },
	{ (TA_TFIFO), (NUM_DTQ_UDP_RCVQ), _kernel_dtqmb_DTQ_UDP4_RCVQ1 },
	{ (TA_TFIFO), (NUM_DTQ_UDP_RCVQ), _kernel_dtqmb_DTQ_UDP4_RCVQ2 },
	{ (TA_TFIFO), (NUM_DTQ_UDP_RCVQ), _kernel_dtqmb_DTQ_UDP4_RCVQ3 },
	{ (TA_TFIFO), (NUM_DTQ_UDP_RCVQ), _kernel_dtqmb_DTQ_UDP4_RCVQ4 },
	{ (TA_TFIFO), (NUM_DTQ_UDP_RCVQ), _kernel_dtqmb_DTQ_UDP4_RCVQ5 },
	{ (TA_TFIFO), (NUM_DTQ_UDP_RCVQ), _kernel_dtqmb_DTQ_UDP4_RCVQ6 },
	{ (TA_TFIFO), (NUM_DTQ_UDP_RCVQ), _kernel_dtqmb_DTQ_UDP4_RCVQ7 },
	{ (TA_TFIFO), (NUM_DTQ_UDP_RCVQ), _kernel_dtqmb_DTQ_UDP4_RCVQ8 }
};

TOPPERS_EMPTY_LABEL(DTQINIB, _kernel_adtqinib_table);

DTQCB _kernel_dtqcb_table[TNUM_DTQID];

/*
 *  Priority Dataqueue Functions
 */

#define TNUM_SPDQID	0
const ID _kernel_tmax_pdqid = (TMIN_PDQID + TNUM_PDQID - 1);
const ID _kernel_tmax_spdqid = (TMIN_PDQID + TNUM_SPDQID - 1);

TOPPERS_EMPTY_LABEL(const PDQINIB, _kernel_pdqinib_table);

TOPPERS_EMPTY_LABEL(PDQINIB, _kernel_apdqinib_table);

TOPPERS_EMPTY_LABEL(PDQCB, _kernel_pdqcb_table);

/*
 *  Mutex Functions
 */

#define TNUM_SMTXID	0
const ID _kernel_tmax_mtxid = (TMIN_MTXID + TNUM_MTXID - 1);
const ID _kernel_tmax_smtxid = (TMIN_MTXID + TNUM_SMTXID - 1);

TOPPERS_EMPTY_LABEL(const MTXINIB, _kernel_mtxinib_table);

TOPPERS_EMPTY_LABEL(MTXINIB, _kernel_amtxinib_table);

TOPPERS_EMPTY_LABEL(MTXCB, _kernel_mtxcb_table);

/*
 *  Fixed-sized Memorypool Functions
 */

#define TNUM_SMPFID	2
const ID _kernel_tmax_mpfid = (TMIN_MPFID + TNUM_MPFID - 1);
const ID _kernel_tmax_smpfid = (TMIN_MPFID + TNUM_SMPFID - 1);

static MPF_T _kernel_mpf_MPF_RSLV_SRBUF[NUM_MPF_RSLV_SRBUF * COUNT_MPF_T(DNS_UDP_MSG_LENGTH)];
static MPFMB _kernel_mpfmb_MPF_RSLV_SRBUF[NUM_MPF_RSLV_SRBUF];
static MPF_T _kernel_mpf_MPF_DHCP4_CLI_MSG[NUM_MPF_DHCP4_CLI_MSG * COUNT_MPF_T(sizeof(T_DHCP4_CLI_MSG))];
static MPFMB _kernel_mpfmb_MPF_DHCP4_CLI_MSG[NUM_MPF_DHCP4_CLI_MSG];
const MPFINIB _kernel_mpfinib_table[TNUM_SMPFID] = {
	{ (TA_TFIFO), (NUM_MPF_RSLV_SRBUF), ROUND_MPF_T(DNS_UDP_MSG_LENGTH), _kernel_mpf_MPF_RSLV_SRBUF, _kernel_mpfmb_MPF_RSLV_SRBUF },
	{ (TA_TFIFO), (NUM_MPF_DHCP4_CLI_MSG), ROUND_MPF_T(sizeof(T_DHCP4_CLI_MSG)), _kernel_mpf_MPF_DHCP4_CLI_MSG, _kernel_mpfmb_MPF_DHCP4_CLI_MSG }
};

TOPPERS_EMPTY_LABEL(MPFINIB, _kernel_ampfinib_table);

MPFCB _kernel_mpfcb_table[TNUM_MPFID];

/*
 *  Cyclic Notification Functions
 */

#define TNUM_SCYCID	2
const ID _kernel_tmax_cycid = (TMIN_CYCID + TNUM_CYCID - 1);
const ID _kernel_tmax_scycid = (TMIN_CYCID + TNUM_SCYCID - 1);

const CYCINIB _kernel_cycinib_table[TNUM_SCYCID] = {
	{ (TA_STA), (intptr_t)(0), (NFYHDR)(net_timer_handler), (NET_TIMER_CYCLE), (1) },
	{ (TA_NULL), (intptr_t)(0), (NFYHDR)(sdfs_cychdr), (1000000), (0) }
};

TOPPERS_EMPTY_LABEL(CYCINIB, _kernel_acycinib_table);

TOPPERS_EMPTY_LABEL(T_NFYINFO, _kernel_acyc_nfyinfo_table);

CYCCB _kernel_cyccb_table[TNUM_CYCID];

/*
 *  Alarm Notification Functions
 */

#define TNUM_SALMID	0
const ID _kernel_tmax_almid = (TMIN_ALMID + TNUM_ALMID - 1);
const ID _kernel_tmax_salmid = (TMIN_ALMID + TNUM_SALMID - 1);

TOPPERS_EMPTY_LABEL(const ALMINIB, _kernel_alminib_table);

TOPPERS_EMPTY_LABEL(ALMINIB, _kernel_aalminib_table);

TOPPERS_EMPTY_LABEL(T_NFYINFO, _kernel_aalm_nfyinfo_table);

TOPPERS_EMPTY_LABEL(ALMCB, _kernel_almcb_table);

/*
 *  Interrupt Management Functions
 */

const uint_t _kernel_tnum_isr_queue = 0;

TOPPERS_EMPTY_LABEL(const ISR_ENTRY, _kernel_isr_queue_list);
TOPPERS_EMPTY_LABEL(QUEUE, _kernel_isr_queue_table);

#define TNUM_SISRID	0
const ID _kernel_tmax_isrid = (TMIN_ISRID + TNUM_ISRID - 1);
const ID _kernel_tmax_sisrid = (TMIN_ISRID + TNUM_SISRID - 1);

TOPPERS_EMPTY_LABEL(const ISRINIB, _kernel_isrinib_table);

TOPPERS_EMPTY_LABEL(ISRINIB, _kernel_aisrinib_table);

TOPPERS_EMPTY_LABEL(ISRCB, _kernel_isrcb_table);

TOPPERS_EMPTY_LABEL(const ID, _kernel_isrorder_table);

#define TNUM_CFG_INTNO	2
const uint_t _kernel_tnum_cfg_intno = TNUM_CFG_INTNO;

const INTINIB _kernel_intinib_table[TNUM_CFG_INTNO] = {
	{ (INTNO_TIMER), (TA_ENAINT|INTATR_TIMER), (INTPRI_TIMER) },
	{ (INTNO_IF_MBED), (INTATR_IF_MBED), (INTPRI_IF_MBED) }
};

/*
 *  CPU Exception Management Functions
 */

/*
 *  Stack Area for Non-task Context
 */

/*static*/ STK_T _kernel_istack[COUNT_STK_T(DEFAULT_ISTKSZ)];
const size_t _kernel_istksz = ROUND_STK_T(DEFAULT_ISTKSZ);
STK_T *const _kernel_istk = _kernel_istack;

#ifdef TOPPERS_ISTKPT
STK_T *const _kernel_istkpt = TOPPERS_ISTKPT(_kernel_istack, ROUND_STK_T(DEFAULT_ISTKSZ));
#endif /* TOPPERS_ISTKPT */

/*
 *  Memory Area Allocated by Kernel
 */

const size_t _kernel_kmmsz = 0;
MB_T *const _kernel_kmm = NULL;

/*
 *  Time Event Management
 */

TMEVTN   _kernel_tmevt_heap[1 + TNUM_TSKID + TNUM_CYCID + TNUM_ALMID];

/*
 *  Module Initialization Function
 */

void
_kernel_initialize_object(void)
{
	_kernel_initialize_task();
	_kernel_initialize_semaphore();
	_kernel_initialize_eventflag();
	_kernel_initialize_dataqueue();
	_kernel_initialize_mempfix();
	_kernel_initialize_cyclic();
	_kernel_initialize_interrupt();
	_kernel_initialize_exception();
}

/*
 *  Initialization Routine
 */

void
_kernel_call_inirtn(void)
{
	((INIRTN)(_kernel_target_hrt_initialize))((intptr_t)(0));
	((INIRTN)(tInitializeRoutine_start))((intptr_t)(NULL));
	((INIRTN)(sys_init))((intptr_t)(0));
}

/*
 *  Termination Routine
 */

void
_kernel_call_terrtn(void)
{
	((TERRTN)(tTerminateRoutine_start))((intptr_t)(&tTerminateRoutine_INIB_tab[1]));
	((TERRTN)(tTerminateRoutine_start))((intptr_t)(&tTerminateRoutine_INIB_tab[0]));
	((TERRTN)(_kernel_target_hrt_terminate))((intptr_t)(0));
}

/*
 *  Interrupt Handler Table
 */

FP _kernel_inh_table[TNUM_INHNO] = {
	/* 0x000 */ (FP)(_kernel_default_int_handler),
	/* 0x001 */ (FP)(_kernel_default_int_handler),
	/* 0x002 */ (FP)(_kernel_default_int_handler),
	/* 0x003 */ (FP)(_kernel_default_int_handler),
	/* 0x004 */ (FP)(_kernel_default_int_handler),
	/* 0x005 */ (FP)(_kernel_default_int_handler),
	/* 0x006 */ (FP)(_kernel_default_int_handler),
	/* 0x007 */ (FP)(_kernel_default_int_handler),
	/* 0x008 */ (FP)(_kernel_default_int_handler),
	/* 0x009 */ (FP)(_kernel_default_int_handler),
	/* 0x00a */ (FP)(_kernel_default_int_handler),
	/* 0x00b */ (FP)(_kernel_default_int_handler),
	/* 0x00c */ (FP)(_kernel_default_int_handler),
	/* 0x00d */ (FP)(_kernel_default_int_handler),
	/* 0x00e */ (FP)(_kernel_default_int_handler),
	/* 0x00f */ (FP)(_kernel_default_int_handler),
	/* 0x010 */ (FP)(_kernel_default_int_handler),
	/* 0x011 */ (FP)(_kernel_default_int_handler),
	/* 0x012 */ (FP)(_kernel_default_int_handler),
	/* 0x013 */ (FP)(_kernel_default_int_handler),
	/* 0x014 */ (FP)(_kernel_default_int_handler),
	/* 0x015 */ (FP)(_kernel_default_int_handler),
	/* 0x016 */ (FP)(_kernel_default_int_handler),
	/* 0x017 */ (FP)(_kernel_default_int_handler),
	/* 0x018 */ (FP)(_kernel_default_int_handler),
	/* 0x019 */ (FP)(_kernel_default_int_handler),
	/* 0x01a */ (FP)(_kernel_default_int_handler),
	/* 0x01b */ (FP)(_kernel_default_int_handler),
	/* 0x01c */ (FP)(_kernel_default_int_handler),
	/* 0x01d */ (FP)(_kernel_default_int_handler),
	/* 0x01e */ (FP)(_kernel_default_int_handler),
	/* 0x01f */ (FP)(_kernel_default_int_handler),
	/* 0x020 */ (FP)(_kernel_default_int_handler),
	/* 0x021 */ (FP)(_kernel_default_int_handler),
	/* 0x022 */ (FP)(_kernel_default_int_handler),
	/* 0x023 */ (FP)(_kernel_default_int_handler),
	/* 0x024 */ (FP)(_kernel_default_int_handler),
	/* 0x025 */ (FP)(_kernel_default_int_handler),
	/* 0x026 */ (FP)(_kernel_default_int_handler),
	/* 0x027 */ (FP)(_kernel_default_int_handler),
	/* 0x028 */ (FP)(_kernel_default_int_handler),
	/* 0x029 */ (FP)(_kernel_default_int_handler),
	/* 0x02a */ (FP)(_kernel_default_int_handler),
	/* 0x02b */ (FP)(_kernel_default_int_handler),
	/* 0x02c */ (FP)(_kernel_default_int_handler),
	/* 0x02d */ (FP)(_kernel_default_int_handler),
	/* 0x02e */ (FP)(_kernel_default_int_handler),
	/* 0x02f */ (FP)(_kernel_default_int_handler),
	/* 0x030 */ (FP)(_kernel_default_int_handler),
	/* 0x031 */ (FP)(_kernel_default_int_handler),
	/* 0x032 */ (FP)(_kernel_default_int_handler),
	/* 0x033 */ (FP)(_kernel_default_int_handler),
	/* 0x034 */ (FP)(_kernel_default_int_handler),
	/* 0x035 */ (FP)(_kernel_default_int_handler),
	/* 0x036 */ (FP)(_kernel_default_int_handler),
	/* 0x037 */ (FP)(_kernel_default_int_handler),
	/* 0x038 */ (FP)(_kernel_default_int_handler),
	/* 0x039 */ (FP)(_kernel_default_int_handler),
	/* 0x03a */ (FP)(_kernel_default_int_handler),
	/* 0x03b */ (FP)(_kernel_default_int_handler),
	/* 0x03c */ (FP)(_kernel_default_int_handler),
	/* 0x03d */ (FP)(_kernel_default_int_handler),
	/* 0x03e */ (FP)(_kernel_default_int_handler),
	/* 0x03f */ (FP)(_kernel_default_int_handler),
	/* 0x040 */ (FP)(_kernel_default_int_handler),
	/* 0x041 */ (FP)(_kernel_default_int_handler),
	/* 0x042 */ (FP)(_kernel_default_int_handler),
	/* 0x043 */ (FP)(_kernel_default_int_handler),
	/* 0x044 */ (FP)(_kernel_default_int_handler),
	/* 0x045 */ (FP)(_kernel_default_int_handler),
	/* 0x046 */ (FP)(_kernel_default_int_handler),
	/* 0x047 */ (FP)(_kernel_default_int_handler),
	/* 0x048 */ (FP)(_kernel_default_int_handler),
	/* 0x049 */ (FP)(_kernel_default_int_handler),
	/* 0x04a */ (FP)(_kernel_default_int_handler),
	/* 0x04b */ (FP)(_kernel_default_int_handler),
	/* 0x04c */ (FP)(_kernel_default_int_handler),
	/* 0x04d */ (FP)(_kernel_default_int_handler),
	/* 0x04e */ (FP)(_kernel_default_int_handler),
	/* 0x04f */ (FP)(_kernel_default_int_handler),
	/* 0x050 */ (FP)(_kernel_default_int_handler),
	/* 0x051 */ (FP)(_kernel_default_int_handler),
	/* 0x052 */ (FP)(_kernel_default_int_handler),
	/* 0x053 */ (FP)(_kernel_default_int_handler),
	/* 0x054 */ (FP)(_kernel_default_int_handler),
	/* 0x055 */ (FP)(_kernel_default_int_handler),
	/* 0x056 */ (FP)(_kernel_default_int_handler),
	/* 0x057 */ (FP)(_kernel_default_int_handler),
	/* 0x058 */ (FP)(_kernel_default_int_handler),
	/* 0x059 */ (FP)(_kernel_default_int_handler),
	/* 0x05a */ (FP)(_kernel_default_int_handler),
	/* 0x05b */ (FP)(_kernel_default_int_handler),
	/* 0x05c */ (FP)(_kernel_default_int_handler),
	/* 0x05d */ (FP)(_kernel_default_int_handler),
	/* 0x05e */ (FP)(_kernel_default_int_handler),
	/* 0x05f */ (FP)(_kernel_default_int_handler),
	/* 0x060 */ (FP)(_kernel_default_int_handler),
	/* 0x061 */ (FP)(_kernel_default_int_handler),
	/* 0x062 */ (FP)(_kernel_default_int_handler),
	/* 0x063 */ (FP)(_kernel_default_int_handler),
	/* 0x064 */ (FP)(_kernel_default_int_handler),
	/* 0x065 */ (FP)(_kernel_default_int_handler),
	/* 0x066 */ (FP)(_kernel_default_int_handler),
	/* 0x067 */ (FP)(_kernel_default_int_handler),
	/* 0x068 */ (FP)(_kernel_default_int_handler),
	/* 0x069 */ (FP)(_kernel_default_int_handler),
	/* 0x06a */ (FP)(_kernel_default_int_handler),
	/* 0x06b */ (FP)(_kernel_default_int_handler),
	/* 0x06c */ (FP)(_kernel_default_int_handler),
	/* 0x06d */ (FP)(_kernel_default_int_handler),
	/* 0x06e */ (FP)(_kernel_default_int_handler),
	/* 0x06f */ (FP)(_kernel_default_int_handler),
	/* 0x070 */ (FP)(_kernel_default_int_handler),
	/* 0x071 */ (FP)(_kernel_default_int_handler),
	/* 0x072 */ (FP)(_kernel_default_int_handler),
	/* 0x073 */ (FP)(_kernel_default_int_handler),
	/* 0x074 */ (FP)(_kernel_default_int_handler),
	/* 0x075 */ (FP)(_kernel_default_int_handler),
	/* 0x076 */ (FP)(_kernel_default_int_handler),
	/* 0x077 */ (FP)(_kernel_default_int_handler),
	/* 0x078 */ (FP)(_kernel_default_int_handler),
	/* 0x079 */ (FP)(_kernel_default_int_handler),
	/* 0x07a */ (FP)(_kernel_default_int_handler),
	/* 0x07b */ (FP)(_kernel_default_int_handler),
	/* 0x07c */ (FP)(_kernel_default_int_handler),
	/* 0x07d */ (FP)(_kernel_default_int_handler),
	/* 0x07e */ (FP)(_kernel_default_int_handler),
	/* 0x07f */ (FP)(_kernel_default_int_handler),
	/* 0x080 */ (FP)(_kernel_default_int_handler),
	/* 0x081 */ (FP)(_kernel_default_int_handler),
	/* 0x082 */ (FP)(_kernel_default_int_handler),
	/* 0x083 */ (FP)(_kernel_default_int_handler),
	/* 0x084 */ (FP)(_kernel_default_int_handler),
	/* 0x085 */ (FP)(_kernel_default_int_handler),
	/* 0x086 */ (FP)(_kernel_target_hrt_handler),
	/* 0x087 */ (FP)(_kernel_default_int_handler),
	/* 0x088 */ (FP)(_kernel_default_int_handler),
	/* 0x089 */ (FP)(_kernel_default_int_handler),
	/* 0x08a */ (FP)(_kernel_default_int_handler),
	/* 0x08b */ (FP)(_kernel_default_int_handler),
	/* 0x08c */ (FP)(_kernel_default_int_handler),
	/* 0x08d */ (FP)(_kernel_default_int_handler),
	/* 0x08e */ (FP)(_kernel_default_int_handler),
	/* 0x08f */ (FP)(_kernel_default_int_handler),
	/* 0x090 */ (FP)(_kernel_default_int_handler),
	/* 0x091 */ (FP)(_kernel_default_int_handler),
	/* 0x092 */ (FP)(_kernel_default_int_handler),
	/* 0x093 */ (FP)(_kernel_default_int_handler),
	/* 0x094 */ (FP)(_kernel_default_int_handler),
	/* 0x095 */ (FP)(_kernel_default_int_handler),
	/* 0x096 */ (FP)(_kernel_default_int_handler),
	/* 0x097 */ (FP)(_kernel_default_int_handler),
	/* 0x098 */ (FP)(_kernel_default_int_handler),
	/* 0x099 */ (FP)(_kernel_default_int_handler),
	/* 0x09a */ (FP)(_kernel_default_int_handler),
	/* 0x09b */ (FP)(_kernel_default_int_handler),
	/* 0x09c */ (FP)(_kernel_default_int_handler),
	/* 0x09d */ (FP)(_kernel_default_int_handler),
	/* 0x09e */ (FP)(_kernel_default_int_handler),
	/* 0x09f */ (FP)(_kernel_default_int_handler),
	/* 0x0a0 */ (FP)(_kernel_default_int_handler),
	/* 0x0a1 */ (FP)(_kernel_default_int_handler),
	/* 0x0a2 */ (FP)(_kernel_default_int_handler),
	/* 0x0a3 */ (FP)(_kernel_default_int_handler),
	/* 0x0a4 */ (FP)(_kernel_default_int_handler),
	/* 0x0a5 */ (FP)(_kernel_default_int_handler),
	/* 0x0a6 */ (FP)(_kernel_default_int_handler),
	/* 0x0a7 */ (FP)(_kernel_default_int_handler),
	/* 0x0a8 */ (FP)(_kernel_default_int_handler),
	/* 0x0a9 */ (FP)(_kernel_default_int_handler),
	/* 0x0aa */ (FP)(_kernel_default_int_handler),
	/* 0x0ab */ (FP)(_kernel_default_int_handler),
	/* 0x0ac */ (FP)(_kernel_default_int_handler),
	/* 0x0ad */ (FP)(_kernel_default_int_handler),
	/* 0x0ae */ (FP)(_kernel_default_int_handler),
	/* 0x0af */ (FP)(_kernel_default_int_handler),
	/* 0x0b0 */ (FP)(_kernel_default_int_handler),
	/* 0x0b1 */ (FP)(_kernel_default_int_handler),
	/* 0x0b2 */ (FP)(_kernel_default_int_handler),
	/* 0x0b3 */ (FP)(_kernel_default_int_handler),
	/* 0x0b4 */ (FP)(_kernel_default_int_handler),
	/* 0x0b5 */ (FP)(_kernel_default_int_handler),
	/* 0x0b6 */ (FP)(_kernel_default_int_handler),
	/* 0x0b7 */ (FP)(_kernel_default_int_handler),
	/* 0x0b8 */ (FP)(_kernel_default_int_handler),
	/* 0x0b9 */ (FP)(_kernel_default_int_handler),
	/* 0x0ba */ (FP)(_kernel_default_int_handler),
	/* 0x0bb */ (FP)(_kernel_default_int_handler),
	/* 0x0bc */ (FP)(_kernel_default_int_handler),
	/* 0x0bd */ (FP)(_kernel_default_int_handler),
	/* 0x0be */ (FP)(_kernel_default_int_handler),
	/* 0x0bf */ (FP)(_kernel_default_int_handler),
	/* 0x0c0 */ (FP)(_kernel_default_int_handler),
	/* 0x0c1 */ (FP)(_kernel_default_int_handler),
	/* 0x0c2 */ (FP)(_kernel_default_int_handler),
	/* 0x0c3 */ (FP)(_kernel_default_int_handler),
	/* 0x0c4 */ (FP)(_kernel_default_int_handler),
	/* 0x0c5 */ (FP)(_kernel_default_int_handler),
	/* 0x0c6 */ (FP)(_kernel_default_int_handler),
	/* 0x0c7 */ (FP)(_kernel_default_int_handler),
	/* 0x0c8 */ (FP)(_kernel_default_int_handler),
	/* 0x0c9 */ (FP)(_kernel_default_int_handler),
	/* 0x0ca */ (FP)(_kernel_default_int_handler),
	/* 0x0cb */ (FP)(_kernel_default_int_handler),
	/* 0x0cc */ (FP)(_kernel_default_int_handler),
	/* 0x0cd */ (FP)(_kernel_default_int_handler),
	/* 0x0ce */ (FP)(_kernel_default_int_handler),
	/* 0x0cf */ (FP)(_kernel_default_int_handler),
	/* 0x0d0 */ (FP)(_kernel_default_int_handler),
	/* 0x0d1 */ (FP)(_kernel_default_int_handler),
	/* 0x0d2 */ (FP)(_kernel_default_int_handler),
	/* 0x0d3 */ (FP)(_kernel_default_int_handler),
	/* 0x0d4 */ (FP)(_kernel_default_int_handler),
	/* 0x0d5 */ (FP)(_kernel_default_int_handler),
	/* 0x0d6 */ (FP)(_kernel_default_int_handler),
	/* 0x0d7 */ (FP)(_kernel_default_int_handler),
	/* 0x0d8 */ (FP)(_kernel_default_int_handler),
	/* 0x0d9 */ (FP)(_kernel_default_int_handler),
	/* 0x0da */ (FP)(_kernel_default_int_handler),
	/* 0x0db */ (FP)(_kernel_default_int_handler),
	/* 0x0dc */ (FP)(_kernel_default_int_handler),
	/* 0x0dd */ (FP)(_kernel_default_int_handler),
	/* 0x0de */ (FP)(_kernel_default_int_handler),
	/* 0x0df */ (FP)(_kernel_default_int_handler),
	/* 0x0e0 */ (FP)(_kernel_default_int_handler),
	/* 0x0e1 */ (FP)(_kernel_default_int_handler),
	/* 0x0e2 */ (FP)(_kernel_default_int_handler),
	/* 0x0e3 */ (FP)(_kernel_default_int_handler),
	/* 0x0e4 */ (FP)(_kernel_default_int_handler),
	/* 0x0e5 */ (FP)(_kernel_default_int_handler),
	/* 0x0e6 */ (FP)(_kernel_default_int_handler),
	/* 0x0e7 */ (FP)(_kernel_default_int_handler),
	/* 0x0e8 */ (FP)(_kernel_default_int_handler),
	/* 0x0e9 */ (FP)(_kernel_default_int_handler),
	/* 0x0ea */ (FP)(_kernel_default_int_handler),
	/* 0x0eb */ (FP)(_kernel_default_int_handler),
	/* 0x0ec */ (FP)(_kernel_default_int_handler),
	/* 0x0ed */ (FP)(_kernel_default_int_handler),
	/* 0x0ee */ (FP)(_kernel_default_int_handler),
	/* 0x0ef */ (FP)(_kernel_default_int_handler),
	/* 0x0f0 */ (FP)(_kernel_default_int_handler),
	/* 0x0f1 */ (FP)(_kernel_default_int_handler),
	/* 0x0f2 */ (FP)(_kernel_default_int_handler),
	/* 0x0f3 */ (FP)(_kernel_default_int_handler),
	/* 0x0f4 */ (FP)(_kernel_default_int_handler),
	/* 0x0f5 */ (FP)(_kernel_default_int_handler),
	/* 0x0f6 */ (FP)(_kernel_default_int_handler),
	/* 0x0f7 */ (FP)(_kernel_default_int_handler),
	/* 0x0f8 */ (FP)(_kernel_default_int_handler),
	/* 0x0f9 */ (FP)(_kernel_default_int_handler),
	/* 0x0fa */ (FP)(_kernel_default_int_handler),
	/* 0x0fb */ (FP)(_kernel_default_int_handler),
	/* 0x0fc */ (FP)(_kernel_default_int_handler),
	/* 0x0fd */ (FP)(_kernel_default_int_handler),
	/* 0x0fe */ (FP)(_kernel_default_int_handler),
	/* 0x0ff */ (FP)(_kernel_default_int_handler),
	/* 0x100 */ (FP)(_kernel_default_int_handler),
	/* 0x101 */ (FP)(_kernel_default_int_handler),
	/* 0x102 */ (FP)(_kernel_default_int_handler),
	/* 0x103 */ (FP)(_kernel_default_int_handler),
	/* 0x104 */ (FP)(_kernel_default_int_handler),
	/* 0x105 */ (FP)(_kernel_default_int_handler),
	/* 0x106 */ (FP)(_kernel_default_int_handler),
	/* 0x107 */ (FP)(_kernel_default_int_handler),
	/* 0x108 */ (FP)(_kernel_default_int_handler),
	/* 0x109 */ (FP)(_kernel_default_int_handler),
	/* 0x10a */ (FP)(_kernel_default_int_handler),
	/* 0x10b */ (FP)(_kernel_default_int_handler),
	/* 0x10c */ (FP)(_kernel_default_int_handler),
	/* 0x10d */ (FP)(_kernel_default_int_handler),
	/* 0x10e */ (FP)(_kernel_default_int_handler),
	/* 0x10f */ (FP)(_kernel_default_int_handler),
	/* 0x110 */ (FP)(_kernel_default_int_handler),
	/* 0x111 */ (FP)(_kernel_default_int_handler),
	/* 0x112 */ (FP)(_kernel_default_int_handler),
	/* 0x113 */ (FP)(_kernel_default_int_handler),
	/* 0x114 */ (FP)(_kernel_default_int_handler),
	/* 0x115 */ (FP)(_kernel_default_int_handler),
	/* 0x116 */ (FP)(_kernel_default_int_handler),
	/* 0x117 */ (FP)(_kernel_default_int_handler),
	/* 0x118 */ (FP)(_kernel_default_int_handler),
	/* 0x119 */ (FP)(_kernel_default_int_handler),
	/* 0x11a */ (FP)(_kernel_default_int_handler),
	/* 0x11b */ (FP)(_kernel_default_int_handler),
	/* 0x11c */ (FP)(_kernel_default_int_handler),
	/* 0x11d */ (FP)(_kernel_default_int_handler),
	/* 0x11e */ (FP)(_kernel_default_int_handler),
	/* 0x11f */ (FP)(_kernel_default_int_handler),
	/* 0x120 */ (FP)(_kernel_default_int_handler),
	/* 0x121 */ (FP)(_kernel_default_int_handler),
	/* 0x122 */ (FP)(_kernel_default_int_handler),
	/* 0x123 */ (FP)(_kernel_default_int_handler),
	/* 0x124 */ (FP)(_kernel_default_int_handler),
	/* 0x125 */ (FP)(_kernel_default_int_handler),
	/* 0x126 */ (FP)(_kernel_default_int_handler),
	/* 0x127 */ (FP)(_kernel_default_int_handler),
	/* 0x128 */ (FP)(_kernel_default_int_handler),
	/* 0x129 */ (FP)(_kernel_default_int_handler),
	/* 0x12a */ (FP)(_kernel_default_int_handler),
	/* 0x12b */ (FP)(_kernel_default_int_handler),
	/* 0x12c */ (FP)(_kernel_default_int_handler),
	/* 0x12d */ (FP)(_kernel_default_int_handler),
	/* 0x12e */ (FP)(_kernel_default_int_handler),
	/* 0x12f */ (FP)(_kernel_default_int_handler),
	/* 0x130 */ (FP)(_kernel_default_int_handler),
	/* 0x131 */ (FP)(_kernel_default_int_handler),
	/* 0x132 */ (FP)(_kernel_default_int_handler),
	/* 0x133 */ (FP)(_kernel_default_int_handler),
	/* 0x134 */ (FP)(_kernel_default_int_handler),
	/* 0x135 */ (FP)(_kernel_default_int_handler),
	/* 0x136 */ (FP)(_kernel_default_int_handler),
	/* 0x137 */ (FP)(_kernel_default_int_handler),
	/* 0x138 */ (FP)(_kernel_default_int_handler),
	/* 0x139 */ (FP)(_kernel_default_int_handler),
	/* 0x13a */ (FP)(_kernel_default_int_handler),
	/* 0x13b */ (FP)(_kernel_default_int_handler),
	/* 0x13c */ (FP)(_kernel_default_int_handler),
	/* 0x13d */ (FP)(_kernel_default_int_handler),
	/* 0x13e */ (FP)(_kernel_default_int_handler),
	/* 0x13f */ (FP)(_kernel_default_int_handler),
	/* 0x140 */ (FP)(_kernel_default_int_handler),
	/* 0x141 */ (FP)(_kernel_default_int_handler),
	/* 0x142 */ (FP)(_kernel_default_int_handler),
	/* 0x143 */ (FP)(_kernel_default_int_handler),
	/* 0x144 */ (FP)(_kernel_default_int_handler),
	/* 0x145 */ (FP)(_kernel_default_int_handler),
	/* 0x146 */ (FP)(_kernel_default_int_handler),
	/* 0x147 */ (FP)(_kernel_default_int_handler),
	/* 0x148 */ (FP)(_kernel_default_int_handler),
	/* 0x149 */ (FP)(_kernel_default_int_handler),
	/* 0x14a */ (FP)(_kernel_default_int_handler),
	/* 0x14b */ (FP)(_kernel_default_int_handler),
	/* 0x14c */ (FP)(_kernel_default_int_handler),
	/* 0x14d */ (FP)(_kernel_default_int_handler),
	/* 0x14e */ (FP)(_kernel_default_int_handler),
	/* 0x14f */ (FP)(_kernel_default_int_handler),
	/* 0x150 */ (FP)(_kernel_default_int_handler),
	/* 0x151 */ (FP)(_kernel_default_int_handler),
	/* 0x152 */ (FP)(_kernel_default_int_handler),
	/* 0x153 */ (FP)(_kernel_default_int_handler),
	/* 0x154 */ (FP)(_kernel_default_int_handler),
	/* 0x155 */ (FP)(_kernel_default_int_handler),
	/* 0x156 */ (FP)(_kernel_default_int_handler),
	/* 0x157 */ (FP)(_kernel_default_int_handler),
	/* 0x158 */ (FP)(_kernel_default_int_handler),
	/* 0x159 */ (FP)(_kernel_default_int_handler),
	/* 0x15a */ (FP)(_kernel_default_int_handler),
	/* 0x15b */ (FP)(_kernel_default_int_handler),
	/* 0x15c */ (FP)(_kernel_default_int_handler),
	/* 0x15d */ (FP)(_kernel_default_int_handler),
	/* 0x15e */ (FP)(_kernel_default_int_handler),
	/* 0x15f */ (FP)(_kernel_default_int_handler),
	/* 0x160 */ (FP)(_kernel_default_int_handler),
	/* 0x161 */ (FP)(_kernel_default_int_handler),
	/* 0x162 */ (FP)(_kernel_default_int_handler),
	/* 0x163 */ (FP)(_kernel_default_int_handler),
	/* 0x164 */ (FP)(_kernel_default_int_handler),
	/* 0x165 */ (FP)(_kernel_default_int_handler),
	/* 0x166 */ (FP)(_kernel_default_int_handler),
	/* 0x167 */ (FP)(if_mbed_eth_handler),
	/* 0x168 */ (FP)(_kernel_default_int_handler),
	/* 0x169 */ (FP)(_kernel_default_int_handler),
	/* 0x16a */ (FP)(_kernel_default_int_handler),
	/* 0x16b */ (FP)(_kernel_default_int_handler),
	/* 0x16c */ (FP)(_kernel_default_int_handler),
	/* 0x16d */ (FP)(_kernel_default_int_handler),
	/* 0x16e */ (FP)(_kernel_default_int_handler),
	/* 0x16f */ (FP)(_kernel_default_int_handler),
	/* 0x170 */ (FP)(_kernel_default_int_handler),
	/* 0x171 */ (FP)(_kernel_default_int_handler),
	/* 0x172 */ (FP)(_kernel_default_int_handler),
	/* 0x173 */ (FP)(_kernel_default_int_handler),
	/* 0x174 */ (FP)(_kernel_default_int_handler),
	/* 0x175 */ (FP)(_kernel_default_int_handler),
	/* 0x176 */ (FP)(_kernel_default_int_handler),
	/* 0x177 */ (FP)(_kernel_default_int_handler),
	/* 0x178 */ (FP)(_kernel_default_int_handler),
	/* 0x179 */ (FP)(_kernel_default_int_handler),
	/* 0x17a */ (FP)(_kernel_default_int_handler),
	/* 0x17b */ (FP)(_kernel_default_int_handler),
	/* 0x17c */ (FP)(_kernel_default_int_handler),
	/* 0x17d */ (FP)(_kernel_default_int_handler),
	/* 0x17e */ (FP)(_kernel_default_int_handler),
	/* 0x17f */ (FP)(_kernel_default_int_handler),
	/* 0x180 */ (FP)(_kernel_default_int_handler),
	/* 0x181 */ (FP)(_kernel_default_int_handler),
	/* 0x182 */ (FP)(_kernel_default_int_handler),
	/* 0x183 */ (FP)(_kernel_default_int_handler),
	/* 0x184 */ (FP)(_kernel_default_int_handler),
	/* 0x185 */ (FP)(_kernel_default_int_handler),
	/* 0x186 */ (FP)(_kernel_default_int_handler),
	/* 0x187 */ (FP)(_kernel_default_int_handler),
	/* 0x188 */ (FP)(_kernel_default_int_handler),
	/* 0x189 */ (FP)(_kernel_default_int_handler),
	/* 0x18a */ (FP)(_kernel_default_int_handler),
	/* 0x18b */ (FP)(_kernel_default_int_handler),
	/* 0x18c */ (FP)(_kernel_default_int_handler),
	/* 0x18d */ (FP)(_kernel_default_int_handler),
	/* 0x18e */ (FP)(_kernel_default_int_handler),
	/* 0x18f */ (FP)(_kernel_default_int_handler),
	/* 0x190 */ (FP)(_kernel_default_int_handler),
	/* 0x191 */ (FP)(_kernel_default_int_handler),
	/* 0x192 */ (FP)(_kernel_default_int_handler),
	/* 0x193 */ (FP)(_kernel_default_int_handler),
	/* 0x194 */ (FP)(_kernel_default_int_handler),
	/* 0x195 */ (FP)(_kernel_default_int_handler),
	/* 0x196 */ (FP)(_kernel_default_int_handler),
	/* 0x197 */ (FP)(_kernel_default_int_handler),
	/* 0x198 */ (FP)(_kernel_default_int_handler),
	/* 0x199 */ (FP)(_kernel_default_int_handler),
	/* 0x19a */ (FP)(_kernel_default_int_handler),
	/* 0x19b */ (FP)(_kernel_default_int_handler),
	/* 0x19c */ (FP)(_kernel_default_int_handler),
	/* 0x19d */ (FP)(_kernel_default_int_handler),
	/* 0x19e */ (FP)(_kernel_default_int_handler),
	/* 0x19f */ (FP)(_kernel_default_int_handler),
	/* 0x1a0 */ (FP)(_kernel_default_int_handler),
	/* 0x1a1 */ (FP)(_kernel_default_int_handler),
	/* 0x1a2 */ (FP)(_kernel_default_int_handler),
	/* 0x1a3 */ (FP)(_kernel_default_int_handler),
	/* 0x1a4 */ (FP)(_kernel_default_int_handler),
	/* 0x1a5 */ (FP)(_kernel_default_int_handler),
	/* 0x1a6 */ (FP)(_kernel_default_int_handler),
	/* 0x1a7 */ (FP)(_kernel_default_int_handler),
	/* 0x1a8 */ (FP)(_kernel_default_int_handler),
	/* 0x1a9 */ (FP)(_kernel_default_int_handler),
	/* 0x1aa */ (FP)(_kernel_default_int_handler),
	/* 0x1ab */ (FP)(_kernel_default_int_handler),
	/* 0x1ac */ (FP)(_kernel_default_int_handler),
	/* 0x1ad */ (FP)(_kernel_default_int_handler),
	/* 0x1ae */ (FP)(_kernel_default_int_handler),
	/* 0x1af */ (FP)(_kernel_default_int_handler),
	/* 0x1b0 */ (FP)(_kernel_default_int_handler),
	/* 0x1b1 */ (FP)(_kernel_default_int_handler),
	/* 0x1b2 */ (FP)(_kernel_default_int_handler),
	/* 0x1b3 */ (FP)(_kernel_default_int_handler),
	/* 0x1b4 */ (FP)(_kernel_default_int_handler),
	/* 0x1b5 */ (FP)(_kernel_default_int_handler),
	/* 0x1b6 */ (FP)(_kernel_default_int_handler),
	/* 0x1b7 */ (FP)(_kernel_default_int_handler),
	/* 0x1b8 */ (FP)(_kernel_default_int_handler),
	/* 0x1b9 */ (FP)(_kernel_default_int_handler),
	/* 0x1ba */ (FP)(_kernel_default_int_handler),
	/* 0x1bb */ (FP)(_kernel_default_int_handler),
	/* 0x1bc */ (FP)(_kernel_default_int_handler),
	/* 0x1bd */ (FP)(_kernel_default_int_handler),
	/* 0x1be */ (FP)(_kernel_default_int_handler),
	/* 0x1bf */ (FP)(_kernel_default_int_handler),
	/* 0x1c0 */ (FP)(_kernel_default_int_handler),
	/* 0x1c1 */ (FP)(_kernel_default_int_handler),
	/* 0x1c2 */ (FP)(_kernel_default_int_handler),
	/* 0x1c3 */ (FP)(_kernel_default_int_handler),
	/* 0x1c4 */ (FP)(_kernel_default_int_handler),
	/* 0x1c5 */ (FP)(_kernel_default_int_handler),
	/* 0x1c6 */ (FP)(_kernel_default_int_handler),
	/* 0x1c7 */ (FP)(_kernel_default_int_handler),
	/* 0x1c8 */ (FP)(_kernel_default_int_handler),
	/* 0x1c9 */ (FP)(_kernel_default_int_handler),
	/* 0x1ca */ (FP)(_kernel_default_int_handler),
	/* 0x1cb */ (FP)(_kernel_default_int_handler),
	/* 0x1cc */ (FP)(_kernel_default_int_handler),
	/* 0x1cd */ (FP)(_kernel_default_int_handler),
	/* 0x1ce */ (FP)(_kernel_default_int_handler),
	/* 0x1cf */ (FP)(_kernel_default_int_handler),
	/* 0x1d0 */ (FP)(_kernel_default_int_handler),
	/* 0x1d1 */ (FP)(_kernel_default_int_handler),
	/* 0x1d2 */ (FP)(_kernel_default_int_handler),
	/* 0x1d3 */ (FP)(_kernel_default_int_handler),
	/* 0x1d4 */ (FP)(_kernel_default_int_handler),
	/* 0x1d5 */ (FP)(_kernel_default_int_handler),
	/* 0x1d6 */ (FP)(_kernel_default_int_handler),
	/* 0x1d7 */ (FP)(_kernel_default_int_handler),
	/* 0x1d8 */ (FP)(_kernel_default_int_handler),
	/* 0x1d9 */ (FP)(_kernel_default_int_handler),
	/* 0x1da */ (FP)(_kernel_default_int_handler),
	/* 0x1db */ (FP)(_kernel_default_int_handler),
	/* 0x1dc */ (FP)(_kernel_default_int_handler),
	/* 0x1dd */ (FP)(_kernel_default_int_handler),
	/* 0x1de */ (FP)(_kernel_default_int_handler),
	/* 0x1df */ (FP)(_kernel_default_int_handler),
	/* 0x1e0 */ (FP)(_kernel_default_int_handler),
	/* 0x1e1 */ (FP)(_kernel_default_int_handler),
	/* 0x1e2 */ (FP)(_kernel_default_int_handler),
	/* 0x1e3 */ (FP)(_kernel_default_int_handler),
	/* 0x1e4 */ (FP)(_kernel_default_int_handler),
	/* 0x1e5 */ (FP)(_kernel_default_int_handler),
	/* 0x1e6 */ (FP)(_kernel_default_int_handler),
	/* 0x1e7 */ (FP)(_kernel_default_int_handler),
	/* 0x1e8 */ (FP)(_kernel_default_int_handler),
	/* 0x1e9 */ (FP)(_kernel_default_int_handler),
	/* 0x1ea */ (FP)(_kernel_default_int_handler),
	/* 0x1eb */ (FP)(_kernel_default_int_handler),
	/* 0x1ec */ (FP)(_kernel_default_int_handler),
	/* 0x1ed */ (FP)(_kernel_default_int_handler),
	/* 0x1ee */ (FP)(_kernel_default_int_handler),
	/* 0x1ef */ (FP)(_kernel_default_int_handler),
	/* 0x1f0 */ (FP)(_kernel_default_int_handler),
	/* 0x1f1 */ (FP)(_kernel_default_int_handler),
	/* 0x1f2 */ (FP)(_kernel_default_int_handler),
	/* 0x1f3 */ (FP)(_kernel_default_int_handler),
	/* 0x1f4 */ (FP)(_kernel_default_int_handler),
	/* 0x1f5 */ (FP)(_kernel_default_int_handler),
	/* 0x1f6 */ (FP)(_kernel_default_int_handler),
	/* 0x1f7 */ (FP)(_kernel_default_int_handler),
	/* 0x1f8 */ (FP)(_kernel_default_int_handler),
	/* 0x1f9 */ (FP)(_kernel_default_int_handler),
	/* 0x1fa */ (FP)(_kernel_default_int_handler),
	/* 0x1fb */ (FP)(_kernel_default_int_handler),
	/* 0x1fc */ (FP)(_kernel_default_int_handler),
	/* 0x1fd */ (FP)(_kernel_default_int_handler),
	/* 0x1fe */ (FP)(_kernel_default_int_handler),
	/* 0x1ff */ (FP)(_kernel_default_int_handler),
	/* 0x200 */ (FP)(_kernel_default_int_handler),
	/* 0x201 */ (FP)(_kernel_default_int_handler),
	/* 0x202 */ (FP)(_kernel_default_int_handler),
	/* 0x203 */ (FP)(_kernel_default_int_handler),
	/* 0x204 */ (FP)(_kernel_default_int_handler),
	/* 0x205 */ (FP)(_kernel_default_int_handler),
	/* 0x206 */ (FP)(_kernel_default_int_handler),
	/* 0x207 */ (FP)(_kernel_default_int_handler),
	/* 0x208 */ (FP)(_kernel_default_int_handler),
	/* 0x209 */ (FP)(_kernel_default_int_handler),
	/* 0x20a */ (FP)(_kernel_default_int_handler),
	/* 0x20b */ (FP)(_kernel_default_int_handler),
	/* 0x20c */ (FP)(_kernel_default_int_handler),
	/* 0x20d */ (FP)(_kernel_default_int_handler),
	/* 0x20e */ (FP)(_kernel_default_int_handler),
	/* 0x20f */ (FP)(_kernel_default_int_handler),
	/* 0x210 */ (FP)(_kernel_default_int_handler),
	/* 0x211 */ (FP)(_kernel_default_int_handler),
	/* 0x212 */ (FP)(_kernel_default_int_handler),
	/* 0x213 */ (FP)(_kernel_default_int_handler),
	/* 0x214 */ (FP)(_kernel_default_int_handler),
	/* 0x215 */ (FP)(_kernel_default_int_handler),
	/* 0x216 */ (FP)(_kernel_default_int_handler),
	/* 0x217 */ (FP)(_kernel_default_int_handler),
	/* 0x218 */ (FP)(_kernel_default_int_handler),
	/* 0x219 */ (FP)(_kernel_default_int_handler)
};

/*
 *  Interrupt Configuration Table
 */

const uint8_t _kernel_intcfg_table[TNUM_INTNO] = {
	/* 0x000 */ 0U,
	/* 0x001 */ 0U,
	/* 0x002 */ 0U,
	/* 0x003 */ 0U,
	/* 0x004 */ 0U,
	/* 0x005 */ 0U,
	/* 0x006 */ 0U,
	/* 0x007 */ 0U,
	/* 0x008 */ 0U,
	/* 0x009 */ 0U,
	/* 0x00a */ 0U,
	/* 0x00b */ 0U,
	/* 0x00c */ 0U,
	/* 0x00d */ 0U,
	/* 0x00e */ 0U,
	/* 0x00f */ 0U,
	/* 0x010 */ 0U,
	/* 0x011 */ 0U,
	/* 0x012 */ 0U,
	/* 0x013 */ 0U,
	/* 0x014 */ 0U,
	/* 0x015 */ 0U,
	/* 0x016 */ 0U,
	/* 0x017 */ 0U,
	/* 0x018 */ 0U,
	/* 0x019 */ 0U,
	/* 0x01a */ 0U,
	/* 0x01b */ 0U,
	/* 0x01c */ 0U,
	/* 0x01d */ 0U,
	/* 0x01e */ 0U,
	/* 0x01f */ 0U,
	/* 0x020 */ 0U,
	/* 0x021 */ 0U,
	/* 0x022 */ 0U,
	/* 0x023 */ 0U,
	/* 0x024 */ 0U,
	/* 0x025 */ 0U,
	/* 0x026 */ 0U,
	/* 0x027 */ 0U,
	/* 0x028 */ 0U,
	/* 0x029 */ 0U,
	/* 0x02a */ 0U,
	/* 0x02b */ 0U,
	/* 0x02c */ 0U,
	/* 0x02d */ 0U,
	/* 0x02e */ 0U,
	/* 0x02f */ 0U,
	/* 0x030 */ 0U,
	/* 0x031 */ 0U,
	/* 0x032 */ 0U,
	/* 0x033 */ 0U,
	/* 0x034 */ 0U,
	/* 0x035 */ 0U,
	/* 0x036 */ 0U,
	/* 0x037 */ 0U,
	/* 0x038 */ 0U,
	/* 0x039 */ 0U,
	/* 0x03a */ 0U,
	/* 0x03b */ 0U,
	/* 0x03c */ 0U,
	/* 0x03d */ 0U,
	/* 0x03e */ 0U,
	/* 0x03f */ 0U,
	/* 0x040 */ 0U,
	/* 0x041 */ 0U,
	/* 0x042 */ 0U,
	/* 0x043 */ 0U,
	/* 0x044 */ 0U,
	/* 0x045 */ 0U,
	/* 0x046 */ 0U,
	/* 0x047 */ 0U,
	/* 0x048 */ 0U,
	/* 0x049 */ 0U,
	/* 0x04a */ 0U,
	/* 0x04b */ 0U,
	/* 0x04c */ 0U,
	/* 0x04d */ 0U,
	/* 0x04e */ 0U,
	/* 0x04f */ 0U,
	/* 0x050 */ 0U,
	/* 0x051 */ 0U,
	/* 0x052 */ 0U,
	/* 0x053 */ 0U,
	/* 0x054 */ 0U,
	/* 0x055 */ 0U,
	/* 0x056 */ 0U,
	/* 0x057 */ 0U,
	/* 0x058 */ 0U,
	/* 0x059 */ 0U,
	/* 0x05a */ 0U,
	/* 0x05b */ 0U,
	/* 0x05c */ 0U,
	/* 0x05d */ 0U,
	/* 0x05e */ 0U,
	/* 0x05f */ 0U,
	/* 0x060 */ 0U,
	/* 0x061 */ 0U,
	/* 0x062 */ 0U,
	/* 0x063 */ 0U,
	/* 0x064 */ 0U,
	/* 0x065 */ 0U,
	/* 0x066 */ 0U,
	/* 0x067 */ 0U,
	/* 0x068 */ 0U,
	/* 0x069 */ 0U,
	/* 0x06a */ 0U,
	/* 0x06b */ 0U,
	/* 0x06c */ 0U,
	/* 0x06d */ 0U,
	/* 0x06e */ 0U,
	/* 0x06f */ 0U,
	/* 0x070 */ 0U,
	/* 0x071 */ 0U,
	/* 0x072 */ 0U,
	/* 0x073 */ 0U,
	/* 0x074 */ 0U,
	/* 0x075 */ 0U,
	/* 0x076 */ 0U,
	/* 0x077 */ 0U,
	/* 0x078 */ 0U,
	/* 0x079 */ 0U,
	/* 0x07a */ 0U,
	/* 0x07b */ 0U,
	/* 0x07c */ 0U,
	/* 0x07d */ 0U,
	/* 0x07e */ 0U,
	/* 0x07f */ 0U,
	/* 0x080 */ 0U,
	/* 0x081 */ 0U,
	/* 0x082 */ 0U,
	/* 0x083 */ 0U,
	/* 0x084 */ 0U,
	/* 0x085 */ 0U,
	/* 0x086 */ 1U,
	/* 0x087 */ 0U,
	/* 0x088 */ 0U,
	/* 0x089 */ 0U,
	/* 0x08a */ 0U,
	/* 0x08b */ 0U,
	/* 0x08c */ 0U,
	/* 0x08d */ 0U,
	/* 0x08e */ 0U,
	/* 0x08f */ 0U,
	/* 0x090 */ 0U,
	/* 0x091 */ 0U,
	/* 0x092 */ 0U,
	/* 0x093 */ 0U,
	/* 0x094 */ 0U,
	/* 0x095 */ 0U,
	/* 0x096 */ 0U,
	/* 0x097 */ 0U,
	/* 0x098 */ 0U,
	/* 0x099 */ 0U,
	/* 0x09a */ 0U,
	/* 0x09b */ 0U,
	/* 0x09c */ 0U,
	/* 0x09d */ 0U,
	/* 0x09e */ 0U,
	/* 0x09f */ 0U,
	/* 0x0a0 */ 0U,
	/* 0x0a1 */ 0U,
	/* 0x0a2 */ 0U,
	/* 0x0a3 */ 0U,
	/* 0x0a4 */ 0U,
	/* 0x0a5 */ 0U,
	/* 0x0a6 */ 0U,
	/* 0x0a7 */ 0U,
	/* 0x0a8 */ 0U,
	/* 0x0a9 */ 0U,
	/* 0x0aa */ 0U,
	/* 0x0ab */ 0U,
	/* 0x0ac */ 0U,
	/* 0x0ad */ 0U,
	/* 0x0ae */ 0U,
	/* 0x0af */ 0U,
	/* 0x0b0 */ 0U,
	/* 0x0b1 */ 0U,
	/* 0x0b2 */ 0U,
	/* 0x0b3 */ 0U,
	/* 0x0b4 */ 0U,
	/* 0x0b5 */ 0U,
	/* 0x0b6 */ 0U,
	/* 0x0b7 */ 0U,
	/* 0x0b8 */ 0U,
	/* 0x0b9 */ 0U,
	/* 0x0ba */ 0U,
	/* 0x0bb */ 0U,
	/* 0x0bc */ 0U,
	/* 0x0bd */ 0U,
	/* 0x0be */ 0U,
	/* 0x0bf */ 0U,
	/* 0x0c0 */ 0U,
	/* 0x0c1 */ 0U,
	/* 0x0c2 */ 0U,
	/* 0x0c3 */ 0U,
	/* 0x0c4 */ 0U,
	/* 0x0c5 */ 0U,
	/* 0x0c6 */ 0U,
	/* 0x0c7 */ 0U,
	/* 0x0c8 */ 0U,
	/* 0x0c9 */ 0U,
	/* 0x0ca */ 0U,
	/* 0x0cb */ 0U,
	/* 0x0cc */ 0U,
	/* 0x0cd */ 0U,
	/* 0x0ce */ 0U,
	/* 0x0cf */ 0U,
	/* 0x0d0 */ 0U,
	/* 0x0d1 */ 0U,
	/* 0x0d2 */ 0U,
	/* 0x0d3 */ 0U,
	/* 0x0d4 */ 0U,
	/* 0x0d5 */ 0U,
	/* 0x0d6 */ 0U,
	/* 0x0d7 */ 0U,
	/* 0x0d8 */ 0U,
	/* 0x0d9 */ 0U,
	/* 0x0da */ 0U,
	/* 0x0db */ 0U,
	/* 0x0dc */ 0U,
	/* 0x0dd */ 0U,
	/* 0x0de */ 0U,
	/* 0x0df */ 0U,
	/* 0x0e0 */ 0U,
	/* 0x0e1 */ 0U,
	/* 0x0e2 */ 0U,
	/* 0x0e3 */ 0U,
	/* 0x0e4 */ 0U,
	/* 0x0e5 */ 0U,
	/* 0x0e6 */ 0U,
	/* 0x0e7 */ 0U,
	/* 0x0e8 */ 0U,
	/* 0x0e9 */ 0U,
	/* 0x0ea */ 0U,
	/* 0x0eb */ 0U,
	/* 0x0ec */ 0U,
	/* 0x0ed */ 0U,
	/* 0x0ee */ 0U,
	/* 0x0ef */ 0U,
	/* 0x0f0 */ 0U,
	/* 0x0f1 */ 0U,
	/* 0x0f2 */ 0U,
	/* 0x0f3 */ 0U,
	/* 0x0f4 */ 0U,
	/* 0x0f5 */ 0U,
	/* 0x0f6 */ 0U,
	/* 0x0f7 */ 0U,
	/* 0x0f8 */ 0U,
	/* 0x0f9 */ 0U,
	/* 0x0fa */ 0U,
	/* 0x0fb */ 0U,
	/* 0x0fc */ 0U,
	/* 0x0fd */ 0U,
	/* 0x0fe */ 0U,
	/* 0x0ff */ 0U,
	/* 0x100 */ 0U,
	/* 0x101 */ 0U,
	/* 0x102 */ 0U,
	/* 0x103 */ 0U,
	/* 0x104 */ 0U,
	/* 0x105 */ 0U,
	/* 0x106 */ 0U,
	/* 0x107 */ 0U,
	/* 0x108 */ 0U,
	/* 0x109 */ 0U,
	/* 0x10a */ 0U,
	/* 0x10b */ 0U,
	/* 0x10c */ 0U,
	/* 0x10d */ 0U,
	/* 0x10e */ 0U,
	/* 0x10f */ 0U,
	/* 0x110 */ 0U,
	/* 0x111 */ 0U,
	/* 0x112 */ 0U,
	/* 0x113 */ 0U,
	/* 0x114 */ 0U,
	/* 0x115 */ 0U,
	/* 0x116 */ 0U,
	/* 0x117 */ 0U,
	/* 0x118 */ 0U,
	/* 0x119 */ 0U,
	/* 0x11a */ 0U,
	/* 0x11b */ 0U,
	/* 0x11c */ 0U,
	/* 0x11d */ 0U,
	/* 0x11e */ 0U,
	/* 0x11f */ 0U,
	/* 0x120 */ 0U,
	/* 0x121 */ 0U,
	/* 0x122 */ 0U,
	/* 0x123 */ 0U,
	/* 0x124 */ 0U,
	/* 0x125 */ 0U,
	/* 0x126 */ 0U,
	/* 0x127 */ 0U,
	/* 0x128 */ 0U,
	/* 0x129 */ 0U,
	/* 0x12a */ 0U,
	/* 0x12b */ 0U,
	/* 0x12c */ 0U,
	/* 0x12d */ 0U,
	/* 0x12e */ 0U,
	/* 0x12f */ 0U,
	/* 0x130 */ 0U,
	/* 0x131 */ 0U,
	/* 0x132 */ 0U,
	/* 0x133 */ 0U,
	/* 0x134 */ 0U,
	/* 0x135 */ 0U,
	/* 0x136 */ 0U,
	/* 0x137 */ 0U,
	/* 0x138 */ 0U,
	/* 0x139 */ 0U,
	/* 0x13a */ 0U,
	/* 0x13b */ 0U,
	/* 0x13c */ 0U,
	/* 0x13d */ 0U,
	/* 0x13e */ 0U,
	/* 0x13f */ 0U,
	/* 0x140 */ 0U,
	/* 0x141 */ 0U,
	/* 0x142 */ 0U,
	/* 0x143 */ 0U,
	/* 0x144 */ 0U,
	/* 0x145 */ 0U,
	/* 0x146 */ 0U,
	/* 0x147 */ 0U,
	/* 0x148 */ 0U,
	/* 0x149 */ 0U,
	/* 0x14a */ 0U,
	/* 0x14b */ 0U,
	/* 0x14c */ 0U,
	/* 0x14d */ 0U,
	/* 0x14e */ 0U,
	/* 0x14f */ 0U,
	/* 0x150 */ 0U,
	/* 0x151 */ 0U,
	/* 0x152 */ 0U,
	/* 0x153 */ 0U,
	/* 0x154 */ 0U,
	/* 0x155 */ 0U,
	/* 0x156 */ 0U,
	/* 0x157 */ 0U,
	/* 0x158 */ 0U,
	/* 0x159 */ 0U,
	/* 0x15a */ 0U,
	/* 0x15b */ 0U,
	/* 0x15c */ 0U,
	/* 0x15d */ 0U,
	/* 0x15e */ 0U,
	/* 0x15f */ 0U,
	/* 0x160 */ 0U,
	/* 0x161 */ 0U,
	/* 0x162 */ 0U,
	/* 0x163 */ 0U,
	/* 0x164 */ 0U,
	/* 0x165 */ 0U,
	/* 0x166 */ 0U,
	/* 0x167 */ 1U,
	/* 0x168 */ 0U,
	/* 0x169 */ 0U,
	/* 0x16a */ 0U,
	/* 0x16b */ 0U,
	/* 0x16c */ 0U,
	/* 0x16d */ 0U,
	/* 0x16e */ 0U,
	/* 0x16f */ 0U,
	/* 0x170 */ 0U,
	/* 0x171 */ 0U,
	/* 0x172 */ 0U,
	/* 0x173 */ 0U,
	/* 0x174 */ 0U,
	/* 0x175 */ 0U,
	/* 0x176 */ 0U,
	/* 0x177 */ 0U,
	/* 0x178 */ 0U,
	/* 0x179 */ 0U,
	/* 0x17a */ 0U,
	/* 0x17b */ 0U,
	/* 0x17c */ 0U,
	/* 0x17d */ 0U,
	/* 0x17e */ 0U,
	/* 0x17f */ 0U,
	/* 0x180 */ 0U,
	/* 0x181 */ 0U,
	/* 0x182 */ 0U,
	/* 0x183 */ 0U,
	/* 0x184 */ 0U,
	/* 0x185 */ 0U,
	/* 0x186 */ 0U,
	/* 0x187 */ 0U,
	/* 0x188 */ 0U,
	/* 0x189 */ 0U,
	/* 0x18a */ 0U,
	/* 0x18b */ 0U,
	/* 0x18c */ 0U,
	/* 0x18d */ 0U,
	/* 0x18e */ 0U,
	/* 0x18f */ 0U,
	/* 0x190 */ 0U,
	/* 0x191 */ 0U,
	/* 0x192 */ 0U,
	/* 0x193 */ 0U,
	/* 0x194 */ 0U,
	/* 0x195 */ 0U,
	/* 0x196 */ 0U,
	/* 0x197 */ 0U,
	/* 0x198 */ 0U,
	/* 0x199 */ 0U,
	/* 0x19a */ 0U,
	/* 0x19b */ 0U,
	/* 0x19c */ 0U,
	/* 0x19d */ 0U,
	/* 0x19e */ 0U,
	/* 0x19f */ 0U,
	/* 0x1a0 */ 0U,
	/* 0x1a1 */ 0U,
	/* 0x1a2 */ 0U,
	/* 0x1a3 */ 0U,
	/* 0x1a4 */ 0U,
	/* 0x1a5 */ 0U,
	/* 0x1a6 */ 0U,
	/* 0x1a7 */ 0U,
	/* 0x1a8 */ 0U,
	/* 0x1a9 */ 0U,
	/* 0x1aa */ 0U,
	/* 0x1ab */ 0U,
	/* 0x1ac */ 0U,
	/* 0x1ad */ 0U,
	/* 0x1ae */ 0U,
	/* 0x1af */ 0U,
	/* 0x1b0 */ 0U,
	/* 0x1b1 */ 0U,
	/* 0x1b2 */ 0U,
	/* 0x1b3 */ 0U,
	/* 0x1b4 */ 0U,
	/* 0x1b5 */ 0U,
	/* 0x1b6 */ 0U,
	/* 0x1b7 */ 0U,
	/* 0x1b8 */ 0U,
	/* 0x1b9 */ 0U,
	/* 0x1ba */ 0U,
	/* 0x1bb */ 0U,
	/* 0x1bc */ 0U,
	/* 0x1bd */ 0U,
	/* 0x1be */ 0U,
	/* 0x1bf */ 0U,
	/* 0x1c0 */ 0U,
	/* 0x1c1 */ 0U,
	/* 0x1c2 */ 0U,
	/* 0x1c3 */ 0U,
	/* 0x1c4 */ 0U,
	/* 0x1c5 */ 0U,
	/* 0x1c6 */ 0U,
	/* 0x1c7 */ 0U,
	/* 0x1c8 */ 0U,
	/* 0x1c9 */ 0U,
	/* 0x1ca */ 0U,
	/* 0x1cb */ 0U,
	/* 0x1cc */ 0U,
	/* 0x1cd */ 0U,
	/* 0x1ce */ 0U,
	/* 0x1cf */ 0U,
	/* 0x1d0 */ 0U,
	/* 0x1d1 */ 0U,
	/* 0x1d2 */ 0U,
	/* 0x1d3 */ 0U,
	/* 0x1d4 */ 0U,
	/* 0x1d5 */ 0U,
	/* 0x1d6 */ 0U,
	/* 0x1d7 */ 0U,
	/* 0x1d8 */ 0U,
	/* 0x1d9 */ 0U,
	/* 0x1da */ 0U,
	/* 0x1db */ 0U,
	/* 0x1dc */ 0U,
	/* 0x1dd */ 0U,
	/* 0x1de */ 0U,
	/* 0x1df */ 0U,
	/* 0x1e0 */ 0U,
	/* 0x1e1 */ 0U,
	/* 0x1e2 */ 0U,
	/* 0x1e3 */ 0U,
	/* 0x1e4 */ 0U,
	/* 0x1e5 */ 0U,
	/* 0x1e6 */ 0U,
	/* 0x1e7 */ 0U,
	/* 0x1e8 */ 0U,
	/* 0x1e9 */ 0U,
	/* 0x1ea */ 0U,
	/* 0x1eb */ 0U,
	/* 0x1ec */ 0U,
	/* 0x1ed */ 0U,
	/* 0x1ee */ 0U,
	/* 0x1ef */ 0U,
	/* 0x1f0 */ 0U,
	/* 0x1f1 */ 0U,
	/* 0x1f2 */ 0U,
	/* 0x1f3 */ 0U,
	/* 0x1f4 */ 0U,
	/* 0x1f5 */ 0U,
	/* 0x1f6 */ 0U,
	/* 0x1f7 */ 0U,
	/* 0x1f8 */ 0U,
	/* 0x1f9 */ 0U,
	/* 0x1fa */ 0U,
	/* 0x1fb */ 0U,
	/* 0x1fc */ 0U,
	/* 0x1fd */ 0U,
	/* 0x1fe */ 0U,
	/* 0x1ff */ 0U,
	/* 0x200 */ 0U,
	/* 0x201 */ 0U,
	/* 0x202 */ 0U,
	/* 0x203 */ 0U,
	/* 0x204 */ 0U,
	/* 0x205 */ 0U,
	/* 0x206 */ 0U,
	/* 0x207 */ 0U,
	/* 0x208 */ 0U,
	/* 0x209 */ 0U,
	/* 0x20a */ 0U,
	/* 0x20b */ 0U,
	/* 0x20c */ 0U,
	/* 0x20d */ 0U,
	/* 0x20e */ 0U,
	/* 0x20f */ 0U,
	/* 0x210 */ 0U,
	/* 0x211 */ 0U,
	/* 0x212 */ 0U,
	/* 0x213 */ 0U,
	/* 0x214 */ 0U,
	/* 0x215 */ 0U,
	/* 0x216 */ 0U,
	/* 0x217 */ 0U,
	/* 0x218 */ 0U,
	/* 0x219 */ 0U
};

/*
 *  CPU Exception Handler Table
 */

const FP _kernel_exc_table[TNUM_EXCNO] = {
	/* 0 */ (FP)(_kernel_default_exc_handler),
	/* 1 */ (FP)(_kernel_default_exc_handler),
	/* 2 */ (FP)(_kernel_default_exc_handler),
	/* 3 */ (FP)(_kernel_default_exc_handler),
	/* 4 */ (FP)(_kernel_default_exc_handler),
	/* 5 */ (FP)(_kernel_default_exc_handler)
};

