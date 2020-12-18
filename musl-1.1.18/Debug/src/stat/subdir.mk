################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/stat/__xstat.c \
../src/stat/chmod.c \
../src/stat/fchmod.c \
../src/stat/fchmodat.c \
../src/stat/fstat.c \
../src/stat/fstatat.c \
../src/stat/futimens.c \
../src/stat/futimesat.c \
../src/stat/lchmod.c \
../src/stat/lstat.c \
../src/stat/mkdir.c \
../src/stat/mkdirat.c \
../src/stat/mkfifo.c \
../src/stat/mkfifoat.c \
../src/stat/mknod.c \
../src/stat/mknodat.c \
../src/stat/stat.c \
../src/stat/statvfs.c \
../src/stat/umask.c \
../src/stat/utimensat.c 

C_DEPS += \
./src/stat/__xstat.d \
./src/stat/chmod.d \
./src/stat/fchmod.d \
./src/stat/fchmodat.d \
./src/stat/fstat.d \
./src/stat/fstatat.d \
./src/stat/futimens.d \
./src/stat/futimesat.d \
./src/stat/lchmod.d \
./src/stat/lstat.d \
./src/stat/mkdir.d \
./src/stat/mkdirat.d \
./src/stat/mkfifo.d \
./src/stat/mkfifoat.d \
./src/stat/mknod.d \
./src/stat/mknodat.d \
./src/stat/stat.d \
./src/stat/statvfs.d \
./src/stat/umask.d \
./src/stat/utimensat.d 

OBJS += \
./src/stat/__xstat.o \
./src/stat/chmod.o \
./src/stat/fchmod.o \
./src/stat/fchmodat.o \
./src/stat/fstat.o \
./src/stat/fstatat.o \
./src/stat/futimens.o \
./src/stat/futimesat.o \
./src/stat/lchmod.o \
./src/stat/lstat.o \
./src/stat/mkdir.o \
./src/stat/mkdirat.o \
./src/stat/mkfifo.o \
./src/stat/mkfifoat.o \
./src/stat/mknod.o \
./src/stat/mknodat.o \
./src/stat/stat.o \
./src/stat/statvfs.o \
./src/stat/umask.o \
./src/stat/utimensat.o 


# Each subdirectory must supply rules for building sources it contributes
src/stat/%.o: ../src/stat/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

