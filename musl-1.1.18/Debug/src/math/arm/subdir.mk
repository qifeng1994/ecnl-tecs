################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/math/arm/fabs.c \
../src/math/arm/fabsf.c \
../src/math/arm/sqrt.c \
../src/math/arm/sqrtf.c 

C_DEPS += \
./src/math/arm/fabs.d \
./src/math/arm/fabsf.d \
./src/math/arm/sqrt.d \
./src/math/arm/sqrtf.d 

OBJS += \
./src/math/arm/fabs.o \
./src/math/arm/fabsf.o \
./src/math/arm/sqrt.o \
./src/math/arm/sqrtf.o 


# Each subdirectory must supply rules for building sources it contributes
src/math/arm/%.o: ../src/math/arm/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

