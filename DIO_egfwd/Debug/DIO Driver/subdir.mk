################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DIO\ Driver/dio.c 

OBJS += \
./DIO\ Driver/dio.o 

C_DEPS += \
./DIO\ Driver/dio.d 


# Each subdirectory must supply rules for building sources it contributes
DIO\ Driver/dio.o: ../DIO\ Driver/dio.c DIO\ Driver/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"DIO Driver/dio.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


