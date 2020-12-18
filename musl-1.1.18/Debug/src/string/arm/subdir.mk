################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../src/string/arm/__aeabi_memcpy.S \
../src/string/arm/__aeabi_memset.S \
../src/string/arm/memcpy_le.S 

C_SRCS += \
../src/string/arm/memcpy.c 

C_DEPS += \
./src/string/arm/memcpy.d 

OBJS += \
./src/string/arm/__aeabi_memcpy.o \
./src/string/arm/__aeabi_memset.o \
./src/string/arm/memcpy.o \
./src/string/arm/memcpy_le.o 

S_UPPER_DEPS += \
./src/string/arm/__aeabi_memcpy.d \
./src/string/arm/__aeabi_memset.d \
./src/string/arm/memcpy_le.d 


# Each subdirectory must supply rules for building sources it contributes
src/string/arm/%.o: ../src/string/arm/%.S
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
src/string/arm/%.o: ../src/string/arm/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

