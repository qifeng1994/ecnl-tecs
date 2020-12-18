################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../src/setjmp/arm/longjmp.S \
../src/setjmp/arm/setjmp.S 

OBJS += \
./src/setjmp/arm/longjmp.o \
./src/setjmp/arm/setjmp.o 

S_UPPER_DEPS += \
./src/setjmp/arm/longjmp.d \
./src/setjmp/arm/setjmp.d 


# Each subdirectory must supply rules for building sources it contributes
src/setjmp/arm/%.o: ../src/setjmp/arm/%.S
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

