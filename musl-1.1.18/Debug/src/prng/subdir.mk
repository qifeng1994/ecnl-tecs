################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/prng/__rand48_step.c \
../src/prng/__seed48.c \
../src/prng/drand48.c \
../src/prng/lcong48.c \
../src/prng/lrand48.c \
../src/prng/mrand48.c \
../src/prng/rand.c \
../src/prng/rand_r.c \
../src/prng/random.c \
../src/prng/seed48.c \
../src/prng/srand48.c 

C_DEPS += \
./src/prng/__rand48_step.d \
./src/prng/__seed48.d \
./src/prng/drand48.d \
./src/prng/lcong48.d \
./src/prng/lrand48.d \
./src/prng/mrand48.d \
./src/prng/rand.d \
./src/prng/rand_r.d \
./src/prng/random.d \
./src/prng/seed48.d \
./src/prng/srand48.d 

OBJS += \
./src/prng/__rand48_step.o \
./src/prng/__seed48.o \
./src/prng/drand48.o \
./src/prng/lcong48.o \
./src/prng/lrand48.o \
./src/prng/mrand48.o \
./src/prng/rand.o \
./src/prng/rand_r.o \
./src/prng/random.o \
./src/prng/seed48.o \
./src/prng/srand48.o 


# Each subdirectory must supply rules for building sources it contributes
src/prng/%.o: ../src/prng/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

