#
#  TOPPERS/ASP Kernel
#      Toyohashi Open Platform for Embedded Real-Time Systems/
#      Advanced Standard Profile Kernel
# 
#  Copyright (C) 2000-2003 by Embedded and Real-Time Systems Laboratory
#                              Toyohashi Univ. of Technology, JAPAN
#  Copyright (C) 2006-2016 by Embedded and Real-Time Systems Laboratory
#              Graduate School of Information Science, Nagoya Univ., JAPAN
# 
#  上記著作権者は，以下の(1)～(4)の条件を満たす場合に限り，本ソフトウェ
#  ア（本ソフトウェアを改変したものを含む．以下同じ）を使用・複製・改
#  変・再配布（以下，利用と呼ぶ）することを無償で許諾する．
#   (1) 本ソフトウェアをソースコードの形で利用する場合には，上記の著作
#       権表示，この利用条件および下記の無保証規定が，そのままの形でソー
#       スコード中に含まれていること．
#   (2) 本ソフトウェアを，ライブラリ形式など，他のソフトウェア開発に使
#       用できる形で再配布する場合には，再配布に伴うドキュメント（利用
#       者マニュアルなど）に，上記の著作権表示，この利用条件および下記
#       の無保証規定を掲載すること．
#   (3) 本ソフトウェアを，機器に組み込むなど，他のソフトウェア開発に使
#      用できない形で再配布する場合には，次のいずれかの条件を満たすこ
#      と．
#     (a) 再配布に伴うドキュメント（利用者マニュアルなど）に，上記の著
#         作権表示，この利用条件および下記の無保証規定を掲載すること．
#    (b) 再配布の形態を，別に定める方法によって，TOPPERSプロジェクトに
#        報告すること．
#   (4) 本ソフトウェアの利用により直接的または間接的に生じるいかなる損
#      害からも，上記著作権者およびTOPPERSプロジェクトを免責すること．
#      また，本ソフトウェアのユーザまたはエンドユーザからのいかなる理
#      由に基づく請求からも，上記著作権者およびTOPPERSプロジェクトを
#      免責すること．
# 
#  本ソフトウェアは，無保証で提供されているものである．上記著作権者お
#  よびTOPPERSプロジェクトは，本ソフトウェアに関して，特定の使用目的
#  に対する適合性も含めて，いかなる保証も行わない．また，本ソフトウェ
#  アの利用により直接的または間接的に生じたいかなる損害に関しても，そ
#  の責任を負わない．
# 
#  $Id$
# 

#
#  ターゲットの指定（Makefile.targetで上書きされるのを防ぐため）
#
all:

#
#  ターゲット略称の定義
#
TARGET = gr_peach_gcc

#
#  プログラミング言語の定義
#
SRCLANG = c
ifeq ($(SRCLANG),c)
	LIBS = $(SRCDIR)/../musl-1.1.18/Debug/libmusl.a
endif
ifeq ($(SRCLANG),c++)
	USE_CXX = true
	CXXLIBS = -lstdc++ $(SRCDIR)/../musl-1.1.18/Debug/libmusl.a
	CXXRTS = cxxrt.o newlibrt.o
endif

#
#  ソースファイルのディレクトリの定義
#
SRCDIR = ../../asp3_dcre

#
#  オブジェクトファイル名の拡張子の設定
#
OBJEXT = elf

#
#  カーネルライブラリ（libkernel.a）のディレクトリ名
#  （カーネルライブラリもmake対象にする時は，空に定義する）
#
KERNEL_LIB = ../../asp3_dcre/Debug

#
#  カーネルを関数単位でコンパイルするかどうかの定義
#
KERNEL_FUNCOBJS = 

#
#  TECSを外すかどうかの定義
#
OMIT_TECS = 

#
#  トレースログを取得するかどうかの定義
#
ENABLE_TRACE = 

#
#  開発ツール（コンパイラ等）のディレクトリの定義
#
DEVTOOLDIR = 

#
#  ユーティリティプログラムの名称
#
CFG = ruby -Eutf-8 $(SRCDIR)/cfg/cfg.rb
TECSGEN = ruby -Eutf-8 $(SRCDIR)/tecsgen/tecsgen.rb

