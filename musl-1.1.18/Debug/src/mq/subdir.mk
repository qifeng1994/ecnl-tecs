################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/mq/mq_close.c \
../src/mq/mq_getattr.c \
../src/mq/mq_notify.c \
../src/mq/mq_open.c \
../src/mq/mq_receive.c \
../src/mq/mq_send.c \
../src/mq/mq_setattr.c \
../src/mq/mq_timedreceive.c \
../src/mq/mq_timedsend.c \
../src/mq/mq_unlink.c 

C_DEPS += \
./src/mq/mq_close.d \
./src/mq/mq_getattr.d \
./src/mq/mq_notify.d \
./src/mq/mq_open.d \
./src/mq/mq_receive.d \
./src/mq/mq_send.d \
./src/mq/mq_setattr.d \
./src/mq/mq_timedreceive.d \
./src/mq/mq_timedsend.d \
./src/mq/mq_unlink.d 

OBJS += \
./src/mq/mq_close.o \
./src/mq/mq_getattr.o \
./src/mq/mq_notify.o \
./src/mq/mq_open.o \
./src/mq/mq_receive.o \
./src/mq/mq_send.o \
./src/mq/mq_setattr.o \
./src/mq/mq_timedreceive.o \
./src/mq/mq_timedsend.o \
./src/mq/mq_unlink.o 


# Each subdirectory must supply rules for building sources it contributes
src/mq/%.o: ../src/mq/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

