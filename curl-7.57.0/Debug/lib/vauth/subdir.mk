################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lib/vauth/cleartext.c \
../lib/vauth/cram.c \
../lib/vauth/digest.c \
../lib/vauth/ntlm.c \
../lib/vauth/oauth2.c \
../lib/vauth/vauth.c 

C_DEPS += \
./lib/vauth/cleartext.d \
./lib/vauth/cram.d \
./lib/vauth/digest.d \
./lib/vauth/ntlm.d \
./lib/vauth/oauth2.d \
./lib/vauth/vauth.d 

OBJS += \
./lib/vauth/cleartext.o \
./lib/vauth/cram.o \
./lib/vauth/digest.o \
./lib/vauth/ntlm.o \
./lib/vauth/oauth2.o \
./lib/vauth/vauth.o 


# Each subdirectory must supply rules for building sources it contributes
lib/vauth/%.o: ../lib/vauth/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -DHAVE_CONFIG_H -DBUILDING_LIBCURL -DWOLFSSL_USER_SETTINGS -I"C:\trunk_base\trunk\curl-7.57.0\include" -I"C:\trunk_base\trunk\curl-7.57.0\lib" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

