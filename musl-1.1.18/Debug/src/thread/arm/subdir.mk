################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../src/thread/arm/__aeabi_read_tp.S \
../src/thread/arm/atomics.S 

C_SRCS += \
../src/thread/arm/__aeabi_read_tp_c.c \
../src/thread/arm/__set_thread_area.c 

C_DEPS += \
./src/thread/arm/__aeabi_read_tp_c.d \
./src/thread/arm/__set_thread_area.d 

OBJS += \
./src/thread/arm/__aeabi_read_tp.o \
./src/thread/arm/__aeabi_read_tp_c.o \
./src/thread/arm/__set_thread_area.o \
./src/thread/arm/atomics.o 

S_UPPER_DEPS += \
./src/thread/arm/__aeabi_read_tp.d \
./src/thread/arm/atomics.d 


# Each subdirectory must supply rules for building sources it contributes
src/thread/arm/%.o: ../src/thread/arm/%.S
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
src/thread/arm/%.o: ../src/thread/arm/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

