################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/base\ mathemathics\ choice.c 

C_DEPS += \
./src/base\ mathemathics\ choice.d 

OBJS += \
./src/base\ mathemathics\ choice.o 


# Each subdirectory must supply rules for building sources it contributes
src/base\ mathemathics\ choice.o: ../src/base\ mathemathics\ choice.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/base mathemathics choice.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/base\ mathemathics\ choice.d ./src/base\ mathemathics\ choice.o

.PHONY: clean-src

