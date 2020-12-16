/* echonet_cfg.c */
#include <kernel.h>
#include <sil.h>
#include "echonet.h"

/*
 *  Include Directives (#include)
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
#include "echonet_cfg.h"
#include "kernel_cfg.h"


/*
 *  ECHONET Lite Property Functions
 */

/*
 * インスタンス数
 */
const uint8_t _echonet_LOCAL_NODE_EOBJ_inst_count[] = {
	0x0, 0x0, 0x1
};

/*
 * クラス数
 */
const uint8_t _echonet_LOCAL_NODE_EOBJ_class_count[] = {
	0x0, 0x2
};

/*
 * インスタンスリスト
 */
const uint8_t _echonet_LOCAL_NODE_EOBJ_inst_list[] = {
	0x1, 0x2, 0x90, 0x1
};

/*
 * クラスリスト
 */
const uint8_t _echonet_LOCAL_NODE_EOBJ_class_list[] = {
	0x1, 0x2, 0x90
};

/*
 * インスタンス数
 */
const uint8_t _echonet_HUMAN_DETECTION_SENSER_ENOD_inst_count[] = {
	0x0, 0x0, 0x1
};

/*
 * クラス数
 */
const uint8_t _echonet_HUMAN_DETECTION_SENSER_ENOD_class_count[] = {
	0x0, 0x2
};

/*
 * インスタンスリスト
 */
const uint8_t _echonet_HUMAN_DETECTION_SENSER_ENOD_inst_list[] = {
	0x1, 0x0, 0x7, 0x1
};

/*
 * クラスリスト
 */
const uint8_t _echonet_HUMAN_DETECTION_SENSER_ENOD_class_list[] = {
	0x1, 0x0, 0x7
};

/*
 * アナウンスプロパティマップ
 */
const uint8_t _echonet_LOCAL_NODE_EOBJ_anno_prpmap[] = {
	0x1, 0xd5
};

/*
 * SETプロパティマップ
 */
const uint8_t _echonet_LOCAL_NODE_EOBJ_set_prpmap[] = {
	0x1, 0x80
};

/*
 * GETプロパティマップ
 */
const uint8_t _echonet_LOCAL_NODE_EOBJ_get_prpmap[] = {
	0xc, 0x80, 0x82, 0x83, 0x89, 0x8a, 0x9d, 0x9e, 0x9f, 0xd3, 0xd4, 0xd6, 0xd7
};

/*
 * プロパティ定義
 */
const EPRPINIB _echonet_LOCAL_NODE_EOBJ_eprpinib_table[TNUM_LOCAL_NODE_EOBJ_EPRPNO] = {
	{ (0x80), (EPC_RULE_SET | EPC_RULE_GET), (1), ((intptr_t)&node_profile_data.property80), ((EPRP_SETTER *)onoff_prop_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x82), (EPC_RULE_GET), (4), ((intptr_t)&node_profile_data.property82), ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x83), (EPC_RULE_GET), (17), ((intptr_t)&node_profile_data.property83), ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x89), (EPC_RULE_GET), (2), ((intptr_t)&node_profile_data.property89), ((EPRP_SETTER *)ecn_data_prop_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x8A), (EPC_RULE_GET), (3), ((intptr_t)&node_profile_data.property8A), ((EPRP_SETTER *)ecn_data_prop_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x9D), (EPC_RULE_GET), 0x2, (intptr_t)_echonet_LOCAL_NODE_EOBJ_anno_prpmap, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x9E), (EPC_RULE_GET), 0x2, (intptr_t)_echonet_LOCAL_NODE_EOBJ_set_prpmap, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x9F), (EPC_RULE_GET), 0xd, (intptr_t)_echonet_LOCAL_NODE_EOBJ_get_prpmap, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0xD3), (EPC_RULE_GET), (3), (intptr_t)_echonet_LOCAL_NODE_EOBJ_inst_count, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0xD4), (EPC_RULE_GET), (2), (intptr_t)_echonet_LOCAL_NODE_EOBJ_class_count, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0xD5), (EPC_RULE_ANNO), sizeof(_echonet_LOCAL_NODE_EOBJ_inst_list), (intptr_t)_echonet_LOCAL_NODE_EOBJ_inst_list, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0xD6), (EPC_RULE_GET), sizeof(_echonet_LOCAL_NODE_EOBJ_inst_list), (intptr_t)_echonet_LOCAL_NODE_EOBJ_inst_list, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0xD7), (EPC_RULE_GET), sizeof(_echonet_LOCAL_NODE_EOBJ_class_list), (intptr_t)_echonet_LOCAL_NODE_EOBJ_class_list, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) }
};

