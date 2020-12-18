################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/env/__environ.c \
../src/env/__init_tls.c \
../src/env/__libc_start_main.c \
../src/env/__reset_tls.c \
../src/env/__stack_chk_fail.c \
../src/env/clearenv.c \
../src/env/getenv.c \
../src/env/putenv.c \
../src/env/setenv.c \
../src/env/unsetenv.c 

C_DEPS += \
./src/env/__environ.d \
./src/env/__init_tls.d \
./src/env/__libc_start_main.d \
./src/env/__reset_tls.d \
./src/env/__stack_chk_fail.d \
./src/env/clearenv.d \
./src/env/getenv.d \
./src/env/putenv.d \
./src/env/setenv.d \
./src/env/unsetenv.d 

OBJS += \
./src/env/__environ.o \
./src/env/__init_tls.o \
./src/env/__libc_start_main.o \
./src/env/__reset_tls.o \
./src/env/__stack_chk_fail.o \
./src/env/clearenv.o \
./src/env/getenv.o \
./src/env/putenv.o \
./src/env/setenv.o \
./src/env/unsetenv.o 


# Each subdirectory must supply rules for building sources it contributes
src/env/%.o: ../src/env/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

