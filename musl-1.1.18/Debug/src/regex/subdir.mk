################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/regex/fnmatch.c \
../src/regex/glob.c \
../src/regex/regcomp.c \
../src/regex/regerror.c \
../src/regex/regexec.c \
../src/regex/tre-mem.c 

C_DEPS += \
./src/regex/fnmatch.d \
./src/regex/glob.d \
./src/regex/regcomp.d \
./src/regex/regerror.d \
./src/regex/regexec.d \
./src/regex/tre-mem.d 

OBJS += \
./src/regex/fnmatch.o \
./src/regex/glob.o \
./src/regex/regcomp.o \
./src/regex/regerror.o \
./src/regex/regexec.o \
./src/regex/tre-mem.o 


# Each subdirectory must supply rules for building sources it contributes
src/regex/%.o: ../src/regex/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

