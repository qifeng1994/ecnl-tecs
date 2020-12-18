################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/crypt/crypt.c \
../src/crypt/crypt_blowfish.c \
../src/crypt/crypt_des.c \
../src/crypt/crypt_md5.c \
../src/crypt/crypt_r.c \
../src/crypt/crypt_sha256.c \
../src/crypt/crypt_sha512.c \
../src/crypt/encrypt.c 

C_DEPS += \
./src/crypt/crypt.d \
./src/crypt/crypt_blowfish.d \
./src/crypt/crypt_des.d \
./src/crypt/crypt_md5.d \
./src/crypt/crypt_r.d \
./src/crypt/crypt_sha256.d \
./src/crypt/crypt_sha512.d \
./src/crypt/encrypt.d 

OBJS += \
./src/crypt/crypt.o \
./src/crypt/crypt_blowfish.o \
./src/crypt/crypt_des.o \
./src/crypt/crypt_md5.o \
./src/crypt/crypt_r.o \
./src/crypt/crypt_sha256.o \
./src/crypt/crypt_sha512.o \
./src/crypt/encrypt.o 


# Each subdirectory must supply rules for building sources it contributes
src/crypt/%.o: ../src/crypt/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

