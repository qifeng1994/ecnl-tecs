################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../crt/arm/crti.S \
../crt/arm/crtn.S 

OBJS += \
./crt/arm/crti.o \
./crt/arm/crtn.o 

S_UPPER_DEPS += \
./crt/arm/crti.d \
./crt/arm/crtn.d 


# Each subdirectory must supply rules for building sources it contributes
crt/arm/%.o: ../crt/arm/%.S
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