#
#  オブジェクトファイル名の定義
#
OBJNAME = app4_aircon
ifdef OBJEXT
	OBJFILE = $(OBJNAME).$(OBJEXT)
	CFG1_OUT = cfg1_out.$(OBJEXT)
else
	OBJFILE = $(OBJNAME)
	CFG1_OUT = cfg1_out
endif

#
#  依存関係ファイルを置くディレクトリの定義
#
DEPDIR = deps

#
#  ターゲット依存部のディレクトリの定義
#
TARGETDIR = $(SRCDIR)/target/$(TARGET)

#
#  ターゲット依存の定義のインクルード
#
include $(TARGETDIR)/Makefile.target

#
#  TECS生成ファイルのディレクトリの定義
#
TECSGENDIR = ./gen
ifndef OMIT_TECS
	TECSGEN_TIMESTAMP = $(TECSGENDIR)/tecsgen.timestamp
	INIT_TECS_COBJ = init_tecs.o
endif

#
#  TECSが生成する定義のインクルード
#
ifndef OMIT_TECS
	GEN_DIR = $(TECSGENDIR)
	-include $(TECSGENDIR)/Makefile.tecsgen
endif

TINETDIR = tinet

#
#  mbedサービスの定義
#

include $(SRCDIR)/mbed/Makefile.mbed

#
#  gdicサービスの定義
#

include $(SRCDIR)/gdic/adafruit_st7735/Makefile.config

#
#  共通コンパイルオプションの定義
#
COPTS := -g -std=gnu99 -ffunction-sections -fdata-sections $(COPTS)
ifndef OMIT_WARNING_ALL
	COPTS := -Wall $(COPTS)
endif
ifndef OMIT_OPTIMIZATION
	COPTS := -Og $(COPTS)
endif
ifdef OMIT_TECS
	CDEFS := -DTOPPERS_OMIT_TECS $(CDEFS)
endif
CDEFS := $(CDEFS) -DDHCP4_CLI_CFG -DUSE_PING -DUSE_RESOLVER -DUSE_NETAPP_SUBR -DNOUSE_MPF_NET_BUF -DECHONET_USE_MALLOC -DRamDisk=_binary_______ntshell_src_rom_fs_bin_start
INCLUDES := -I. -I$(SRCDIR)/include -I$(SRCDIR) \
	-I$(SRCDIR)/../btstack/include \
	-I$(SRCDIR)/../btstack/src \
	-I$(SRCDIR)/../btstack/chipset \
	-I$(SRCDIR)/../btstack/platform/embedded \
	-I$(SRCDIR)/../usbhost/src \
	$(INCLUDES)
LDFLAGS := $(LDFLAGS) -L.
LIBS := $(LIBS) $(CXXLIBS)
CFLAGS = $(COPTS) $(CDEFS) $(INCLUDES)

APPLDIRS := $(APPLDIRS) ../../ntshell/echonet
APPL_COBJS := echonet.o echonet_agent.o echonet_dbg.o echonet_fbs.o echonet_task.o echonet_udp_task.o echonet_udp6_task.o fbs_string.o
APPLDIRS := $(APPLDIRS) $(SRCDIR)/$(TINETDIR)/netapp
APPL_COBJS := $(APPL_COBJS) ping.o ping6.o resolver.o dhcp4_cli.o netapp_subr.o ntp_cli.o net_misc.o
APPLDIRS := $(APPLDIRS) ../../ntshell/fatfs ../../ntshell/ntshell ../../ntshell/ntshell/core ../../ntshell/ntshell/util ../../ntshell/src
APPL_COBJS := $(APPL_COBJS) netcmd.o fdtable.o stdio_stub.o io_stub.o socket_stub.o ffarch.o diskio.o ff.o sdfs.o ccsbcs.o ntshell.o text_editor.o text_history.o usrcmd.o vtrecv.o vtsend.o ntlibc.o ntstdio.o ntopt.o syscall.o
APPLDIRS := $(APPLDIRS) ../../ntshell/lcd
APPL_COBJS := $(APPL_COBJS) draw_font.o shnm12_font.o
APPL_CFLAGS := $(APPL_CFLAGS) -DSHNM12_FONT

#
#  アプリケーションプログラムに関する定義
#
APPLNAME = app4_aircon
APPLDIRS := $(APPLDIRS) ../src
APPL_CFG = main.cfg
APPL_CDL = main.cdl

