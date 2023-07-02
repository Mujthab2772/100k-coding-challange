################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/sample\ input.c 

C_DEPS += \
./src/sample\ input.d 

OBJS += \
./src/sample\ input.o 


# Each subdirectory must supply rules for building sources it contributes
src/sample\ input.o: ../src/sample\ input.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/sample input.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/sample\ input.d ./src/sample\ input.o

.PHONY: clean-src

