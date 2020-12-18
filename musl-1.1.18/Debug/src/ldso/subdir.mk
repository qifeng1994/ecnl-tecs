################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ldso/__dlsym.c \
../src/ldso/dl_iterate_phdr.c \
../src/ldso/dladdr.c \
../src/ldso/dlclose.c \
../src/ldso/dlerror.c \
../src/ldso/dlinfo.c \
../src/ldso/dlopen.c \
../src/ldso/tlsdesc.c 

C_DEPS += \
./src/ldso/__dlsym.d \
./src/ldso/dl_iterate_phdr.d \
./src/ldso/dladdr.d \
./src/ldso/dlclose.d \
./src/ldso/dlerror.d \
./src/ldso/dlinfo.d \
./src/ldso/dlopen.d \
./src/ldso/tlsdesc.d 

OBJS += \
./src/ldso/__dlsym.o \
./src/ldso/dl_iterate_phdr.o \
./src/ldso/dladdr.o \
./src/ldso/dlclose.o \
./src/ldso/dlerror.o \
./src/ldso/dlinfo.o \
./src/ldso/dlopen.o \
./src/ldso/tlsdesc.o 


# Each subdirectory must supply rules for building sources it contributes
src/ldso/%.o: ../src/ldso/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

