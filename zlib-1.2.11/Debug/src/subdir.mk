################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/adler32.c \
../src/compress.c \
../src/crc32.c \
../src/deflate.c \
../src/gzclose.c \
../src/gzlib.c \
../src/gzread.c \
../src/gzwrite.c \
../src/infback.c \
../src/inffast.c \
../src/inflate.c \
../src/inftrees.c \
../src/trees.c \
../src/uncompr.c \
../src/zutil.c 

C_DEPS += \
./src/adler32.d \
./src/compress.d \
./src/crc32.d \
./src/deflate.d \
./src/gzclose.d \
./src/gzlib.d \
./src/gzread.d \
./src/gzwrite.d \
./src/infback.d \
./src/inffast.d \
./src/inflate.d \
./src/inftrees.d \
./src/trees.d \
./src/uncompr.d \
./src/zutil.d 

OBJS += \
./src/adler32.o \
./src/compress.o \
./src/crc32.o \
./src/deflate.o \
./src/gzclose.o \
./src/gzlib.o \
./src/gzread.o \
./src/gzwrite.o \
./src/infback.o \
./src/inffast.o \
./src/inflate.o \
./src/inftrees.o \
./src/trees.o \
./src/uncompr.o \
./src/zutil.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