/*
 * アナウンスプロパティマップ
 */
const uint8_t _echonet_GENERAL_LIGHTING_CLASS_EOBJ_anno_prpmap[] = {
	0x3, 0x80, 0x81, 0x88
};

/*
 * SETプロパティマップ
 */
const uint8_t _echonet_GENERAL_LIGHTING_CLASS_EOBJ_set_prpmap[] = {
	0x5, 0x80, 0x81, 0x97, 0x98, 0xb6
};

/*
 * GETプロパティマップ
 */
const uint8_t _echonet_GENERAL_LIGHTING_CLASS_EOBJ_get_prpmap[] = {
	0xb, 0x80, 0x81, 0x82, 0x88, 0x8a, 0x97, 0x98, 0x9d, 0x9e, 0x9f, 0xb6
};

/*
 * プロパティ定義
 */
const EPRPINIB _echonet_GENERAL_LIGHTING_CLASS_EOBJ_eprpinib_table[TNUM_GENERAL_LIGHTING_CLASS_EOBJ_EPRPNO] = {
	{ (0x80), (EPC_ANNOUNCE | EPC_RULE_SET | EPC_RULE_GET), (1), ((intptr_t)&general_lighting_class_data.property80), ((EPRP_SETTER *)onoff_prop_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0xB6), (EPC_RULE_SET | EPC_RULE_GET), (1), ((intptr_t)&general_lighting_class_data.propertyB6), ((EPRP_SETTER *)lighting_mode_prop_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x81), (EPC_ANNOUNCE | EPC_RULE_SET | EPC_RULE_GET), (1), ((intptr_t)&general_lighting_class_data.property81), ((EPRP_SETTER *)ecn_data_prop_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x82), (EPC_RULE_GET), (4), ((intptr_t)&general_lighting_class_data.property82), ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x88), (EPC_ANNOUNCE | EPC_RULE_GET), (1), ((intptr_t)&general_lighting_class_data.property88), ((EPRP_SETTER *)alarm_prop_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x8A), (EPC_RULE_GET), (3), ((intptr_t)&general_lighting_class_data.property8A), ((EPRP_SETTER *)ecn_data_prop_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x97), (EPC_RULE_SET | EPC_RULE_GET), (2), ((intptr_t)NULL), ((EPRP_SETTER *)time_prop_set), ((EPRP_GETTER *)time_prop_get) },
	{ (0x98), (EPC_RULE_SET | EPC_RULE_GET), (4), ((intptr_t)NULL), ((EPRP_SETTER *)date_prop_set), ((EPRP_GETTER *)date_prop_get) },
	{ (0x9D), (EPC_RULE_GET), 0x4, (intptr_t)_echonet_GENERAL_LIGHTING_CLASS_EOBJ_anno_prpmap, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x9E), (EPC_RULE_GET), 0x6, (intptr_t)_echonet_GENERAL_LIGHTING_CLASS_EOBJ_set_prpmap, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x9F), (EPC_RULE_GET), 0xc, (intptr_t)_echonet_GENERAL_LIGHTING_CLASS_EOBJ_get_prpmap, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) }
};

/*
 * アナウンスプロパティマップ
 */
const uint8_t _echonet_HUMAN_DETECTION_SENSER_ENOD_anno_prpmap[] = {
	0x1, 0xd5
};

/*
 * SETプロパティマップ
 */
const uint8_t _echonet_HUMAN_DETECTION_SENSER_ENOD_set_prpmap[] = {
	0x1, 0x80
};

/*
 * GETプロパティマップ
 */
const uint8_t _echonet_HUMAN_DETECTION_SENSER_ENOD_get_prpmap[] = {
	0xc, 0x80, 0x82, 0x83, 0x89, 0x8a, 0x9d, 0x9e, 0x9f, 0xd3, 0xd4, 0xd6, 0xd7
};

/*
 * プロパティ定義
 */
