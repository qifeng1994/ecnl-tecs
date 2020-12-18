################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/termios/cfgetospeed.c \
../src/termios/cfmakeraw.c \
../src/termios/cfsetospeed.c \
../src/termios/tcdrain.c \
../src/termios/tcflow.c \
../src/termios/tcflush.c \
../src/termios/tcgetattr.c \
../src/termios/tcgetsid.c \
../src/termios/tcsendbreak.c \
../src/termios/tcsetattr.c 

C_DEPS += \
./src/termios/cfgetospeed.d \
./src/termios/cfmakeraw.d \
./src/termios/cfsetospeed.d \
./src/termios/tcdrain.d \
./src/termios/tcflow.d \
./src/termios/tcflush.d \
./src/termios/tcgetattr.d \
./src/termios/tcgetsid.d \
./src/termios/tcsendbreak.d \
./src/termios/tcsetattr.d 

OBJS += \
./src/termios/cfgetospeed.o \
./src/termios/cfmakeraw.o \
./src/termios/cfsetospeed.o \
./src/termios/tcdrain.o \
./src/termios/tcflow.o \
./src/termios/tcflush.o \
./src/termios/tcgetattr.o \
./src/termios/tcgetsid.o \
./src/termios/tcsendbreak.o \
./src/termios/tcsetattr.o 


# Each subdirectory must supply rules for building sources it contributes
src/termios/%.o: ../src/termios/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

