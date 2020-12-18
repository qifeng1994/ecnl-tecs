################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/dirent/__getdents.c \
../src/dirent/alphasort.c \
../src/dirent/closedir.c \
../src/dirent/dirfd.c \
../src/dirent/fdopendir.c \
../src/dirent/opendir.c \
../src/dirent/readdir.c \
../src/dirent/readdir_r.c \
../src/dirent/rewinddir.c \
../src/dirent/scandir.c \
../src/dirent/seekdir.c \
../src/dirent/telldir.c \
../src/dirent/versionsort.c 

C_DEPS += \
./src/dirent/__getdents.d \
./src/dirent/alphasort.d \
./src/dirent/closedir.d \
./src/dirent/dirfd.d \
./src/dirent/fdopendir.d \
./src/dirent/opendir.d \
./src/dirent/readdir.d \
./src/dirent/readdir_r.d \
./src/dirent/rewinddir.d \
./src/dirent/scandir.d \
./src/dirent/seekdir.d \
./src/dirent/telldir.d \
./src/dirent/versionsort.d 

OBJS += \
./src/dirent/__getdents.o \
./src/dirent/alphasort.o \
./src/dirent/closedir.o \
./src/dirent/dirfd.o \
./src/dirent/fdopendir.o \
./src/dirent/opendir.o \
./src/dirent/readdir.o \
./src/dirent/readdir_r.o \
./src/dirent/rewinddir.o \
./src/dirent/scandir.o \
./src/dirent/seekdir.o \
./src/dirent/telldir.o \
./src/dirent/versionsort.o 


# Each subdirectory must supply rules for building sources it contributes
src/dirent/%.o: ../src/dirent/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