const EPRPINIB _echonet_HUMAN_DETECTION_SENSER_ENOD_eprpinib_table[TNUM_HUMAN_DETECTION_SENSER_ENOD_EPRPNO] = {
	{ (0x80), (EPC_RULE_SET | EPC_RULE_GET), (1), ((intptr_t)&human_detection_sensor_node_data.property80), ((EPRP_SETTER *)onoff_prop_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x82), (EPC_RULE_GET), (4), ((intptr_t)&human_detection_sensor_node_data.property82), ((EPRP_SETTER *)ecn_data_prop_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x83), (EPC_RULE_GET), (17), ((intptr_t)&human_detection_sensor_node_data.property83), ((EPRP_SETTER *)ecn_data_prop_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x89), (EPC_RULE_GET), (2), ((intptr_t)&human_detection_sensor_node_data.property89), ((EPRP_SETTER *)ecn_data_prop_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x8A), (EPC_RULE_GET), (3), ((intptr_t)&human_detection_sensor_node_data.property8A), ((EPRP_SETTER *)ecn_data_prop_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x9D), (EPC_RULE_GET), 0x2, (intptr_t)_echonet_HUMAN_DETECTION_SENSER_ENOD_anno_prpmap, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x9E), (EPC_RULE_GET), 0x2, (intptr_t)_echonet_HUMAN_DETECTION_SENSER_ENOD_set_prpmap, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x9F), (EPC_RULE_GET), 0xd, (intptr_t)_echonet_HUMAN_DETECTION_SENSER_ENOD_get_prpmap, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0xD3), (EPC_RULE_GET), (3), (intptr_t)_echonet_HUMAN_DETECTION_SENSER_ENOD_inst_count, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0xD4), (EPC_RULE_GET), (2), (intptr_t)_echonet_HUMAN_DETECTION_SENSER_ENOD_class_count, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0xD5), (EPC_RULE_ANNO), sizeof(_echonet_HUMAN_DETECTION_SENSER_ENOD_inst_list), (intptr_t)_echonet_HUMAN_DETECTION_SENSER_ENOD_inst_list, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0xD6), (EPC_RULE_GET), sizeof(_echonet_HUMAN_DETECTION_SENSER_ENOD_inst_list), (intptr_t)_echonet_HUMAN_DETECTION_SENSER_ENOD_inst_list, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0xD7), (EPC_RULE_GET), sizeof(_echonet_HUMAN_DETECTION_SENSER_ENOD_class_list), (intptr_t)_echonet_HUMAN_DETECTION_SENSER_ENOD_class_list, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) }
};

/*
 * アナウンスプロパティマップ
 */
const uint8_t _echonet_HUMAN_DETECTION_SENSOR_EOBJ_anno_prpmap[] = {
	0x4, 0x80, 0x81, 0x88, 0xb1
};

/*
 * SETプロパティマップ
 */
const uint8_t _echonet_HUMAN_DETECTION_SENSOR_EOBJ_set_prpmap[] = {
	0x2, 0x80, 0x81
};

/*
 * GETプロパティマップ
 */
const uint8_t _echonet_HUMAN_DETECTION_SENSOR_EOBJ_get_prpmap[] = {
	0x9, 0x80, 0x81, 0x82, 0x88, 0x8a, 0x9d, 0x9e, 0x9f, 0xb1
};

/*
 * プロパティ定義
 */
const EPRPINIB _echonet_HUMAN_DETECTION_SENSOR_EOBJ_eprpinib_table[TNUM_HUMAN_DETECTION_SENSOR_EOBJ_EPRPNO] = {
	{ (0x80), (EPC_ANNOUNCE | EPC_RULE_SET | EPC_RULE_GET), (1), ((intptr_t)&human_detection_sensor_data.property80), ((EPRP_SETTER *)onoff_prop_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0xB1), (EPC_ANNOUNCE | EPC_RULE_GET), (1), ((intptr_t)&human_detection_sensor_data.propertyB1), ((EPRP_SETTER *)human_detection_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x81), (EPC_ANNOUNCE | EPC_RULE_SET | EPC_RULE_GET), (1), ((intptr_t)&human_detection_sensor_data.property81), ((EPRP_SETTER *)ecn_data_prop_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x82), (EPC_RULE_GET), (4), ((intptr_t)&human_detection_sensor_data.property82), ((EPRP_SETTER *)ecn_data_prop_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x88), (EPC_ANNOUNCE | EPC_RULE_GET), (1), ((intptr_t)&human_detection_sensor_data.property88), ((EPRP_SETTER *)ecn_data_prop_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x8A), (EPC_RULE_GET), (3), ((intptr_t)&human_detection_sensor_data.property8A), ((EPRP_SETTER *)ecn_data_prop_set), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x9D), (EPC_RULE_GET), 0x5, (intptr_t)_echonet_HUMAN_DETECTION_SENSOR_EOBJ_anno_prpmap, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x9E), (EPC_RULE_GET), 0x3, (intptr_t)_echonet_HUMAN_DETECTION_SENSOR_EOBJ_set_prpmap, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) },
	{ (0x9F), (EPC_RULE_GET), 0xa, (intptr_t)_echonet_HUMAN_DETECTION_SENSOR_EOBJ_get_prpmap, ((EPRP_SETTER *)NULL), ((EPRP_GETTER *)ecn_data_prop_get) }
};


/*
 *  ECHONET Lite Object Functions
 */

const ID _echonet_tmax_eobjid = (TMIN_EOBJID + TNUM_EOBJID - 1);

