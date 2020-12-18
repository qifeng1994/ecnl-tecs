################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../wolfcrypt/src/aes.c \
../wolfcrypt/src/arc4.c \
../wolfcrypt/src/asn.c \
../wolfcrypt/src/blake2b.c \
../wolfcrypt/src/camellia.c \
../wolfcrypt/src/coding.c \
../wolfcrypt/src/des3.c \
../wolfcrypt/src/dh.c \
../wolfcrypt/src/dsa.c \
../wolfcrypt/src/ecc.c \
../wolfcrypt/src/error.c \
../wolfcrypt/src/hash.c \
../wolfcrypt/src/hc128.c \
../wolfcrypt/src/hmac.c \
../wolfcrypt/src/integer.c \
../wolfcrypt/src/logging.c \
../wolfcrypt/src/md4.c \
../wolfcrypt/src/md5.c \
../wolfcrypt/src/memory.c \
../wolfcrypt/src/misc.c \
../wolfcrypt/src/pwdbased.c \
../wolfcrypt/src/rabbit.c \
../wolfcrypt/src/random.c \
../wolfcrypt/src/ripemd.c \
../wolfcrypt/src/rsa.c \
../wolfcrypt/src/sha.c \
../wolfcrypt/src/sha256.c \
../wolfcrypt/src/sha512.c \
../wolfcrypt/src/wc_encrypt.c \
../wolfcrypt/src/wc_port.c \
../wolfcrypt/src/wolfmath.c 

C_DEPS += \
./wolfcrypt/src/aes.d \
./wolfcrypt/src/arc4.d \
./wolfcrypt/src/asn.d \
./wolfcrypt/src/blake2b.d \
./wolfcrypt/src/camellia.d \
./wolfcrypt/src/coding.d \
./wolfcrypt/src/des3.d \
./wolfcrypt/src/dh.d \
./wolfcrypt/src/dsa.d \
./wolfcrypt/src/ecc.d \
./wolfcrypt/src/error.d \
./wolfcrypt/src/hash.d \
./wolfcrypt/src/hc128.d \
./wolfcrypt/src/hmac.d \
./wolfcrypt/src/integer.d \
./wolfcrypt/src/logging.d \
./wolfcrypt/src/md4.d \
./wolfcrypt/src/md5.d \
./wolfcrypt/src/memory.d \
./wolfcrypt/src/misc.d \
./wolfcrypt/src/pwdbased.d \
./wolfcrypt/src/rabbit.d \
./wolfcrypt/src/random.d \
./wolfcrypt/src/ripemd.d \
./wolfcrypt/src/rsa.d \
./wolfcrypt/src/sha.d \
./wolfcrypt/src/sha256.d \
./wolfcrypt/src/sha512.d \
./wolfcrypt/src/wc_encrypt.d \
./wolfcrypt/src/wc_port.d \
./wolfcrypt/src/wolfmath.d 

OBJS += \
./wolfcrypt/src/aes.o \
./wolfcrypt/src/arc4.o \
./wolfcrypt/src/asn.o \
./wolfcrypt/src/blake2b.o \
./wolfcrypt/src/camellia.o \
./wolfcrypt/src/coding.o \
./wolfcrypt/src/des3.o \
./wolfcrypt/src/dh.o \
./wolfcrypt/src/dsa.o \
./wolfcrypt/src/ecc.o \
./wolfcrypt/src/error.o \
./wolfcrypt/src/hash.o \
./wolfcrypt/src/hc128.o \
./wolfcrypt/src/hmac.o \
./wolfcrypt/src/integer.o \
./wolfcrypt/src/logging.o \
./wolfcrypt/src/md4.o \
./wolfcrypt/src/md5.o \
./wolfcrypt/src/memory.o \
./wolfcrypt/src/misc.o \
./wolfcrypt/src/pwdbased.o \
./wolfcrypt/src/rabbit.o \
./wolfcrypt/src/random.o \
./wolfcrypt/src/ripemd.o \
./wolfcrypt/src/rsa.o \
./wolfcrypt/src/sha.o \
./wolfcrypt/src/sha256.o \
./wolfcrypt/src/sha512.o \
./wolfcrypt/src/wc_encrypt.o \
./wolfcrypt/src/wc_port.o \
./wolfcrypt/src/wolfmath.o 


# Each subdirectory must supply rules for building sources it contributes
wolfcrypt/src/%.o: ../wolfcrypt/src/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -DWOLFSSL_RIPEMD -DWOLFSSL_SHA512 -DHAVE_CONFIG_H -DWOLFSSL_USER_SETTINGS -I"C:\trunk_base\trunk\wolfssl-3.15.7" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

