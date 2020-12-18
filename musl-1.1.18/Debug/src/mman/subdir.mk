################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/mman/madvise.c \
../src/mman/mincore.c \
../src/mman/mlock.c \
../src/mman/mlockall.c \
../src/mman/mmap.c \
../src/mman/mprotect.c \
../src/mman/mremap.c \
../src/mman/msync.c \
../src/mman/munlock.c \
../src/mman/munlockall.c \
../src/mman/munmap.c \
../src/mman/posix_madvise.c \
../src/mman/shm_open.c 

C_DEPS += \
./src/mman/madvise.d \
./src/mman/mincore.d \
./src/mman/mlock.d \
./src/mman/mlockall.d \
./src/mman/mmap.d \
./src/mman/mprotect.d \
./src/mman/mremap.d \
./src/mman/msync.d \
./src/mman/munlock.d \
./src/mman/munlockall.d \
./src/mman/munmap.d \
./src/mman/posix_madvise.d \
./src/mman/shm_open.d 

OBJS += \
./src/mman/madvise.o \
./src/mman/mincore.o \
./src/mman/mlock.o \
./src/mman/mlockall.o \
./src/mman/mmap.o \
./src/mman/mprotect.o \
./src/mman/mremap.o \
./src/mman/msync.o \
./src/mman/munlock.o \
./src/mman/munlockall.o \
./src/mman/munmap.o \
./src/mman/posix_madvise.o \
./src/mman/shm_open.o 


# Each subdirectory must supply rules for building sources it contributes
src/mman/%.o: ../src/mman/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

