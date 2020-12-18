################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/fenv/__flt_rounds.c \
../src/fenv/fegetexceptflag.c \
../src/fenv/feholdexcept.c \
../src/fenv/fesetexceptflag.c \
../src/fenv/fesetround.c \
../src/fenv/feupdateenv.c 

C_DEPS += \
./src/fenv/__flt_rounds.d \
./src/fenv/fegetexceptflag.d \
./src/fenv/feholdexcept.d \
./src/fenv/fesetexceptflag.d \
./src/fenv/fesetround.d \
./src/fenv/feupdateenv.d 

OBJS += \
./src/fenv/__flt_rounds.o \
./src/fenv/fegetexceptflag.o \
./src/fenv/feholdexcept.o \
./src/fenv/fesetexceptflag.o \
./src/fenv/fesetround.o \
./src/fenv/feupdateenv.o 


# Each subdirectory must supply rules for building sources it contributes
src/fenv/%.o: ../src/fenv/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

