################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Assignment\ day3\ 3.c 

C_DEPS += \
./src/Assignment\ day3\ 3.d 

OBJS += \
./src/Assignment\ day3\ 3.o 


# Each subdirectory must supply rules for building sources it contributes
src/Assignment\ day3\ 3.o: ../src/Assignment\ day3\ 3.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Assignment day3 3.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Assignment\ day3\ 3.d ./src/Assignment\ day3\ 3.o

.PHONY: clean-src

