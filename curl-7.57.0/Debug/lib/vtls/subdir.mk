################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lib/vtls/axtls.c \
../lib/vtls/cyassl.c \
../lib/vtls/darwinssl.c \
../lib/vtls/gskit.c \
../lib/vtls/gtls.c \
../lib/vtls/mbedtls.c \
../lib/vtls/nss.c \
../lib/vtls/openssl.c \
../lib/vtls/polarssl.c \
../lib/vtls/polarssl_threadlock.c \
../lib/vtls/schannel.c \
../lib/vtls/vtls.c 

C_DEPS += \
./lib/vtls/axtls.d \
./lib/vtls/cyassl.d \
./lib/vtls/darwinssl.d \
./lib/vtls/gskit.d \
./lib/vtls/gtls.d \
./lib/vtls/mbedtls.d \
./lib/vtls/nss.d \
./lib/vtls/openssl.d \
./lib/vtls/polarssl.d \
./lib/vtls/polarssl_threadlock.d \
./lib/vtls/schannel.d \
./lib/vtls/vtls.d 

OBJS += \
./lib/vtls/axtls.o \
./lib/vtls/cyassl.o \
./lib/vtls/darwinssl.o \
./lib/vtls/gskit.o \
./lib/vtls/gtls.o \
./lib/vtls/mbedtls.o \
./lib/vtls/nss.o \
./lib/vtls/openssl.o \
./lib/vtls/polarssl.o \
./lib/vtls/polarssl_threadlock.o \
./lib/vtls/schannel.o \
./lib/vtls/vtls.o 


# Each subdirectory must supply rules for building sources it contributes
lib/vtls/%.o: ../lib/vtls/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -DHAVE_CONFIG_H -DBUILDING_LIBCURL -DWOLFSSL_USER_SETTINGS -I"C:\trunk_base\trunk\curl-7.57.0\include" -I"C:\trunk_base\trunk\curl-7.57.0\lib" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

