################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/temp/__randname.c \
../src/temp/mkdtemp.c \
../src/temp/mkostemp.c \
../src/temp/mkostemps.c \
../src/temp/mkstemp.c \
../src/temp/mkstemps.c \
../src/temp/mktemp.c 

C_DEPS += \
./src/temp/__randname.d \
./src/temp/mkdtemp.d \
./src/temp/mkostemp.d \
./src/temp/mkostemps.d \
./src/temp/mkstemp.d \
./src/temp/mkstemps.d \
./src/temp/mktemp.d 

OBJS += \
./src/temp/__randname.o \
./src/temp/mkdtemp.o \
./src/temp/mkostemp.o \
./src/temp/mkostemps.o \
./src/temp/mkstemp.o \
./src/temp/mkstemps.o \
./src/temp/mktemp.o 


# Each subdirectory must supply rules for building sources it contributes
src/temp/%.o: ../src/temp/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

