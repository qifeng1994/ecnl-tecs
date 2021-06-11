# echonet_main.cを生成するため
require "json"
require "fileutils"
# Echonet Lite Device Description in JSON
devdesc_json_fname = "appendix_v3-1-6r5/EL_DeviceDescription_3_1_6r5.json"

# Read Device Description (String)
devdesc_json = File.read(devdesc_json_fname)

# Convert JSON String to Hash
DevDesc = JSON[devdesc_json]
Devices = DevDesc["devices"]
Definitions = DevDesc["definitions"]

def font_change(name)
    # return name.split(/ |\_|\-/).map(&:capitalize).join(" ").gsub(/\s+/, '')
    return name.gsub("/"," ").split(/ |\_|\-/).map(&:capitalize).join(" ").gsub(/\s+/, '')
end

def font_name(name)
    return name.downcase.gsub(/\s+/,'_')
end

def file_output(val)
    className = font_change(val['className']['en'])
    FileUtils.mkdir_p("lib/#{className}/src") # 建立多重路径
    app = File.open("lib/#{className}/src/echonet_main.c","w+")
    print_default_info(app,className)
    objname = font_name(val['className']['en'])
    app.puts("struct #{objname}_t #{objname}_class_data = {\n};")
	app.puts("struct node_profile_object_t local_node_data = {\n};")
    app.close
end


def print_default_info(fileName,className)
    fileName.puts("#include <kernel.h>
#include <t_syslog.h>
#include <t_stdlib.h>
#include <sil.h>
#include <string.h>
#include \"syssvc/serial.h\"
#include \"syssvc/syslog.h\"
#include \"kernel_cfg.h\"
#include \"echonet_main.h\"
#include \"echonet_cfg.h\"
#include \"target_kernel_impl.h\"
#include \"gpio_api.h\"
#include \"rtc_api.h\"

#define MAKER_CODE	0x00, 0x00, 0xB3

static void main_initialize();
static int main_get_timer();
static void main_progress(int interval);
static void main_recv_esv(T_EDATA *esv);
static void main_break_wait(uint8_t *brkdat, int32_t len);
static void main_timeout();

void echonet_main_task(intptr_t exinf)
{
	ER ret, ret2;
	SYSTIM prev, now;
	int timer;
	T_EDATA *esv;
	uint8_t brkdat[64];
	int32_t len;

	/* アプリケーションの初期化 */
	main_initialize();

	ret2 = get_tim(&now);
	if (ret2 != E_OK) {
		syslog(LOG_ERROR, \"get_tim\");
		return;
	}

	for (;;) {
		prev = now;

		/* タイマー取得 */
		timer = main_get_timer();

		/* 応答電文待ち */
		ret = ecn_trcv_esv(&esv, timer);
		if ((ret != E_OK) && (ret != E_BRK) && (ret != E_TMOUT)) {
			syslog(LOG_ERROR, \"ecn_trcv_esv\");
			break;
		}

		ret2 = get_tim(&now);
		if (ret2 != E_OK) {
			syslog(LOG_ERROR, \"get_tim\");
			break;
		}

		/* 時間経過 */
		main_progress(now - prev);
		/* Echonet電文受信の場合 */
		if (ret == E_OK) {
			/* Echonet電文受信処理 */
			main_recv_esv(esv);
			/* 領域解放 */
			ret = ecn_rel_esv(esv);
			if (ret != E_OK) {
				syslog(LOG_ERROR, \"ecn_rel_esv\");
				break;
			}
		}
		/* 応答電文待ちの割り込みの場合 */
		else if (ret == E_BRK) {
			/* 応答電文待ちの割り込みデータ取得 */
			ret = ecn_get_brk_dat(esv, brkdat, sizeof(brkdat), &len);
			if (ret != E_OK) {
				syslog(LOG_ERROR, \"ecn_get_brk_dat\");
				break;
			}

			/* 応答電文待ちの割り込み処理 */
			main_break_wait(brkdat, len);

			/* 領域解放 */
			ret = ecn_rel_esv(esv);
			if (ret != E_OK) {
				syslog(LOG_ERROR, \"ecn_rel_esv\");
				break;
			}
		}

		/* タイムアウト処理 */
		main_timeout();
	}
}

enum main_state_t{
	main_state_idle,
};
int main_timer = TMO_FEVR;
enum main_state_t main_state = main_state_idle;

static void main_initialize()
{
	/* メインタスクを起動 */
	ER ret = act_tsk(MAIN_TASK);
	if (ret != E_OK) {
		syslog(LOG_ERROR, \"act_tsk\");
	}
}

static int main_get_timer()
{
	return main_timer;
}

static void main_progress(int interval)
{
	if(main_timer == TMO_FEVR)
		return;

	main_timer -= interval;
	if(main_timer < 0){
		main_timer = 0;
	}
}

static void main_recv_esv(T_EDATA *esv)
{
	ER ret;
	ID eobjid;
	uint8_t epc;
	uint8_t pdc;
	uint8_t p_edt[256];
	T_ENUM_EPC enm;

	eobjid = ecn_get_eobj(esv);
	
	if (eobjid == EOBJ_NULL) {
		syslog(LOG_ERROR, \"ecn_get_eobj\");
	}

	ret = ecn_itr_ini(&enm, esv);
	if (ret != E_OK) {
		syslog(LOG_ERROR, \"ecn_itr_ini\");
		return;
	}

	for (;;) {
		while ((ret = ecn_itr_nxt(&enm, &epc, &pdc, p_edt)) == E_OK) {
			switch (epc) {
			case 0x80:
                break;
			}
		}
		if (ret != E_BOVR) {
			syslog(LOG_ERROR, \"ecn_itr_nxt\");
			break;
		}
		if (enm.is_eof)
			break;
	}
}

static void main_break_wait(uint8_t *brkdat, int32_t len)
{
	switch(main_state){
	case main_state_idle:
		break;
	}
}

static void main_timeout()
{
	if(main_timer != 0)
		return;

	switch(main_state){
	case main_state_idle:
		break;
	}
}

")
end

Devices.each{ |id, val|
    if val['oneOf'] then
        # print( "#{id} oneOf\n" )
        val['oneOf'].each{|val2|
            # print( "  #{val2['className']['en']}\n" )
            file_output(val2)

        }
    elsif val['className'] == nil then
        #print "*** #{id} has no class name ***\n"
    elsif val['className']['en'] then
        file_output(val)        
        #print( "#{val['className']['en']} = #{id}\n" )
        #print_properties( val['elProperties'] )
    elsif val['className']['ja'] then
        #print( "#{val['className']['ja']} = #{id}\n" )
        #print_properties( val['elProperties'] )
    else
        #print "### #{id} has class name but has neither 'ja' nor 'en' ***\n"
    end
}