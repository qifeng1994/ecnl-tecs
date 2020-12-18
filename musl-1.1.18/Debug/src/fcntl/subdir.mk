################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/fcntl/creat.c \
../src/fcntl/fcntl.c \
../src/fcntl/open.c \
../src/fcntl/openat.c \
../src/fcntl/posix_fadvise.c \
../src/fcntl/posix_fallocate.c 

C_DEPS += \
./src/fcntl/creat.d \
./src/fcntl/fcntl.d \
./src/fcntl/open.d \
./src/fcntl/openat.d \
./src/fcntl/posix_fadvise.d \
./src/fcntl/posix_fallocate.d 

OBJS += \
./src/fcntl/creat.o \
./src/fcntl/fcntl.o \
./src/fcntl/open.o \
./src/fcntl/openat.o \
./src/fcntl/posix_fadvise.o \
./src/fcntl/posix_fallocate.o 


# Each subdirectory must supply rules for building sources it contributes
src/fcntl/%.o: ../src/fcntl/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

