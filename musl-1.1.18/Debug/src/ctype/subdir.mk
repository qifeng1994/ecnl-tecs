################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ctype/__ctype_b_loc.c \
../src/ctype/__ctype_get_mb_cur_max.c \
../src/ctype/__ctype_tolower_loc.c \
../src/ctype/__ctype_toupper_loc.c \
../src/ctype/isalnum.c \
../src/ctype/isalpha.c \
../src/ctype/isascii.c \
../src/ctype/isblank.c \
../src/ctype/iscntrl.c \
../src/ctype/isdigit.c \
../src/ctype/isgraph.c \
../src/ctype/islower.c \
../src/ctype/isprint.c \
../src/ctype/ispunct.c \
../src/ctype/isspace.c \
../src/ctype/isupper.c \
../src/ctype/iswalnum.c \
../src/ctype/iswalpha.c \
../src/ctype/iswblank.c \
../src/ctype/iswcntrl.c \
../src/ctype/iswctype.c \
../src/ctype/iswdigit.c \
../src/ctype/iswgraph.c \
../src/ctype/iswlower.c \
../src/ctype/iswprint.c \
../src/ctype/iswpunct.c \
../src/ctype/iswspace.c \
../src/ctype/iswupper.c \
../src/ctype/iswxdigit.c \
../src/ctype/isxdigit.c \
../src/ctype/toascii.c \
../src/ctype/tolower.c \
../src/ctype/toupper.c \
../src/ctype/towctrans.c \
../src/ctype/wcswidth.c \
../src/ctype/wctrans.c \
../src/ctype/wcwidth.c 

C_DEPS += \
./src/ctype/__ctype_b_loc.d \
./src/ctype/__ctype_get_mb_cur_max.d \
./src/ctype/__ctype_tolower_loc.d \
./src/ctype/__ctype_toupper_loc.d \
./src/ctype/isalnum.d \
./src/ctype/isalpha.d \
./src/ctype/isascii.d \
./src/ctype/isblank.d \
./src/ctype/iscntrl.d \
./src/ctype/isdigit.d \
./src/ctype/isgraph.d \
./src/ctype/islower.d \
./src/ctype/isprint.d \
./src/ctype/ispunct.d \
./src/ctype/isspace.d \
./src/ctype/isupper.d \
./src/ctype/iswalnum.d \
./src/ctype/iswalpha.d \
./src/ctype/iswblank.d \
./src/ctype/iswcntrl.d \
./src/ctype/iswctype.d \
./src/ctype/iswdigit.d \
./src/ctype/iswgraph.d \
./src/ctype/iswlower.d \
./src/ctype/iswprint.d \
./src/ctype/iswpunct.d \
./src/ctype/iswspace.d \
./src/ctype/iswupper.d \
./src/ctype/iswxdigit.d \
./src/ctype/isxdigit.d \
./src/ctype/toascii.d \
./src/ctype/tolower.d \
./src/ctype/toupper.d \
./src/ctype/towctrans.d \
./src/ctype/wcswidth.d \
./src/ctype/wctrans.d \
./src/ctype/wcwidth.d 

OBJS += \
./src/ctype/__ctype_b_loc.o \
./src/ctype/__ctype_get_mb_cur_max.o \
./src/ctype/__ctype_tolower_loc.o \
./src/ctype/__ctype_toupper_loc.o \
./src/ctype/isalnum.o \
./src/ctype/isalpha.o \
./src/ctype/isascii.o \
./src/ctype/isblank.o \
./src/ctype/iscntrl.o \
./src/ctype/isdigit.o \
./src/ctype/isgraph.o \
./src/ctype/islower.o \
./src/ctype/isprint.o \
./src/ctype/ispunct.o \
./src/ctype/isspace.o \
./src/ctype/isupper.o \
./src/ctype/iswalnum.o \
./src/ctype/iswalpha.o \
./src/ctype/iswblank.o \
./src/ctype/iswcntrl.o \
./src/ctype/iswctype.o \
./src/ctype/iswdigit.o \
./src/ctype/iswgraph.o \
./src/ctype/iswlower.o \
./src/ctype/iswprint.o \
./src/ctype/iswpunct.o \
./src/ctype/iswspace.o \
./src/ctype/iswupper.o \
./src/ctype/iswxdigit.o \
./src/ctype/isxdigit.o \
./src/ctype/toascii.o \
./src/ctype/tolower.o \
./src/ctype/toupper.o \
./src/ctype/towctrans.o \
./src/ctype/wcswidth.o \
./src/ctype/wctrans.o \
./src/ctype/wcwidth.o 


# Each subdirectory must supply rules for building sources it contributes
src/ctype/%.o: ../src/ctype/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

