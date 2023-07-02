################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/sample\ 100k.c 

C_DEPS += \
./src/sample\ 100k.d 

OBJS += \
./src/sample\ 100k.o 


# Each subdirectory must supply rules for building sources it contributes
src/sample\ 100k.o: ../src/sample\ 100k.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/sample 100k.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/sample\ 100k.d ./src/sample\ 100k.o

.PHONY: clean-src

