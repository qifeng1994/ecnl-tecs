################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/misc/a64l.c \
../src/misc/basename.c \
../src/misc/dirname.c \
../src/misc/ffs.c \
../src/misc/ffsl.c \
../src/misc/ffsll.c \
../src/misc/fmtmsg.c \
../src/misc/forkpty.c \
../src/misc/get_current_dir_name.c \
../src/misc/getauxval.c \
../src/misc/getdomainname.c \
../src/misc/gethostid.c \
../src/misc/getopt.c \
../src/misc/getopt_long.c \
../src/misc/getpriority.c \
../src/misc/getresgid.c \
../src/misc/getresuid.c \
../src/misc/getrlimit.c \
../src/misc/getrusage.c \
../src/misc/getsubopt.c \
../src/misc/initgroups.c \
../src/misc/ioctl.c \
../src/misc/issetugid.c \
../src/misc/lockf.c \
../src/misc/login_tty.c \
../src/misc/mntent.c \
../src/misc/nftw.c \
../src/misc/openpty.c \
../src/misc/ptsname.c \
../src/misc/pty.c \
../src/misc/realpath.c \
../src/misc/setdomainname.c \
../src/misc/setpriority.c \
../src/misc/setrlimit.c \
../src/misc/syscall.c \
../src/misc/uname.c \
../src/misc/wordexp.c 

C_DEPS += \
./src/misc/a64l.d \
./src/misc/basename.d \
./src/misc/dirname.d \
./src/misc/ffs.d \
./src/misc/ffsl.d \
./src/misc/ffsll.d \
./src/misc/fmtmsg.d \
./src/misc/forkpty.d \
./src/misc/get_current_dir_name.d \
./src/misc/getauxval.d \
./src/misc/getdomainname.d \
./src/misc/gethostid.d \
./src/misc/getopt.d \
./src/misc/getopt_long.d \
./src/misc/getpriority.d \
./src/misc/getresgid.d \
./src/misc/getresuid.d \
./src/misc/getrlimit.d \
./src/misc/getrusage.d \
./src/misc/getsubopt.d \
./src/misc/initgroups.d \
./src/misc/ioctl.d \
./src/misc/issetugid.d \
./src/misc/lockf.d \
./src/misc/login_tty.d \
./src/misc/mntent.d \
./src/misc/nftw.d \
./src/misc/openpty.d \
./src/misc/ptsname.d \
./src/misc/pty.d \
./src/misc/realpath.d \
./src/misc/setdomainname.d \
./src/misc/setpriority.d \
./src/misc/setrlimit.d \
./src/misc/syscall.d \
./src/misc/uname.d \
./src/misc/wordexp.d 

OBJS += \
./src/misc/a64l.o \
./src/misc/basename.o \
./src/misc/dirname.o \
./src/misc/ffs.o \
./src/misc/ffsl.o \
./src/misc/ffsll.o \
./src/misc/fmtmsg.o \
./src/misc/forkpty.o \
./src/misc/get_current_dir_name.o \
./src/misc/getauxval.o \
./src/misc/getdomainname.o \
./src/misc/gethostid.o \
./src/misc/getopt.o \
./src/misc/getopt_long.o \
./src/misc/getpriority.o \
./src/misc/getresgid.o \
./src/misc/getresuid.o \
./src/misc/getrlimit.o \
./src/misc/getrusage.o \
./src/misc/getsubopt.o \
./src/misc/initgroups.o \
./src/misc/ioctl.o \
./src/misc/issetugid.o \
./src/misc/lockf.o \
./src/misc/login_tty.o \
./src/misc/mntent.o \
./src/misc/nftw.o \
./src/misc/openpty.o \
./src/misc/ptsname.o \
./src/misc/pty.o \
./src/misc/realpath.o \
./src/misc/setdomainname.o \
./src/misc/setpriority.o \
./src/misc/setrlimit.o \
./src/misc/syscall.o \
./src/misc/uname.o \
./src/misc/wordexp.o 


# Each subdirectory must supply rules for building sources it contributes
src/misc/%.o: ../src/misc/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