APPL_DIRS := $(APPLDIRS) $(SRCDIR)/library
APPL_ASMOBJS :=
ifdef USE_CXX
	APPL_CXXOBJS := main.o ntshell_main.o echonet_main.o
	APPL_COBJS := $(APPL_COBJS)
else
	APPL_COBJS := $(APPL_COBJS) main.o ntshell_main.o echonet_main.o
endif
APPL_COBJS := $(APPL_COBJS) log_output.o vasyslog.o t_perror.o strerror.o mbed_stub.o
APPL_BINOBJS := rom_fs.o
APPL_CFLAGS := $(APPL_CFLAGS) -nostdinc
ifdef APPLDIRS
	INCLUDES := $(INCLUDES) $(foreach dir,$(APPLDIRS),-I$(dir))
endif

ifdef TINETDIR
	#
	#  ネットワークサービスの定義
	#
	NO_USE_TINET_LIBRARY = true

	#  ネットワークインタフェースの選択、何れか一つ選択する。
	NET_IF = ether

	#  イーサネット・ディバイスドライバの選択
	NET_DEV = if_mbed

	#  ネットワーク層の選択
	#SUPPORT_INET6 = true
	SUPPORT_INET4 = true

	#  API に組込む機能の選択
	#API_CFG_IP4MAPPED_ADDR = true

	#  トランスポート層の選択
	SUPPORT_TCP = true
	SUPPORT_UDP = true

	# IGMPを有効に設定
	SUPPORT_IGMP = true

	#
	#  ネットワークサービスの Makefile のインクルード
	#
	include $(SRCDIR)/$(TINETDIR)/Makefile.tinet
endif

#
#  システムサービスに関する定義
#
SYSSVC_DIRS := $(TECSGENDIR) $(SRCDIR)/tecs_kernel \
				$(SYSSVC_DIRS) $(SRCDIR)/syssvc
SYSSVC_ASMOBJS := $(SYSSVC_ASMOBJS)
SYSSVC_COBJS := $(INIT_TECS_COBJ) $(TECS_COBJS) $(SYSSVC_COBJS) \
				 $(CXXRTS)
SYSSVC_CFLAGS := $(SYSSVC_CFLAGS)
INCLUDES := $(INCLUDES) -I$(TECSGENDIR) -I$(SRCDIR)/tecs_kernel -I../../musl-1.1.18/include

#
#  ターゲットファイル
#
.PHONY: all
ifndef OMIT_TECS
all: tecs | $(DEPDIR)
#	@$(MAKE) check
	@$(MAKE) check $(OBJNAME).bin
#	@$(MAKE) check $(OBJNAME).srec
else
#all: check
all: check $(OBJNAME).bin
#all: check $(OBJNAME).srec
endif

##### 以下は編集しないこと #####

#
#  コンフィギュレータに関する定義
#
ifndef TINETDIR
  CFG_TRB := -T $(TARGETDIR)/target_kernel.trb
  CFG_TABS := --api-table $(SRCDIR)/kernel/kernel_api.def \
			--symval-table $(SRCDIR)/kernel/kernel_sym.def $(CFG_TABS)
else
  CFG_TRB := -T $(TINET_ROOT)/tinet.trb:tcpip -T ../../ntshell/echonet/echonet.trb:echonet -T $(TARGETDIR)/target_kernel.trb:kernel
  CFG_TABS := --api-table $(TINET_ROOT)/tcpip_api.def:tcpip \
			--api-table ../../ntshell/echonet/echonet_api.def:echonet \
			--api-table $(SRCDIR)/kernel/kernel_api.def:kernel \
			--symval-table $(TINET_ROOT)/tcpip_sym.def \
			--symval-table ../../ntshell/echonet/echonet_sym.def \
			--symval-table $(SRCDIR)/kernel/kernel_sym.def $(CFG_TABS)
endif
CFG_ASMOBJS := $(CFG_ASMOBJS)
CFG_COBJS := kernel_cfg.o echonet_cfg.o $(CFG_COBJS)
CFG_OBJS := $(CFG_ASMOBJS) $(CFG_COBJS)
CFG2_OUT_SRCS := kernel_cfg.h kernel_cfg.c echonet_cfg.h echonet_cfg.c $(CFG2_OUT_SRCS)
CFG_CFLAGS := -DTOPPERS_CB_TYPE_ONLY $(CFG_CFLAGS)

