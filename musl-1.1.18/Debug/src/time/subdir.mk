################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/time/__asctime.c \
../src/time/__map_file.c \
../src/time/__month_to_secs.c \
../src/time/__secs_to_tm.c \
../src/time/__tm_to_secs.c \
../src/time/__tz.c \
../src/time/__year_to_secs.c \
../src/time/asctime.c \
../src/time/asctime_r.c \
../src/time/clock.c \
../src/time/clock_getcpuclockid.c \
../src/time/clock_getres.c \
../src/time/clock_gettime.c \
../src/time/clock_nanosleep.c \
../src/time/clock_settime.c \
../src/time/ctime.c \
../src/time/ctime_r.c \
../src/time/difftime.c \
../src/time/ftime.c \
../src/time/getdate.c \
../src/time/gettimeofday.c \
../src/time/gmtime.c \
../src/time/gmtime_r.c \
../src/time/localtime.c \
../src/time/localtime_r.c \
../src/time/mktime.c \
../src/time/nanosleep.c \
../src/time/strftime.c \
../src/time/strptime.c \
../src/time/time.c \
../src/time/timegm.c \
../src/time/timer_create.c \
../src/time/timer_delete.c \
../src/time/timer_getoverrun.c \
../src/time/timer_gettime.c \
../src/time/timer_settime.c \
../src/time/times.c \
../src/time/timespec_get.c \
../src/time/utime.c \
../src/time/wcsftime.c 

C_DEPS += \
./src/time/__asctime.d \
./src/time/__map_file.d \
./src/time/__month_to_secs.d \
./src/time/__secs_to_tm.d \
./src/time/__tm_to_secs.d \
./src/time/__tz.d \
./src/time/__year_to_secs.d \
./src/time/asctime.d \
./src/time/asctime_r.d \
./src/time/clock.d \
./src/time/clock_getcpuclockid.d \
./src/time/clock_getres.d \
./src/time/clock_gettime.d \
./src/time/clock_nanosleep.d \
./src/time/clock_settime.d \
./src/time/ctime.d \
./src/time/ctime_r.d \
./src/time/difftime.d \
./src/time/ftime.d \
./src/time/getdate.d \
./src/time/gettimeofday.d \
./src/time/gmtime.d \
./src/time/gmtime_r.d \
./src/time/localtime.d \
./src/time/localtime_r.d \
./src/time/mktime.d \
./src/time/nanosleep.d \
./src/time/strftime.d \
./src/time/strptime.d \
./src/time/time.d \
./src/time/timegm.d \
./src/time/timer_create.d \
./src/time/timer_delete.d \
./src/time/timer_getoverrun.d \
./src/time/timer_gettime.d \
./src/time/timer_settime.d \
./src/time/times.d \
./src/time/timespec_get.d \
./src/time/utime.d \
./src/time/wcsftime.d 

OBJS += \
./src/time/__asctime.o \
./src/time/__map_file.o \
./src/time/__month_to_secs.o \
./src/time/__secs_to_tm.o \
./src/time/__tm_to_secs.o \
./src/time/__tz.o \
./src/time/__year_to_secs.o \
./src/time/asctime.o \
./src/time/asctime_r.o \
./src/time/clock.o \
./src/time/clock_getcpuclockid.o \
./src/time/clock_getres.o \
./src/time/clock_gettime.o \
./src/time/clock_nanosleep.o \
./src/time/clock_settime.o \
./src/time/ctime.o \
./src/time/ctime_r.o \
./src/time/difftime.o \
./src/time/ftime.o \
./src/time/getdate.o \
./src/time/gettimeofday.o \
./src/time/gmtime.o \
./src/time/gmtime_r.o \
./src/time/localtime.o \
./src/time/localtime_r.o \
./src/time/mktime.o \
./src/time/nanosleep.o \
./src/time/strftime.o \
./src/time/strptime.o \
./src/time/time.o \
./src/time/timegm.o \
./src/time/timer_create.o \
./src/time/timer_delete.o \
./src/time/timer_getoverrun.o \
./src/time/timer_gettime.o \
./src/time/timer_settime.o \
./src/time/times.o \
./src/time/timespec_get.o \
./src/time/utime.o \
./src/time/wcsftime.o 


# Each subdirectory must supply rules for building sources it contributes
src/time/%.o: ../src/time/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

