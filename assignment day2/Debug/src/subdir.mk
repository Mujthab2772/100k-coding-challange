################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/assignment\ day2.c 

C_DEPS += \
./src/assignment\ day2.d 

OBJS += \
./src/assignment\ day2.o 


# Each subdirectory must supply rules for building sources it contributes
src/assignment\ day2.o: ../src/assignment\ day2.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/assignment day2.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/assignment\ day2.d ./src/assignment\ day2.o

.PHONY: clean-src