#
#  カーネルに関する定義
#
#  KERNEL_ASMOBJS: カーネルライブラリに含める，ソースがアセンブリ言語の
#				   オブジェクトファイル．
#  KERNEL_COBJS: カーネルのライブラリに含める，ソースがC言語で，ソース
#				 ファイルと1対1に対応するオブジェクトファイル．
#  KERNEL_LCSRCS: カーネルのライブラリに含めるC言語のソースファイルで，
#				  1つのソースファイルから複数のオブジェクトファイルを生
#				  成するもの．
#  KERNEL_LCOBJS: 上のソースファイルから生成されるオブジェクトファイル．
#
KERNEL_DIRS := $(KERNEL_DIRS) $(SRCDIR)/kernel
KERNEL_ASMOBJS := $(KERNEL_ASMOBJS)
KERNEL_COBJS := $(KERNEL_COBJS)
KERNEL_CFLAGS := $(KERNEL_CFLAGS) -I$(SRCDIR)/kernel

#
#  カーネルのファイル構成の定義
#
include $(SRCDIR)/kernel/Makefile.kernel
ifdef KERNEL_FUNCOBJS
	KERNEL_LCSRCS := $(KERNEL_FCSRCS)
	KERNEL_LCOBJS := $(foreach file,$(KERNEL_FCSRCS),$($(file:.c=)))
else
	KERNEL_CFLAGS := -DALLFUNC $(KERNEL_CFLAGS)
	KERNEL_COBJS := $(KERNEL_COBJS) \
					$(foreach file,$(KERNEL_FCSRCS),$(file:.c=.o))
endif
ifdef OMIT_OFFSET_H
	OFFSET_H =
else
	OFFSET_H = offset.h
endif
ifndef TARGET_OFFSET_TRB
	TARGET_OFFSET_TRB := $(TARGETDIR)/target_offset.trb
endif
ifndef TARGET_KERNEL_TRB
	TARGET_KERNEL_TRB := $(TARGETDIR)/target_kernel.trb
endif
ifndef TARGET_CHECK_TRB
	TARGET_CHECK_TRB := $(TARGETDIR)/target_check.trb
endif
ifndef TARGET_KERNEL_CFG
	TARGET_KERNEL_CFG := $(TARGETDIR)/target_kernel.cfg
endif
ifndef TARGET_TCPIP_TRB
	TARGET_TCPIP_TRB := $(SRCDIR)/$(TINETDIR)/tinet.trb
endif

#
#  ソースファイルのあるディレクトリに関する定義
#
vpath %.c $(KERNEL_DIRS) $(SYSSVC_DIRS) $(APPL_DIRS)
vpath %.S $(KERNEL_DIRS) $(SYSSVC_DIRS) $(APPL_DIRS)
vpath %.cfg $(APPL_DIRS)
vpath %.cdl $(APPL_DIRS)
vpath %.bin $(APPL_DIRS)

#
#  コンパイルのための変数の定義
#
KERNEL_LIB_OBJS = $(KERNEL_ASMOBJS) $(KERNEL_COBJS) $(KERNEL_LCOBJS)
SYSSVC_OBJS = $(SYSSVC_ASMOBJS) $(SYSSVC_COBJS) $(HIDDEN_OBJS)
APPL_OBJS = $(APPL_ASMOBJS) $(APPL_COBJS) $(APPL_CXXOBJS) $(APPL_BINOBJS)
ALL_OBJS = $(START_OBJS) $(APPL_OBJS) $(SYSSVC_OBJS) $(CFG_OBJS) \
											$(END_OBJS) $(HIDDEN_OBJS)
ALL_LIBS = -lkernel $(LIBS)
ifdef KERNEL_LIB
	LIBS_DEP = $(KERNEL_LIB)/libkernel.a $(filter %.a,$(LIBS))
	OBJ_LDFLAGS := $(OBJ_LDFLAGS) -L$(KERNEL_LIB)
	REALCLEAN_FILES := libkernel.a $(REALCLEAN_FILES)
else
	LIBS_DEP = libkernel.a $(filter %.a,$(LIBS))
	OBJ_LDFLAGS := $(OBJ_LDFLAGS) -L.
endif

