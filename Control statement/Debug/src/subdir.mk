################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Control\ statement.c 

C_DEPS += \
./src/Control\ statement.d 

OBJS += \
./src/Control\ statement.o 


# Each subdirectory must supply rules for building sources it contributes
src/Control\ statement.o: ../src/Control\ statement.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Control statement.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Control\ statement.d ./src/Control\ statement.o

.PHONY: clean-src

