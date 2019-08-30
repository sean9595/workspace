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
Robotic_arm_project_sm_control.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Robotic_arm_project_sm_control.list \


# All Target
all: Robotic_arm_project_sm_control.elf secondary-outputs

# Tool invocations
Robotic_arm_project_sm_control.elf: $(OBJS) $(USER_OBJS) C:\Users\ranos\STM32CubeIDE\workspace_1.0.0\Robotic_arm_project_sm_control\STM32H743ZITX_FLASH.ld
	arm-none-eabi-gcc -o "Robotic_arm_project_sm_control.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"C:\Users\ranos\STM32CubeIDE\workspace_1.0.0\Robotic_arm_project_sm_control\STM32H743ZITX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Robotic_arm_project_sm_control.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Robotic_arm_project_sm_control.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Robotic_arm_project_sm_control.list"
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