ifdef TEXT_START_ADDRESS
	LDFLAGS := $(LDFLAGS) -Wl,-Ttext,$(TEXT_START_ADDRESS)
endif
ifdef DATA_START_ADDRESS
	LDFLAGS := $(LDFLAGS) -Wl,-Tdata,$(DATA_START_ADDRESS)
endif
ifdef LDSCRIPT
	LDFLAGS := $(LDFLAGS) -T $(LDSCRIPT)
endif

#
#  tecsgenからCプリプロセッサを呼び出す際のオプションの定義
#
TECS_CPP = $(CC) $(CDEFS) $(INCLUDES) $(SYSSVC_CFLAGS) -D TECSGEN -E

#
#  tecsgenの呼出し
#
.PHONY: tecs
tecs $(TECSGEN_SRCS) $(TECS_HEADERS): $(TECSGEN_TIMESTAMP) ;
$(TECSGEN_TIMESTAMP): $(APPL_CDL) $(TECS_IMPORTS)
	$(TECSGEN) $< -R $(INCLUDES) --cpp "$(subst ", \", $(TECS_CPP))" -g $(TECSGENDIR)

#
#  カーネルのコンフィギュレーションファイルの生成
#
cfg1_out.c cfg1_out.db: cfg1_out.timestamp ;
cfg1_out.timestamp: $(APPL_CFG) $(TECSGEN_TIMESTAMP)
	$(CFG) --pass 1 --kernel asp $(INCLUDES) $(CFG_TABS) \
						-M $(DEPDIR)/cfg1_out_c.d $(TARGET_KERNEL_CFG) $<

$(CFG1_OUT): $(START_OBJS) cfg1_out.o $(CFG_DMY) $(END_OBJS) $(HIDDEN_OBJS)
	$(LINK) $(CFLAGS) $(LDFLAGS) $(CFG1_OUT_LDFLAGS) -o $(CFG1_OUT) \
						$(START_OBJS) cfg1_out.o $(CFG_DMY) $(END_OBJS)

cfg1_out.syms: $(CFG1_OUT)
	$(NM) -n $(CFG1_OUT) > cfg1_out.syms

cfg1_out.srec: $(CFG1_OUT)
	$(OBJCOPY) -O srec -S $(CFG1_OUT) cfg1_out.srec

$(CFG2_OUT_SRCS) cfg2_out.db: kernel_cfg.timestamp ;
kernel_cfg.timestamp: cfg1_out.db cfg1_out.syms cfg1_out.srec
	$(CFG) --pass 2 --kernel asp $(INCLUDES) $(CFG_TRB)

#
#  オフセットファイル（offset.h）の生成規則
#
$(OFFSET_H): offset.timestamp ;
offset.timestamp: cfg1_out.db cfg1_out.syms cfg1_out.srec
	$(CFG) --pass 2 -O --kernel asp $(INCLUDES) -T $(TARGET_OFFSET_TRB) \
				--rom-symbol cfg1_out.syms --rom-image cfg1_out.srec

#
#  カーネルライブラリファイルの生成
#
libkernel.a: $(OFFSET_H) $(KERNEL_LIB_OBJS)
	rm -f libkernel.a
	$(AR) -rcs libkernel.a $(KERNEL_LIB_OBJS)
	$(RANLIB) libkernel.a

#
#  並列makeのための依存関係の定義
#
$(APPL_OBJS) $(filter-out $(CFG_DMY), $(SYSSVC_OBJS)): | kernel_cfg.timestamp
$(APPL_ASMOBJS) $(filter-out $(CFG_DMY), $(SYSSVC_ASMOBJS)) $(KERNEL_ASMOBJS) $(CFG_ASMOBJS): \
														| offset.timestamp

#
#  特別な依存関係の定義
#
tBannerMain.o: $(filter-out tBannerMain.o,$(ALL_OBJS)) $(LIBS_DEP)

#
#  全体のリンク
#
$(OBJFILE): $(ALL_OBJS) $(LIBS_DEP)
	$(LINK) $(CFLAGS) $(LDFLAGS) $(OBJ_LDFLAGS) -o $(OBJFILE) -Wl,-Map=$(OBJNAME).map,--cref \
			$(START_OBJS) $(APPL_OBJS) $(SYSSVC_OBJS) $(CFG_OBJS) \
			-Wl,--start-group $(ALL_LIBS) -Wl,--end-group $(END_OBJS)

