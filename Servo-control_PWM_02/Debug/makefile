################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include Drivers/STM32H7xx_HAL_Driver/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Servo-control_PWM_02.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Servo-control_PWM_02.list \


# All Target
all: Servo-control_PWM_02.elf secondary-outputs

# Tool invocations
Servo-control_PWM_02.elf: $(OBJS) $(USER_OBJS) C:\Users\ranos\STM32CubeIDE\workspace_1.0.0\Servo-control_PWM_02\STM32H743ZITX_FLASH.ld
	arm-none-eabi-gcc -o "Servo-control_PWM_02.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"C:\Users\ranos\STM32CubeIDE\workspace_1.0.0\Servo-control_PWM_02\STM32H743ZITX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Servo-control_PWM_02.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Servo-control_PWM_02.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Servo-control_PWM_02.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
