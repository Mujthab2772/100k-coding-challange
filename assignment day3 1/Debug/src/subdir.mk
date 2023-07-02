################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/assignment\ day3\ 1.c 

C_DEPS += \
./src/assignment\ day3\ 1.d 

OBJS += \
./src/assignment\ day3\ 1.o 


# Each subdirectory must supply rules for building sources it contributes
src/assignment\ day3\ 1.o: ../src/assignment\ day3\ 1.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/assignment day3 1.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/assignment\ day3\ 1.d ./src/assignment\ day3\ 1.o

.PHONY: clean-src