#
#  依存関係フォルダの作成
#
$(DEPDIR):
	mkdir $@

#
#  シンボルファイルの生成
#
$(OBJNAME).syms: $(OBJFILE)
	$(NM) -n $(OBJFILE) > $(OBJNAME).syms

#
#  バイナリファイルの生成
#
$(OBJNAME).bin: $(OBJFILE)
	$(OBJCOPY) -O binary -S $(OBJFILE) $(OBJNAME).bin
	$(OBJDUMP) -h $(OBJFILE)
	$(SIZE) $(OBJFILE)

#
#  Sレコードファイルの生成
#
$(OBJNAME).srec: $(OBJFILE)
	$(OBJCOPY) -O srec -S $(OBJFILE) $(OBJNAME).srec

#
#  エラーチェック処理
#
.PHONY: check
check: check.timestamp ;
check.timestamp: cfg2_out.db $(OBJNAME).syms $(OBJNAME).srec
	$(CFG) --pass 3 --kernel asp -O $(INCLUDES) -T $(TARGET_CHECK_TRB) \
				--rom-symbol $(OBJNAME).syms --rom-image $(OBJNAME).srec
	@echo "configuration check passed"

#
#  コンパイル結果の消去
#
.PHONY: clean
clean:
	rm -f \#* *~ *.o $(DEPDIR)/*.d $(CLEAN_FILES) check.timestamp
	rm -f $(OBJFILE) $(OBJNAME).syms $(OBJNAME).srec $(OBJNAME).bin
	rm -f kernel_cfg.timestamp $(CFG2_OUT_SRCS) cfg2_out.db
	rm -f offset.timestamp $(OFFSET_H)
	rm -f cfg1_out.syms cfg1_out.srec $(CFG1_OUT)
	rm -f cfg1_out.timestamp cfg1_out.c cfg1_out.db
	rm -rf $(TECSGENDIR)
ifndef KERNEL_LIB
	rm -f libkernel.a
endif

.PHONY: cleankernel
cleankernel:
	rm -f $(OFFSET_H) $(KERNEL_LIB_OBJS)
	rm -f $(KERNEL_LIB_OBJS:%.o=$(DEPDIR)/%.d)

.PHONY: realclean
realclean: clean
	rm -f $(REALCLEAN_FILES)

#
#  コンフィギュレータが生成したファイルのコンパイルルールの定義
#
#  コンフィギュレータが生成したファイルは，共通のコンパイルオプション
#  のみを付けてコンパイルする．
#
ALL_CFG_COBJS = $(CFG_COBJS) cfg1_out.o
ALL_CFG_ASMOBJS = $(CFG_ASMOBJS)

$(ALL_CFG_COBJS): %.o: %.c
	$(CC) -c -MD -MP -MF $(DEPDIR)/$*.d $(CFLAGS) $(CFG_CFLAGS) $<

$(ALL_CFG_COBJS:.o=.s): %.s: %.c
	$(CC) -S $(CFLAGS) $(CFG_CFLAGS) $<

$(ALL_CFG_ASMOBJS): %.o: %.S
	$(CC) -c -MD -MP -MF $(DEPDIR)/$*.d $(CFLAGS) $(CFG_CFLAGS) $<

