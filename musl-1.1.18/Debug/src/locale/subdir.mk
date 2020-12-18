################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/locale/__lctrans.c \
../src/locale/__mo_lookup.c \
../src/locale/bind_textdomain_codeset.c \
../src/locale/c_locale.c \
../src/locale/catclose.c \
../src/locale/catgets.c \
../src/locale/catopen.c \
../src/locale/dcngettext.c \
../src/locale/duplocale.c \
../src/locale/freelocale.c \
../src/locale/iconv.c \
../src/locale/langinfo.c \
../src/locale/locale_map.c \
../src/locale/localeconv.c \
../src/locale/newlocale.c \
../src/locale/pleval.c \
../src/locale/setlocale.c \
../src/locale/strcoll.c \
../src/locale/strfmon.c \
../src/locale/strxfrm.c \
../src/locale/textdomain.c \
../src/locale/uselocale.c \
../src/locale/wcscoll.c \
../src/locale/wcsxfrm.c 

C_DEPS += \
./src/locale/__lctrans.d \
./src/locale/__mo_lookup.d \
./src/locale/bind_textdomain_codeset.d \
./src/locale/c_locale.d \
./src/locale/catclose.d \
./src/locale/catgets.d \
./src/locale/catopen.d \
./src/locale/dcngettext.d \
./src/locale/duplocale.d \
./src/locale/freelocale.d \
./src/locale/iconv.d \
./src/locale/langinfo.d \
./src/locale/locale_map.d \
./src/locale/localeconv.d \
./src/locale/newlocale.d \
./src/locale/pleval.d \
./src/locale/setlocale.d \
./src/locale/strcoll.d \
./src/locale/strfmon.d \
./src/locale/strxfrm.d \
./src/locale/textdomain.d \
./src/locale/uselocale.d \
./src/locale/wcscoll.d \
./src/locale/wcsxfrm.d 

OBJS += \
./src/locale/__lctrans.o \
./src/locale/__mo_lookup.o \
./src/locale/bind_textdomain_codeset.o \
./src/locale/c_locale.o \
./src/locale/catclose.o \
./src/locale/catgets.o \
./src/locale/catopen.o \
./src/locale/dcngettext.o \
./src/locale/duplocale.o \
./src/locale/freelocale.o \
./src/locale/iconv.o \
./src/locale/langinfo.o \
./src/locale/locale_map.o \
./src/locale/localeconv.o \
./src/locale/newlocale.o \
./src/locale/pleval.o \
./src/locale/setlocale.o \
./src/locale/strcoll.o \
./src/locale/strfmon.o \
./src/locale/strxfrm.o \
./src/locale/textdomain.o \
./src/locale/uselocale.o \
./src/locale/wcscoll.o \
./src/locale/wcsxfrm.o 


# Each subdirectory must supply rules for building sources it contributes
src/locale/%.o: ../src/locale/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

