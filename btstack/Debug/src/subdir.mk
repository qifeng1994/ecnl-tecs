################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/bnep.c \
../src/btstack_memory.c \
../src/hci.c \
../src/hci_cmds.c \
../src/hci_dump.c \
../src/l2cap.c \
../src/l2cap_signaling.c \
../src/linked_list.c \
../src/memory_pool.c \
../src/pan.c \
../src/remote_device_db_memory.c \
../src/rfcomm.c \
../src/run_loop.c \
../src/run_loop_embedded.c \
../src/sdp.c \
../src/sdp_client.c \
../src/sdp_parser.c \
../src/sdp_query_rfcomm.c \
../src/sdp_query_util.c \
../src/sdp_util.c \
../src/utils.c 

C_DEPS += \
./src/bnep.d \
./src/btstack_memory.d \
./src/hci.d \
./src/hci_cmds.d \
./src/hci_dump.d \
./src/l2cap.d \
./src/l2cap_signaling.d \
./src/linked_list.d \
./src/memory_pool.d \
./src/pan.d \
./src/remote_device_db_memory.d \
./src/rfcomm.d \
./src/run_loop.d \
./src/run_loop_embedded.d \
./src/sdp.d \
./src/sdp_client.d \
./src/sdp_parser.d \
./src/sdp_query_rfcomm.d \
./src/sdp_query_util.d \
./src/sdp_util.d \
./src/utils.d 

OBJS += \
./src/bnep.o \
./src/btstack_memory.o \
./src/hci.o \
./src/hci_cmds.o \
./src/hci_dump.o \
./src/l2cap.o \
./src/l2cap_signaling.o \
./src/linked_list.o \
./src/memory_pool.o \
./src/pan.o \
./src/remote_device_db_memory.o \
./src/rfcomm.o \
./src/run_loop.o \
./src/run_loop_embedded.o \
./src/sdp.o \
./src/sdp_client.o \
./src/sdp_parser.o \
./src/sdp_query_rfcomm.o \
./src/sdp_query_util.o \
./src/sdp_util.o \
./src/utils.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -D__FPU_PRESENT -D__CORTEX_A9 -D_DEFAULT_SOURCE -I"C:\trunk_base\trunk\musl-1.1.18\include" -I"C:\trunk_base\trunk\btstack\include" -I"C:\trunk_base\trunk\btstack\src" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

