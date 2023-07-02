################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/sample\ output.c 

C_DEPS += \
./src/sample\ output.d 

OBJS += \
./src/sample\ output.o 


# Each subdirectory must supply rules for building sources it contributes
src/sample\ output.o: ../src/sample\ output.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/sample output.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/sample\ output.d ./src/sample\ output.o

.PHONY: clean-src

