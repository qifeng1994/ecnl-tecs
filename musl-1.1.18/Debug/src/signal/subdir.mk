################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/signal/block.c \
../src/signal/getitimer.c \
../src/signal/kill.c \
../src/signal/killpg.c \
../src/signal/psiginfo.c \
../src/signal/psignal.c \
../src/signal/raise.c \
../src/signal/setitimer.c \
../src/signal/sigaction.c \
../src/signal/sigaddset.c \
../src/signal/sigaltstack.c \
../src/signal/sigandset.c \
../src/signal/sigdelset.c \
../src/signal/sigemptyset.c \
../src/signal/sigfillset.c \
../src/signal/sighold.c \
../src/signal/sigignore.c \
../src/signal/siginterrupt.c \
../src/signal/sigisemptyset.c \
../src/signal/sigismember.c \
../src/signal/siglongjmp.c \
../src/signal/signal.c \
../src/signal/sigorset.c \
../src/signal/sigpause.c \
../src/signal/sigpending.c \
../src/signal/sigprocmask.c \
../src/signal/sigqueue.c \
../src/signal/sigrelse.c \
../src/signal/sigrtmax.c \
../src/signal/sigrtmin.c \
../src/signal/sigset.c \
../src/signal/sigsetjmp.c \
../src/signal/sigsetjmp_tail.c \
../src/signal/sigsuspend.c \
../src/signal/sigtimedwait.c \
../src/signal/sigwait.c \
../src/signal/sigwaitinfo.c 

C_DEPS += \
./src/signal/block.d \
./src/signal/getitimer.d \
./src/signal/kill.d \
./src/signal/killpg.d \
./src/signal/psiginfo.d \
./src/signal/psignal.d \
./src/signal/raise.d \
./src/signal/setitimer.d \
./src/signal/sigaction.d \
./src/signal/sigaddset.d \
./src/signal/sigaltstack.d \
./src/signal/sigandset.d \
./src/signal/sigdelset.d \
./src/signal/sigemptyset.d \
./src/signal/sigfillset.d \
./src/signal/sighold.d \
./src/signal/sigignore.d \
./src/signal/siginterrupt.d \
./src/signal/sigisemptyset.d \
./src/signal/sigismember.d \
./src/signal/siglongjmp.d \
./src/signal/signal.d \
./src/signal/sigorset.d \
./src/signal/sigpause.d \
./src/signal/sigpending.d \
./src/signal/sigprocmask.d \
./src/signal/sigqueue.d \
./src/signal/sigrelse.d \
./src/signal/sigrtmax.d \
./src/signal/sigrtmin.d \
./src/signal/sigset.d \
./src/signal/sigsetjmp.d \
./src/signal/sigsetjmp_tail.d \
./src/signal/sigsuspend.d \
./src/signal/sigtimedwait.d \
./src/signal/sigwait.d \
./src/signal/sigwaitinfo.d 

OBJS += \
./src/signal/block.o \
./src/signal/getitimer.o \
./src/signal/kill.o \
./src/signal/killpg.o \
./src/signal/psiginfo.o \
./src/signal/psignal.o \
./src/signal/raise.o \
./src/signal/setitimer.o \
./src/signal/sigaction.o \
./src/signal/sigaddset.o \
./src/signal/sigaltstack.o \
./src/signal/sigandset.o \
./src/signal/sigdelset.o \
./src/signal/sigemptyset.o \
./src/signal/sigfillset.o \
./src/signal/sighold.o \
./src/signal/sigignore.o \
./src/signal/siginterrupt.o \
./src/signal/sigisemptyset.o \
./src/signal/sigismember.o \
./src/signal/siglongjmp.o \
./src/signal/signal.o \
./src/signal/sigorset.o \
./src/signal/sigpause.o \
./src/signal/sigpending.o \
./src/signal/sigprocmask.o \
./src/signal/sigqueue.o \
./src/signal/sigrelse.o \
./src/signal/sigrtmax.o \
./src/signal/sigrtmin.o \
./src/signal/sigset.o \
./src/signal/sigsetjmp.o \
./src/signal/sigsetjmp_tail.o \
./src/signal/sigsuspend.o \
./src/signal/sigtimedwait.o \
./src/signal/sigwait.o \
./src/signal/sigwaitinfo.o 


# Each subdirectory must supply rules for building sources it contributes
src/signal/%.o: ../src/signal/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