const EOBJINIB _echonet_eobjinib_table[TNUM_EOBJID] = {
	{ (EOBJ_LOCAL_NODE), (EOBJ_NULL), (0), (EOJ_X1_PROFILE), (EOJ_X2_NODE_PROFILE), (EOJ_X3_NODE_PROFILE), _echonet_LOCAL_NODE_EOBJ_eprpinib_table, TNUM_LOCAL_NODE_EOBJ_EPRPNO },
	{ (EOBJ_DEVICE), (LOCAL_NODE_EOBJ), (0), (EOJ_X1_AMENITY), (EOJ_X2_GENERAL_LIGHTING_CLASS), (EOJ_X3_GENERAL_LIGHTING_CLASS), _echonet_GENERAL_LIGHTING_CLASS_EOBJ_eprpinib_table, TNUM_GENERAL_LIGHTING_CLASS_EOBJ_EPRPNO },
	{ (EOBJ_ASYNC_REMOTE_NODE), (EOBJ_NULL), (0), (EOJ_X1_PROFILE), (EOJ_X2_NODE_PROFILE), (EOJ_X3_HUMAN_DETECTION_SENSOR_NODE), _echonet_HUMAN_DETECTION_SENSER_ENOD_eprpinib_table, TNUM_HUMAN_DETECTION_SENSER_ENOD_EPRPNO },
	{ (EOBJ_DEVICE), (HUMAN_DETECTION_SENSER_ENOD), (0), (EOJ_X1_SENSOR), (EOJ_X2_HUMAN_DETECTION_SENSOR), (EOJ_X3_HUMAN_DETECTION_SENSOR), _echonet_HUMAN_DETECTION_SENSOR_EOBJ_eprpinib_table, TNUM_HUMAN_DETECTION_SENSOR_EOBJ_EPRPNO }
};


const int _echonet_tnum_enodid = TNUM_ENODID;

/*
 *  ECHONET Lite Node Functions
 */

/*
 * ノードに所属する機器オブジェクトの一覧
 */
const EOBJINIB *_echonet_LOCAL_NODE_EOBJ_eobjinib_table[TNUM_LOCAL_NODE_EOBJ_EOBJNO] = {
	{ &_echonet_eobjinib_table[GENERAL_LIGHTING_CLASS_EOBJ - 1] }
};
/*
 * ノードに所属する機器オブジェクトの一覧
 */
const EOBJINIB *_echonet_HUMAN_DETECTION_SENSER_ENOD_eobjinib_table[TNUM_HUMAN_DETECTION_SENSER_ENOD_EOBJNO] = {
	{ &_echonet_eobjinib_table[HUMAN_DETECTION_SENSOR_EOBJ - 1] }
};

/*
 * ECHONET Liteノード管理ブロック
 */
EOBJCB _echonet_eobjcb_table[TNUM_ENODID] = {
	{ &_echonet_eobjinib_table[LOCAL_NODE_EOBJ - 1], _echonet_LOCAL_NODE_EOBJ_eobjinib_table, TNUM_LOCAL_NODE_EOBJ_EOBJNO },
	{ &_echonet_eobjinib_table[HUMAN_DETECTION_SENSER_ENOD - 1], _echonet_HUMAN_DETECTION_SENSER_ENOD_eobjinib_table, TNUM_HUMAN_DETECTION_SENSER_ENOD_EOBJNO }
};

const int _echonet_tnum_enodadr = TNUM_ENODADR;

/*
 *  ECHONET Lite Node Functions
 */

ENODADRB _echonet_enodadrb_table[TNUM_ENODADR] = {
	/* ENOD_MULTICAST_ID	*/ { true, ECHONET_MULTICAST_ADDR },
	/* ENOD_LOCAL_ID		*/ { true, },
	/* ENOD_API_ID			*/ { true, },
	/* ENOD_REMOTE_ID + -1	*/ { true, }
};

const ID _echonet_ecn_svc_taskid = ECHONET_SVC_TASK;
const ID _echonet_ecn_udp_taskid = ECHONET_UDP_TASK;
const ID _echonet_ecn_api_dataqueueid = ECHONET_API_DATAQUEUE;
const ID _echonet_ecn_svc_dataqueueid = ECHONET_SVC_DATAQUEUE;
const ID _echonet_ecn_udp_dataqueueid = ECHONET_UDP_DATAQUEUE;
#ifndef ECHONET_USE_MALLOC
const ID _echonet_ecn_mempoolid = ECHONET_MEMPOOL;
#endif


#include "tinet_cfg.h"

const ID _echonet_ecn_udp_cepid = ECHONET_UDP_CEPID;

