################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/crl.c \
../src/internal.c \
../src/keys.c \
../src/ocsp.c \
../src/sniffer.c \
../src/ssl.c \
../src/tls.c \
../src/tls13.c \
../src/wolfio.c 

C_DEPS += \
./src/crl.d \
./src/internal.d \
./src/keys.d \
./src/ocsp.d \
./src/sniffer.d \
./src/ssl.d \
./src/tls.d \
./src/tls13.d \
./src/wolfio.d 

OBJS += \
./src/crl.o \
./src/internal.o \
./src/keys.o \
./src/ocsp.o \
./src/sniffer.o \
./src/ssl.o \
./src/tls.o \
./src/tls13.o \
./src/wolfio.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -DWOLFSSL_RIPEMD -DWOLFSSL_SHA512 -DHAVE_CONFIG_H -DWOLFSSL_USER_SETTINGS -I"C:\trunk_base\trunk\wolfssl-3.15.7" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

