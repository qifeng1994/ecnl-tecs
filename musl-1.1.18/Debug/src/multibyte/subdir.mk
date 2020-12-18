################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/multibyte/btowc.c \
../src/multibyte/c16rtomb.c \
../src/multibyte/c32rtomb.c \
../src/multibyte/internal.c \
../src/multibyte/mblen.c \
../src/multibyte/mbrlen.c \
../src/multibyte/mbrtoc16.c \
../src/multibyte/mbrtoc32.c \
../src/multibyte/mbrtowc.c \
../src/multibyte/mbsinit.c \
../src/multibyte/mbsnrtowcs.c \
../src/multibyte/mbsrtowcs.c \
../src/multibyte/mbstowcs.c \
../src/multibyte/mbtowc.c \
../src/multibyte/wcrtomb.c \
../src/multibyte/wcsnrtombs.c \
../src/multibyte/wcsrtombs.c \
../src/multibyte/wcstombs.c \
../src/multibyte/wctob.c \
../src/multibyte/wctomb.c 

C_DEPS += \
./src/multibyte/btowc.d \
./src/multibyte/c16rtomb.d \
./src/multibyte/c32rtomb.d \
./src/multibyte/internal.d \
./src/multibyte/mblen.d \
./src/multibyte/mbrlen.d \
./src/multibyte/mbrtoc16.d \
./src/multibyte/mbrtoc32.d \
./src/multibyte/mbrtowc.d \
./src/multibyte/mbsinit.d \
./src/multibyte/mbsnrtowcs.d \
./src/multibyte/mbsrtowcs.d \
./src/multibyte/mbstowcs.d \
./src/multibyte/mbtowc.d \
./src/multibyte/wcrtomb.d \
./src/multibyte/wcsnrtombs.d \
./src/multibyte/wcsrtombs.d \
./src/multibyte/wcstombs.d \
./src/multibyte/wctob.d \
./src/multibyte/wctomb.d 

OBJS += \
./src/multibyte/btowc.o \
./src/multibyte/c16rtomb.o \
./src/multibyte/c32rtomb.o \
./src/multibyte/internal.o \
./src/multibyte/mblen.o \
./src/multibyte/mbrlen.o \
./src/multibyte/mbrtoc16.o \
./src/multibyte/mbrtoc32.o \
./src/multibyte/mbrtowc.o \
./src/multibyte/mbsinit.o \
./src/multibyte/mbsnrtowcs.o \
./src/multibyte/mbsrtowcs.o \
./src/multibyte/mbstowcs.o \
./src/multibyte/mbtowc.o \
./src/multibyte/wcrtomb.o \
./src/multibyte/wcsnrtombs.o \
./src/multibyte/wcsrtombs.o \
./src/multibyte/wcstombs.o \
./src/multibyte/wctob.o \
./src/multibyte/wctomb.o 


# Each subdirectory must supply rules for building sources it contributes
src/multibyte/%.o: ../src/multibyte/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

