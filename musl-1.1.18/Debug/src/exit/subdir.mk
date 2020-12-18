################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/exit/_Exit.c \
../src/exit/abort.c \
../src/exit/assert.c \
../src/exit/at_quick_exit.c \
../src/exit/atexit.c \
../src/exit/exit.c \
../src/exit/quick_exit.c 

C_DEPS += \
./src/exit/_Exit.d \
./src/exit/abort.d \
./src/exit/assert.d \
./src/exit/at_quick_exit.d \
./src/exit/atexit.d \
./src/exit/exit.d \
./src/exit/quick_exit.d 

OBJS += \
./src/exit/_Exit.o \
./src/exit/abort.o \
./src/exit/assert.o \
./src/exit/at_quick_exit.o \
./src/exit/atexit.o \
./src/exit/exit.o \
./src/exit/quick_exit.o 


# Each subdirectory must supply rules for building sources it contributes
src/exit/%.o: ../src/exit/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

