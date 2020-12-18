################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/legacy/cuserid.c \
../src/legacy/daemon.c \
../src/legacy/err.c \
../src/legacy/euidaccess.c \
../src/legacy/ftw.c \
../src/legacy/futimes.c \
../src/legacy/getdtablesize.c \
../src/legacy/getloadavg.c \
../src/legacy/getpagesize.c \
../src/legacy/getpass.c \
../src/legacy/getusershell.c \
../src/legacy/isastream.c \
../src/legacy/lutimes.c \
../src/legacy/ulimit.c \
../src/legacy/utmpx.c \
../src/legacy/valloc.c 

C_DEPS += \
./src/legacy/cuserid.d \
./src/legacy/daemon.d \
./src/legacy/err.d \
./src/legacy/euidaccess.d \
./src/legacy/ftw.d \
./src/legacy/futimes.d \
./src/legacy/getdtablesize.d \
./src/legacy/getloadavg.d \
./src/legacy/getpagesize.d \
./src/legacy/getpass.d \
./src/legacy/getusershell.d \
./src/legacy/isastream.d \
./src/legacy/lutimes.d \
./src/legacy/ulimit.d \
./src/legacy/utmpx.d \
./src/legacy/valloc.d 

OBJS += \
./src/legacy/cuserid.o \
./src/legacy/daemon.o \
./src/legacy/err.o \
./src/legacy/euidaccess.o \
./src/legacy/ftw.o \
./src/legacy/futimes.o \
./src/legacy/getdtablesize.o \
./src/legacy/getloadavg.o \
./src/legacy/getpagesize.o \
./src/legacy/getpass.o \
./src/legacy/getusershell.o \
./src/legacy/isastream.o \
./src/legacy/lutimes.o \
./src/legacy/ulimit.o \
./src/legacy/utmpx.o \
./src/legacy/valloc.o 


# Each subdirectory must supply rules for building sources it contributes
src/legacy/%.o: ../src/legacy/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

