################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/slist_wc.c \
../src/tool_binmode.c \
../src/tool_bname.c \
../src/tool_cb_dbg.c \
../src/tool_cb_hdr.c \
../src/tool_cb_prg.c \
../src/tool_cb_rea.c \
../src/tool_cb_see.c \
../src/tool_cb_wrt.c \
../src/tool_cfgable.c \
../src/tool_convert.c \
../src/tool_dirhie.c \
../src/tool_doswin.c \
../src/tool_easysrc.c \
../src/tool_formparse.c \
../src/tool_getparam.c \
../src/tool_getpass.c \
../src/tool_help.c \
../src/tool_helpers.c \
../src/tool_homedir.c \
../src/tool_hugehelp.c \
../src/tool_libinfo.c \
../src/tool_main.c \
../src/tool_metalink.c \
../src/tool_msgs.c \
../src/tool_operate.c \
../src/tool_operhlp.c \
../src/tool_panykey.c \
../src/tool_paramhlp.c \
../src/tool_parsecfg.c \
../src/tool_setopt.c \
../src/tool_sleep.c \
../src/tool_strdup.c \
../src/tool_urlglob.c \
../src/tool_util.c \
../src/tool_vms.c \
../src/tool_writeout.c \
../src/tool_xattr.c 

C_DEPS += \
./src/slist_wc.d \
./src/tool_binmode.d \
./src/tool_bname.d \
./src/tool_cb_dbg.d \
./src/tool_cb_hdr.d \
./src/tool_cb_prg.d \
./src/tool_cb_rea.d \
./src/tool_cb_see.d \
./src/tool_cb_wrt.d \
./src/tool_cfgable.d \
./src/tool_convert.d \
./src/tool_dirhie.d \
./src/tool_doswin.d \
./src/tool_easysrc.d \
./src/tool_formparse.d \
./src/tool_getparam.d \
./src/tool_getpass.d \
./src/tool_help.d \
./src/tool_helpers.d \
./src/tool_homedir.d \
./src/tool_hugehelp.d \
./src/tool_libinfo.d \
./src/tool_main.d \
./src/tool_metalink.d \
./src/tool_msgs.d \
./src/tool_operate.d \
./src/tool_operhlp.d \
./src/tool_panykey.d \
./src/tool_paramhlp.d \
./src/tool_parsecfg.d \
./src/tool_setopt.d \
./src/tool_sleep.d \
./src/tool_strdup.d \
./src/tool_urlglob.d \
./src/tool_util.d \
./src/tool_vms.d \
./src/tool_writeout.d \
./src/tool_xattr.d 

OBJS += \
./src/slist_wc.o \
./src/tool_binmode.o \
./src/tool_bname.o \
./src/tool_cb_dbg.o \
./src/tool_cb_hdr.o \
./src/tool_cb_prg.o \
./src/tool_cb_rea.o \
./src/tool_cb_see.o \
./src/tool_cb_wrt.o \
./src/tool_cfgable.o \
./src/tool_convert.o \
./src/tool_dirhie.o \
./src/tool_doswin.o \
./src/tool_easysrc.o \
./src/tool_formparse.o \
./src/tool_getparam.o \
./src/tool_getpass.o \
./src/tool_help.o \
./src/tool_helpers.o \
./src/tool_homedir.o \
./src/tool_hugehelp.o \
./src/tool_libinfo.o \
./src/tool_main.o \
./src/tool_metalink.o \
./src/tool_msgs.o \
./src/tool_operate.o \
./src/tool_operhlp.o \
./src/tool_panykey.o \
./src/tool_paramhlp.o \
./src/tool_parsecfg.o \
./src/tool_setopt.o \
./src/tool_sleep.o \
./src/tool_strdup.o \
./src/tool_urlglob.o \
./src/tool_util.o \
./src/tool_vms.o \
./src/tool_writeout.o \
./src/tool_xattr.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -DHAVE_CONFIG_H -DBUILDING_LIBCURL -DWOLFSSL_USER_SETTINGS -I"C:\trunk_base\trunk\curl-7.57.0\include" -I"C:\trunk_base\trunk\curl-7.57.0\lib" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

