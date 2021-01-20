/* kernel_cfg.h */
#ifndef TOPPERS_KERNEL_CFG_H
#define TOPPERS_KERNEL_CFG_H

#define TNUM_TSKID	14
#define TSKID_tTask_LogTask_Task	1
#define IF_MBED_PHY_TASK	2
#define NET_TIMER_TASK	3
#define ETHER_OUTPUT_TASK	4
#define ETHER_INPUT_TASK	5
#define TCP_OUTPUT_TASK	6
#define UDP_OUTPUT_TASK	7
#define NET_MISC_TASK	8
#define FFARCH_TASK	9
#define NTSHELL_TASK	10
#define ECHONET_SVC_TASK	11
#define ECHONET_UDP_TASK	12
#define ECHONET_MAIN_TASK	13
#define MAIN_TASK	14

#define TNUM_SEMID	40
#define SEMID_tSemaphore_SerialPort1_ReceiveSemaphore	1
#define SEMID_tSemaphore_SerialPort1_SendSemaphore	2
#define SEM_MALLOC	3
#define SEM_IF_MBED_SBUF_READY	4
#define SEM_IF_MBED_RBUF_READY	5
#define SEM_CALL_OUT_LOCK	6
#define SEM_CALL_OUT_TIMEOUT	7
#define SEM_IP2STR_BUFF_LOCK	8
#define SEM_MAC2STR_BUFF_LOCK	9
#define SEM_ARP_CACHE_LOCK	10
#define SEM_IP4_FRAG_QUEUE	11
#define SEM_IN4_ROUTING_TBL	12
#define SEM_IGMP_GROUP_LOCK	13
#define SEM_TCP_POST_OUTPUT	14
#define SEM_TCP_CEP	15
#define SEM_UDP_POST_OUTPUT	16
#define SEM_UDP_CEP	17
#define SEM_DHCP4_CLI_LOCK	18
#define SEM_FILESYSTEM	19
#define SEM_FILEDESC	20
#define SEM_TCP_REP_LOCK0	21
#define SEM_TCP_REP_LOCK1	22
#define SEM_TCP_REP_LOCK2	23
#define SEM_TCP_REP_LOCK3	24
#define SEM_TCP_CEP_LOCK1	25
#define SEM_TCP_CEP_LOCK2	26
#define SEM_TCP_CEP_LOCK3	27
#define SEM_TCP_CEP_LOCK4	28
#define SEM_TCP_CEP_LOCK5	29
#define SEM_TCP_CEP_LOCK6	30
#define SEM_TCP_CEP_LOCK7	31
#define SEM_TCP_CEP_LOCK8	32
#define SEM_UDP4_CEP_LOCK1	33
#define SEM_UDP4_CEP_LOCK2	34
#define SEM_UDP4_CEP_LOCK3	35
#define SEM_UDP4_CEP_LOCK4	36
#define SEM_UDP4_CEP_LOCK5	37
#define SEM_UDP4_CEP_LOCK6	38
#define SEM_UDP4_CEP_LOCK7	39
#define SEM_UDP4_CEP_LOCK8	40

#define TNUM_FLGID	25
#define FLG_SELECT_WAIT	1
#define FLG_TCP_CEP_EST1	2
#define FLG_TCP_CEP_SND1	3
#define FLG_TCP_CEP_RCV1	4
#define FLG_TCP_CEP_EST2	5
#define FLG_TCP_CEP_SND2	6
#define FLG_TCP_CEP_RCV2	7
#define FLG_TCP_CEP_EST3	8
#define FLG_TCP_CEP_SND3	9
#define FLG_TCP_CEP_RCV3	10
#define FLG_TCP_CEP_EST4	11
#define FLG_TCP_CEP_SND4	12
#define FLG_TCP_CEP_RCV4	13
#define FLG_TCP_CEP_EST5	14
#define FLG_TCP_CEP_SND5	15
#define FLG_TCP_CEP_RCV5	16
#define FLG_TCP_CEP_EST6	17
#define FLG_TCP_CEP_SND6	18
#define FLG_TCP_CEP_RCV6	19
#define FLG_TCP_CEP_EST7	20
#define FLG_TCP_CEP_SND7	21
#define FLG_TCP_CEP_RCV7	22
#define FLG_TCP_CEP_EST8	23
#define FLG_TCP_CEP_SND8	24
#define FLG_TCP_CEP_RCV8	25

#define TNUM_DTQID	13
#define DTQ_ETHER_OUTPUT	1
#define ECHONET_API_DATAQUEUE	2
#define ECHONET_SVC_DATAQUEUE	3
#define ECHONET_UDP_DATAQUEUE	4
#define MAIN_DATAQUEUE	5
#define DTQ_UDP4_RCVQ1	6
#define DTQ_UDP4_RCVQ2	7
#define DTQ_UDP4_RCVQ3	8
#define DTQ_UDP4_RCVQ4	9
#define DTQ_UDP4_RCVQ5	10
#define DTQ_UDP4_RCVQ6	11
#define DTQ_UDP4_RCVQ7	12
#define DTQ_UDP4_RCVQ8	13

#define TNUM_PDQID	0

#define TNUM_MTXID	0

#define TNUM_MPFID	2
#define MPF_RSLV_SRBUF	1
#define MPF_DHCP4_CLI_MSG	2

#define TNUM_CYCID	2
#define NET_TIMER_HANDLER	1
#define SDFS_CYC	2

#define TNUM_ALMID	0

#define TNUM_ISRID	0

#endif /* TOPPERS_KERNEL_CFG_H */