################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/search/hsearch.c \
../src/search/insque.c \
../src/search/lsearch.c \
../src/search/tdestroy.c \
../src/search/tsearch_avl.c 

C_DEPS += \
./src/search/hsearch.d \
./src/search/insque.d \
./src/search/lsearch.d \
./src/search/tdestroy.d \
./src/search/tsearch_avl.d 

OBJS += \
./src/search/hsearch.o \
./src/search/insque.o \
./src/search/lsearch.o \
./src/search/tdestroy.o \
./src/search/tsearch_avl.o 


# Each subdirectory must supply rules for building sources it contributes
src/search/%.o: ../src/search/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

