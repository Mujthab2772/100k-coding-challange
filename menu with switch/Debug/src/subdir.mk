################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/menu\ with\ switch.c 

C_DEPS += \
./src/menu\ with\ switch.d 

OBJS += \
./src/menu\ with\ switch.o 


# Each subdirectory must supply rules for building sources it contributes
src/menu\ with\ switch.o: ../src/menu\ with\ switch.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/menu with switch.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/menu\ with\ switch.d ./src/menu\ with\ switch.o

.PHONY: clean-src

