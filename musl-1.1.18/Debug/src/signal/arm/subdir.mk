################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../src/signal/arm/restore.S \
../src/signal/arm/sigsetjmp.S 

OBJS += \
./src/signal/arm/restore.o \
./src/signal/arm/sigsetjmp.o 

S_UPPER_DEPS += \
./src/signal/arm/restore.d \
./src/signal/arm/sigsetjmp.d 


# Each subdirectory must supply rules for building sources it contributes
src/signal/arm/%.o: ../src/signal/arm/%.S
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