#
#  依存関係ファイルのインクルード
#
-include $(DEPDIR)/*.d

#
#  開発ツールのコマンド名の定義
#
ifeq ($(TOOL),gcc)
	#
	#  GNU開発環境用
	#
	ifdef GCC_TARGET
		GCC_TARGET_PREFIX = $(GCC_TARGET)-
	else
		GCC_TARGET_PREFIX =
	endif
	CC := $(GCC_TARGET_PREFIX)gcc
	CXX := $(GCC_TARGET_PREFIX)g++
	AS := $(GCC_TARGET_PREFIX)as
	LD := $(GCC_TARGET_PREFIX)ld
	AR := $(GCC_TARGET_PREFIX)ar
	NM := $(GCC_TARGET_PREFIX)nm
	RANLIB := $(GCC_TARGET_PREFIX)ranlib
	OBJCOPY := $(GCC_TARGET_PREFIX)objcopy
	OBJDUMP := $(GCC_TARGET_PREFIX)objdump
	SIZE := $(GCC_TARGET_PREFIX)size
endif

ifdef DEVTOOLDIR
	CC := $(DEVTOOLDIR)/$(CC)
	CXX := $(DEVTOOLDIR)/$(CXX)
	AS := $(DEVTOOLDIR)/$(AS)
	LD := $(DEVTOOLDIR)/$(LD)
	AR := $(DEVTOOLDIR)/$(AR)
	NM := $(DEVTOOLDIR)/$(NM)
	RANLIB := $(DEVTOOLDIR)/$(RANLIB)
	OBJCOPY := $(DEVTOOLDIR)/$(OBJCOPY)
	OBJDUMP := $(DEVTOOLDIR)/$(OBJDUMP)
endif

ifdef USE_CXX
	LINK = $(CXX)
else
	LINK = $(CC)
endif

#
#  コンパイルルールの定義
#
$(KERNEL_COBJS): %.o: %.c
	$(CC) -c -MD -MP -MF $(DEPDIR)/$*.d $(CFLAGS) $(KERNEL_CFLAGS) $<

$(KERNEL_COBJS:.o=.s): %.s: %.c
	$(CC) -S $(CFLAGS) $(KERNEL_CFLAGS) $<

$(KERNEL_LCOBJS): %.o:
	$(CC) -DTOPPERS_$(*F) -o $@ -c -MD -MP -MF $(DEPDIR)/$*.d \
									$(CFLAGS) $(KERNEL_CFLAGS) $<

$(KERNEL_LCOBJS:.o=.s): %.s:
	$(CC) -DTOPPERS_$(*F) -o $@ -S $(CFLAGS) $(KERNEL_CFLAGS) $<

$(KERNEL_ASMOBJS): %.o: %.S
	$(CC) -c -MD -MP -MF $(DEPDIR)/$*.d $(CFLAGS) $(KERNEL_CFLAGS) $<

$(SYSSVC_COBJS): %.o: %.c
	$(CC) -c -MD -MP -MF $(DEPDIR)/$*.d $(CFLAGS) $(SYSSVC_CFLAGS) $<

$(SYSSVC_COBJS:.o=.s): %.s: %.c
	$(CC) -S $(CFLAGS) $(SYSSVC_CFLAGS) $<

$(SYSSVC_ASMOBJS): %.o: %.S
	$(CC) -c -MD -MP -MF $(DEPDIR)/$*.d $(CFLAGS) $(SYSSVC_CFLAGS) $<

$(APPL_COBJS): %.o: %.c
	$(CC) -c -MD -MP -MF $(DEPDIR)/$*.d $(CFLAGS) $(APPL_CFLAGS) $<

$(APPL_COBJS:.o=.s): %.s: %.c
	$(CC) -S $(CFLAGS) $(APPL_CFLAGS) $<

$(APPL_CXXOBJS): %.o: %.cpp
	$(CXX) -c -MD -MP -MF $(DEPDIR)/$*.d $(CFLAGS) $(APPL_CFLAGS) $<

$(APPL_CXXOBJS:.o=.s): %.s: %.cpp
	$(CXX) -S $(CFLAGS) $(APPL_CFLAGS) $<

$(APPL_ASMOBJS): %.o: %.S
	$(CC) -c -MD -MP -MF $(DEPDIR)/$*.d $(CFLAGS) $(APPL_CFLAGS) $<

$(APPL_BINOBJS): %.o: %.bin
	$(OBJCOPY) -B arm -I binary -O elf32-littlearm --rename-section .data=.rodata $< $*.o

#
#  デフォルトコンパイルルールを上書き
#
%.o: %.c
	@echo "*** Default compile rules should not be used."
	$(CC) -c -MD -MP -MF $(DEPDIR)/$*.d $(CFLAGS) $<

%.s: %.c
	@echo "*** Default compile rules should not be used."
	$(CC) -S $(CFLAGS) $<

%.o: %.cpp
	@echo "*** Default compile rules should not be used."
	$(CXX) -c -MD -MP -MF $(DEPDIR)/$*.d $(CFLAGS) $<

%.s: %.cpp
	@echo "*** Default compile rules should not be used."
	$(CXX) -S $(CFLAGS) $<

%.o: %.S
	@echo "*** Default compile rules should not be used."
	$(CC) -c -MD -MP -MF $(DEPDIR)/$*.d $(CFLAGS) $<
