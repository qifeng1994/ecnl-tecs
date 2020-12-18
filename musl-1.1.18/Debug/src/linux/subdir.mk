################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/linux/adjtime.c \
../src/linux/adjtimex.c \
../src/linux/arch_prctl.c \
../src/linux/brk.c \
../src/linux/cache.c \
../src/linux/cap.c \
../src/linux/chroot.c \
../src/linux/clock_adjtime.c \
../src/linux/clone.c \
../src/linux/epoll.c \
../src/linux/eventfd.c \
../src/linux/fallocate.c \
../src/linux/fanotify.c \
../src/linux/flock.c \
../src/linux/inotify.c \
../src/linux/ioperm.c \
../src/linux/iopl.c \
../src/linux/klogctl.c \
../src/linux/module.c \
../src/linux/mount.c \
../src/linux/personality.c \
../src/linux/pivot_root.c \
../src/linux/ppoll.c \
../src/linux/prctl.c \
../src/linux/prlimit.c \
../src/linux/process_vm.c \
../src/linux/ptrace.c \
../src/linux/quotactl.c \
../src/linux/readahead.c \
../src/linux/reboot.c \
../src/linux/remap_file_pages.c \
../src/linux/sbrk.c \
../src/linux/sendfile.c \
../src/linux/setfsgid.c \
../src/linux/setfsuid.c \
../src/linux/setgroups.c \
../src/linux/sethostname.c \
../src/linux/setns.c \
../src/linux/settimeofday.c \
../src/linux/signalfd.c \
../src/linux/splice.c \
../src/linux/stime.c \
../src/linux/swap.c \
../src/linux/sync_file_range.c \
../src/linux/syncfs.c \
../src/linux/sysinfo.c \
../src/linux/tee.c \
../src/linux/timerfd.c \
../src/linux/unshare.c \
../src/linux/utimes.c \
../src/linux/vhangup.c \
../src/linux/vmsplice.c \
../src/linux/wait3.c \
../src/linux/wait4.c \
../src/linux/xattr.c 

C_DEPS += \
./src/linux/adjtime.d \
./src/linux/adjtimex.d \
./src/linux/arch_prctl.d \
./src/linux/brk.d \
./src/linux/cache.d \
./src/linux/cap.d \
./src/linux/chroot.d \
./src/linux/clock_adjtime.d \
./src/linux/clone.d \
./src/linux/epoll.d \
./src/linux/eventfd.d \
./src/linux/fallocate.d \
./src/linux/fanotify.d \
./src/linux/flock.d \
./src/linux/inotify.d \
./src/linux/ioperm.d \
./src/linux/iopl.d \
./src/linux/klogctl.d \
./src/linux/module.d \
./src/linux/mount.d \
./src/linux/personality.d \
./src/linux/pivot_root.d \
./src/linux/ppoll.d \
./src/linux/prctl.d \
./src/linux/prlimit.d \
./src/linux/process_vm.d \
./src/linux/ptrace.d \
./src/linux/quotactl.d \
./src/linux/readahead.d \
./src/linux/reboot.d \
./src/linux/remap_file_pages.d \
./src/linux/sbrk.d \
./src/linux/sendfile.d \
./src/linux/setfsgid.d \
./src/linux/setfsuid.d \
./src/linux/setgroups.d \
./src/linux/sethostname.d \
./src/linux/setns.d \
./src/linux/settimeofday.d \
./src/linux/signalfd.d \
./src/linux/splice.d \
./src/linux/stime.d \
./src/linux/swap.d \
./src/linux/sync_file_range.d \
./src/linux/syncfs.d \
./src/linux/sysinfo.d \
./src/linux/tee.d \
./src/linux/timerfd.d \
./src/linux/unshare.d \
./src/linux/utimes.d \
./src/linux/vhangup.d \
./src/linux/vmsplice.d \
./src/linux/wait3.d \
./src/linux/wait4.d \
./src/linux/xattr.d 

OBJS += \
./src/linux/adjtime.o \
./src/linux/adjtimex.o \
./src/linux/arch_prctl.o \
./src/linux/brk.o \
./src/linux/cache.o \
./src/linux/cap.o \
./src/linux/chroot.o \
./src/linux/clock_adjtime.o \
./src/linux/clone.o \
./src/linux/epoll.o \
./src/linux/eventfd.o \
./src/linux/fallocate.o \
./src/linux/fanotify.o \
./src/linux/flock.o \
./src/linux/inotify.o \
./src/linux/ioperm.o \
./src/linux/iopl.o \
./src/linux/klogctl.o \
./src/linux/module.o \
./src/linux/mount.o \
./src/linux/personality.o \
./src/linux/pivot_root.o \
./src/linux/ppoll.o \
./src/linux/prctl.o \
./src/linux/prlimit.o \
./src/linux/process_vm.o \
./src/linux/ptrace.o \
./src/linux/quotactl.o \
./src/linux/readahead.o \
./src/linux/reboot.o \
./src/linux/remap_file_pages.o \
./src/linux/sbrk.o \
./src/linux/sendfile.o \
./src/linux/setfsgid.o \
./src/linux/setfsuid.o \
./src/linux/setgroups.o \
./src/linux/sethostname.o \
./src/linux/setns.o \
./src/linux/settimeofday.o \
./src/linux/signalfd.o \
./src/linux/splice.o \
./src/linux/stime.o \
./src/linux/swap.o \
./src/linux/sync_file_range.o \
./src/linux/syncfs.o \
./src/linux/sysinfo.o \
./src/linux/tee.o \
./src/linux/timerfd.o \
./src/linux/unshare.o \
./src/linux/utimes.o \
./src/linux/vhangup.o \
./src/linux/vmsplice.o \
./src/linux/wait3.o \
./src/linux/wait4.o \
./src/linux/xattr.o 


# Each subdirectory must supply rules for building sources it contributes
src/linux/%.o: ../src/linux/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

