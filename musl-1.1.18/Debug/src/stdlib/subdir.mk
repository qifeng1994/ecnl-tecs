################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/stdlib/abs.c \
../src/stdlib/atof.c \
../src/stdlib/atoi.c \
../src/stdlib/atol.c \
../src/stdlib/atoll.c \
../src/stdlib/bsearch.c \
../src/stdlib/div.c \
../src/stdlib/ecvt.c \
../src/stdlib/fcvt.c \
../src/stdlib/gcvt.c \
../src/stdlib/imaxabs.c \
../src/stdlib/imaxdiv.c \
../src/stdlib/labs.c \
../src/stdlib/ldiv.c \
../src/stdlib/llabs.c \
../src/stdlib/lldiv.c \
../src/stdlib/qsort.c \
../src/stdlib/strtod.c \
../src/stdlib/strtol.c \
../src/stdlib/wcstod.c \
../src/stdlib/wcstol.c 

C_DEPS += \
./src/stdlib/abs.d \
./src/stdlib/atof.d \
./src/stdlib/atoi.d \
./src/stdlib/atol.d \
./src/stdlib/atoll.d \
./src/stdlib/bsearch.d \
./src/stdlib/div.d \
./src/stdlib/ecvt.d \
./src/stdlib/fcvt.d \
./src/stdlib/gcvt.d \
./src/stdlib/imaxabs.d \
./src/stdlib/imaxdiv.d \
./src/stdlib/labs.d \
./src/stdlib/ldiv.d \
./src/stdlib/llabs.d \
./src/stdlib/lldiv.d \
./src/stdlib/qsort.d \
./src/stdlib/strtod.d \
./src/stdlib/strtol.d \
./src/stdlib/wcstod.d \
./src/stdlib/wcstol.d 

OBJS += \
./src/stdlib/abs.o \
./src/stdlib/atof.o \
./src/stdlib/atoi.o \
./src/stdlib/atol.o \
./src/stdlib/atoll.o \
./src/stdlib/bsearch.o \
./src/stdlib/div.o \
./src/stdlib/ecvt.o \
./src/stdlib/fcvt.o \
./src/stdlib/gcvt.o \
./src/stdlib/imaxabs.o \
./src/stdlib/imaxdiv.o \
./src/stdlib/labs.o \
./src/stdlib/ldiv.o \
./src/stdlib/llabs.o \
./src/stdlib/lldiv.o \
./src/stdlib/qsort.o \
./src/stdlib/strtod.o \
./src/stdlib/strtol.o \
./src/stdlib/wcstod.o \
./src/stdlib/wcstol.o 


# Each subdirectory must supply rules for building sources it contributes
src/stdlib/%.o: ../src/stdlib/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

