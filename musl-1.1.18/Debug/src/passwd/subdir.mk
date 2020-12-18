################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/passwd/fgetgrent.c \
../src/passwd/fgetpwent.c \
../src/passwd/fgetspent.c \
../src/passwd/getgr_a.c \
../src/passwd/getgr_r.c \
../src/passwd/getgrent.c \
../src/passwd/getgrent_a.c \
../src/passwd/getgrouplist.c \
../src/passwd/getpw_a.c \
../src/passwd/getpw_r.c \
../src/passwd/getpwent.c \
../src/passwd/getpwent_a.c \
../src/passwd/getspent.c \
../src/passwd/getspnam.c \
../src/passwd/getspnam_r.c \
../src/passwd/lckpwdf.c \
../src/passwd/nscd_query.c \
../src/passwd/putgrent.c \
../src/passwd/putpwent.c \
../src/passwd/putspent.c 

C_DEPS += \
./src/passwd/fgetgrent.d \
./src/passwd/fgetpwent.d \
./src/passwd/fgetspent.d \
./src/passwd/getgr_a.d \
./src/passwd/getgr_r.d \
./src/passwd/getgrent.d \
./src/passwd/getgrent_a.d \
./src/passwd/getgrouplist.d \
./src/passwd/getpw_a.d \
./src/passwd/getpw_r.d \
./src/passwd/getpwent.d \
./src/passwd/getpwent_a.d \
./src/passwd/getspent.d \
./src/passwd/getspnam.d \
./src/passwd/getspnam_r.d \
./src/passwd/lckpwdf.d \
./src/passwd/nscd_query.d \
./src/passwd/putgrent.d \
./src/passwd/putpwent.d \
./src/passwd/putspent.d 

OBJS += \
./src/passwd/fgetgrent.o \
./src/passwd/fgetpwent.o \
./src/passwd/fgetspent.o \
./src/passwd/getgr_a.o \
./src/passwd/getgr_r.o \
./src/passwd/getgrent.o \
./src/passwd/getgrent_a.o \
./src/passwd/getgrouplist.o \
./src/passwd/getpw_a.o \
./src/passwd/getpw_r.o \
./src/passwd/getpwent.o \
./src/passwd/getpwent_a.o \
./src/passwd/getspent.o \
./src/passwd/getspnam.o \
./src/passwd/getspnam_r.o \
./src/passwd/lckpwdf.o \
./src/passwd/nscd_query.o \
./src/passwd/putgrent.o \
./src/passwd/putpwent.o \
./src/passwd/putspent.o 


# Each subdirectory must supply rules for building sources it contributes
src/passwd/%.o: ../src/passwd/%.c
	arm-none-eabi-gcc -mcpu=cortex-a9 -march=armv7-a -marm -mthumb-interwork -mlittle-endian -mfloat-abi=hard -mfpu=vfpv3-d16 -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wnull-dereference -g3 -Wstack-usage=100 -nostdinc -D_XOPEN_SOURCE=700 -I"C:\trunk_base\trunk\musl-1.1.18\arch\arm" -I"C:\trunk_base\trunk\musl-1.1.18\src\internal" -I"C:\trunk_base\trunk\musl-1.1.18\include" -includevis.h -std=gnu11 -ffreestanding -fexcess-precision=standard -frounding-math -fomit-frame-pointer -fno-unwind-tables -fno-asynchronous-unwind-tables -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

