################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/sched/affinity.c \
../src/sched/sched_cpucount.c \
../src/sched/sched_get_priority_max.c \
../src/sched/sched_getcpu.c \
../src/sched/sched_getparam.c \
../src/sched/sched_getscheduler.c \
../src/sched/sched_rr_get_interval.c \
../src/sched/sched_setparam.c \
../src/sched/sched_setscheduler.c \
../src/sched/sched_yield.c 

C_DEPS += \
./src/sched/affinity.d \
./src/sched/sched_cpucount.d \
./src/sched/sched_get_priority_max.d \
./src/sched/sched_getcpu.d \
./src/sched/sched_getparam.d \
./src/sched/sched_getscheduler.d \
./src/sched/sched_rr_get_interval.d \
./src/sched/sched_setparam.d \
./src/sched/sched_setscheduler.d \
./src/sched/sched_yield.d 

OBJS += \
./src/sched/affinity.o \
./src/sched/sched_cpucount.o \
./src/sched/sched_get_priority_max.o \
./src/sched/sched_getcpu.o \
./src/sched/sched_getparam.o \
./src/sched/sched_getscheduler.o \
./src/sched/sched_rr_get_interval.o \
./src/sched/sched_setparam.o \
./src/sched/sched_setscheduler.o \
./src/sched/sched_yield.o 


# Each subdirectory must supply rules for building sources it contributes
src/sched/%.o: ../src/sched/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

