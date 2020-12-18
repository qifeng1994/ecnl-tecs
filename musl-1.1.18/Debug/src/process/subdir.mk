################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/process/execl.c \
../src/process/execle.c \
../src/process/execlp.c \
../src/process/execv.c \
../src/process/execve.c \
../src/process/execvp.c \
../src/process/fexecve.c \
../src/process/fork.c \
../src/process/posix_spawn.c \
../src/process/posix_spawn_file_actions_addclose.c \
../src/process/posix_spawn_file_actions_adddup2.c \
../src/process/posix_spawn_file_actions_addopen.c \
../src/process/posix_spawn_file_actions_destroy.c \
../src/process/posix_spawn_file_actions_init.c \
../src/process/posix_spawnattr_destroy.c \
../src/process/posix_spawnattr_getflags.c \
../src/process/posix_spawnattr_getpgroup.c \
../src/process/posix_spawnattr_getsigdefault.c \
../src/process/posix_spawnattr_getsigmask.c \
../src/process/posix_spawnattr_init.c \
../src/process/posix_spawnattr_sched.c \
../src/process/posix_spawnattr_setflags.c \
../src/process/posix_spawnattr_setpgroup.c \
../src/process/posix_spawnattr_setsigdefault.c \
../src/process/posix_spawnattr_setsigmask.c \
../src/process/posix_spawnp.c \
../src/process/system.c \
../src/process/vfork.c \
../src/process/wait.c \
../src/process/waitid.c \
../src/process/waitpid.c 

C_DEPS += \
./src/process/execl.d \
./src/process/execle.d \
./src/process/execlp.d \
./src/process/execv.d \
./src/process/execve.d \
./src/process/execvp.d \
./src/process/fexecve.d \
./src/process/fork.d \
./src/process/posix_spawn.d \
./src/process/posix_spawn_file_actions_addclose.d \
./src/process/posix_spawn_file_actions_adddup2.d \
./src/process/posix_spawn_file_actions_addopen.d \
./src/process/posix_spawn_file_actions_destroy.d \
./src/process/posix_spawn_file_actions_init.d \
./src/process/posix_spawnattr_destroy.d \
./src/process/posix_spawnattr_getflags.d \
./src/process/posix_spawnattr_getpgroup.d \
./src/process/posix_spawnattr_getsigdefault.d \
./src/process/posix_spawnattr_getsigmask.d \
./src/process/posix_spawnattr_init.d \
./src/process/posix_spawnattr_sched.d \
./src/process/posix_spawnattr_setflags.d \
./src/process/posix_spawnattr_setpgroup.d \
./src/process/posix_spawnattr_setsigdefault.d \
./src/process/posix_spawnattr_setsigmask.d \
./src/process/posix_spawnp.d \
./src/process/system.d \
./src/process/vfork.d \
./src/process/wait.d \
./src/process/waitid.d \
./src/process/waitpid.d 

OBJS += \
./src/process/execl.o \
./src/process/execle.o \
./src/process/execlp.o \
./src/process/execv.o \
./src/process/execve.o \
./src/process/execvp.o \
./src/process/fexecve.o \
./src/process/fork.o \
./src/process/posix_spawn.o \
./src/process/posix_spawn_file_actions_addclose.o \
./src/process/posix_spawn_file_actions_adddup2.o \
./src/process/posix_spawn_file_actions_addopen.o \
./src/process/posix_spawn_file_actions_destroy.o \
./src/process/posix_spawn_file_actions_init.o \
./src/process/posix_spawnattr_destroy.o \
./src/process/posix_spawnattr_getflags.o \
./src/process/posix_spawnattr_getpgroup.o \
./src/process/posix_spawnattr_getsigdefault.o \
./src/process/posix_spawnattr_getsigmask.o \
./src/process/posix_spawnattr_init.o \
./src/process/posix_spawnattr_sched.o \
./src/process/posix_spawnattr_setflags.o \
./src/process/posix_spawnattr_setpgroup.o \
./src/process/posix_spawnattr_setsigdefault.o \
./src/process/posix_spawnattr_setsigmask.o \
./src/process/posix_spawnp.o \
./src/process/system.o \
./src/process/vfork.o \
./src/process/wait.o \
./src/process/waitid.o \
./src/process/waitpid.o 


# Each subdirectory must supply rules for building sources it contributes
src/process/%.o: ../src/process/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

