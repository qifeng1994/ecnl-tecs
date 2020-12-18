################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ipc/ftok.c \
../src/ipc/msgctl.c \
../src/ipc/msgget.c \
../src/ipc/msgrcv.c \
../src/ipc/msgsnd.c \
../src/ipc/semctl.c \
../src/ipc/semget.c \
../src/ipc/semop.c \
../src/ipc/semtimedop.c \
../src/ipc/shmat.c \
../src/ipc/shmctl.c \
../src/ipc/shmdt.c \
../src/ipc/shmget.c 

C_DEPS += \
./src/ipc/ftok.d \
./src/ipc/msgctl.d \
./src/ipc/msgget.d \
./src/ipc/msgrcv.d \
./src/ipc/msgsnd.d \
./src/ipc/semctl.d \
./src/ipc/semget.d \
./src/ipc/semop.d \
./src/ipc/semtimedop.d \
./src/ipc/shmat.d \
./src/ipc/shmctl.d \
./src/ipc/shmdt.d \
./src/ipc/shmget.d 

OBJS += \
./src/ipc/ftok.o \
./src/ipc/msgctl.o \
./src/ipc/msgget.o \
./src/ipc/msgrcv.o \
./src/ipc/msgsnd.o \
./src/ipc/semctl.o \
./src/ipc/semget.o \
./src/ipc/semop.o \
./src/ipc/semtimedop.o \
./src/ipc/shmat.o \
./src/ipc/shmctl.o \
./src/ipc/shmdt.o \
./src/ipc/shmget.o 


# Each subdirectory must supply rules for building sources it contributes
src/ipc/%.o: ../src/ipc/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

