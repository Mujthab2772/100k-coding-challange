################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/large\ number.c 

C_DEPS += \
./src/large\ number.d 

OBJS += \
./src/large\ number.o 


# Each subdirectory must supply rules for building sources it contributes
src/large\ number.o: ../src/large\ number.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/large number.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/large\ number.d ./src/large\ number.o

.PHONY: clean-src

