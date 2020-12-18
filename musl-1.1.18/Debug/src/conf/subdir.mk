################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/conf/confstr.c \
../src/conf/fpathconf.c \
../src/conf/legacy.c \
../src/conf/pathconf.c \
../src/conf/sysconf.c 

C_DEPS += \
./src/conf/confstr.d \
./src/conf/fpathconf.d \
./src/conf/legacy.d \
./src/conf/pathconf.d \
./src/conf/sysconf.d 

OBJS += \
./src/conf/confstr.o \
./src/conf/fpathconf.o \
./src/conf/legacy.o \
./src/conf/pathconf.o \
./src/conf/sysconf.o 


# Each subdirectory must supply rules for building sources it contributes
src/conf/%.o: ../src/conf/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

