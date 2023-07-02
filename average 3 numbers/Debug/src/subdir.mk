################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/average\ 3\ numbers.c 

C_DEPS += \
./src/average\ 3\ numbers.d 

OBJS += \
./src/average\ 3\ numbers.o 


# Each subdirectory must supply rules for building sources it contributes
src/average\ 3\ numbers.o: ../src/average\ 3\ numbers.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/average 3 numbers.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/average\ 3\ numbers.d ./src/average\ 3\ numbers.o

.PHONY: clean-src

