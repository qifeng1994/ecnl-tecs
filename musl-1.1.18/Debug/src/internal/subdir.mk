################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/internal/floatscan.c \
../src/internal/intscan.c \
../src/internal/libc.c \
../src/internal/procfdname.c \
../src/internal/shgetc.c \
../src/internal/syscall.c \
../src/internal/syscall_ret.c \
../src/internal/vdso.c \
../src/internal/version.c 

C_DEPS += \
./src/internal/floatscan.d \
./src/internal/intscan.d \
./src/internal/libc.d \
./src/internal/procfdname.d \
./src/internal/shgetc.d \
./src/internal/syscall.d \
./src/internal/syscall_ret.d \
./src/internal/vdso.d \
./src/internal/version.d 

OBJS += \
./src/internal/floatscan.o \
./src/internal/intscan.o \
./src/internal/libc.o \
./src/internal/procfdname.o \
./src/internal/shgetc.o \
./src/internal/syscall.o \
./src/internal/syscall_ret.o \
./src/internal/vdso.o \
./src/internal/version.o 


# Each subdirectory must supply rules for building sources it contributes
src/internal/%.o: ../src/internal/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

