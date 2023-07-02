################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/largest\ among\ 3\ numbers.c 

C_DEPS += \
./src/largest\ among\ 3\ numbers.d 

OBJS += \
./src/largest\ among\ 3\ numbers.o 


# Each subdirectory must supply rules for building sources it contributes
src/largest\ among\ 3\ numbers.o: ../src/largest\ among\ 3\ numbers.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/largest among 3 numbers.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/largest\ among\ 3\ numbers.d ./src/largest\ among\ 3\ numbers.o

.PHONY: clean-src

