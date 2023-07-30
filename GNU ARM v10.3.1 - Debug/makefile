################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include gecko_sdk_4.3.0/util/third_party/freertos/kernel/portable/MemMang/subdir.mk
-include gecko_sdk_4.3.0/util/third_party/freertos/kernel/portable/GCC/ARM_CM33_NTZ/non_secure/subdir.mk
-include gecko_sdk_4.3.0/util/third_party/freertos/kernel/subdir.mk
-include gecko_sdk_4.3.0/util/third_party/freertos/cmsis/Source/subdir.mk
-include gecko_sdk_4.3.0/platform/service/udelay/src/subdir.mk
-include gecko_sdk_4.3.0/platform/service/system/src/subdir.mk
-include gecko_sdk_4.3.0/platform/service/sleeptimer/src/subdir.mk
-include gecko_sdk_4.3.0/platform/service/device_init/src/subdir.mk
-include gecko_sdk_4.3.0/platform/peripheral/src/subdir.mk
-include gecko_sdk_4.3.0/platform/middleware/glib/glib/subdir.mk
-include gecko_sdk_4.3.0/platform/middleware/glib/fonts/subdir.mk
-include gecko_sdk_4.3.0/platform/middleware/glib/dmd/display/subdir.mk
-include gecko_sdk_4.3.0/platform/emlib/src/subdir.mk
-include gecko_sdk_4.3.0/platform/emdrv/gpiointerrupt/src/subdir.mk
-include gecko_sdk_4.3.0/platform/driver/leddrv/src/subdir.mk
-include gecko_sdk_4.3.0/platform/driver/i2cspm/src/subdir.mk
-include gecko_sdk_4.3.0/platform/driver/debug/src/subdir.mk
-include gecko_sdk_4.3.0/platform/driver/button/src/subdir.mk
-include gecko_sdk_4.3.0/platform/common/toolchain/src/subdir.mk
-include gecko_sdk_4.3.0/platform/common/src/subdir.mk
-include gecko_sdk_4.3.0/platform/Device/SiliconLabs/ZGM23/Source/subdir.mk
-include gecko_sdk_4.3.0/platform/CMSIS/RTOS2/Source/subdir.mk
-include gecko_sdk_4.3.0/hardware/driver/si70xx/src/subdir.mk
-include gecko_sdk_4.3.0/hardware/driver/mx25_flash_shutdown/src/sl_mx25_flash_shutdown_usart/subdir.mk
-include gecko_sdk_4.3.0/hardware/driver/memlcd/src/memlcd_usart/subdir.mk
-include gecko_sdk_4.3.0/hardware/driver/memlcd/src/subdir.mk
-include gecko_sdk_4.3.0/hardware/driver/joystick/src/subdir.mk
-include gecko_sdk_4.3.0/hardware/driver/configuration_over_swo/src/subdir.mk
-include gecko_sdk_4.3.0/hardware/board/src/subdir.mk
-include gecko_sdk_4.3.0/app/bluetooth/common/sensor_select/subdir.mk
-include gecko_sdk_4.3.0/app/bluetooth/common/sensor_rht/subdir.mk
-include autogen/subdir.mk
-include Handle_event/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := Final_RTOS_Demo
BUILD_ARTIFACT_EXTENSION := axf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: main-build

# Main-build Target
main-build: Final_RTOS_Demo.axf

# Tool invocations
Final_RTOS_Demo.axf: $(OBJS) $(USER_OBJS) makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m33 -mthumb -T "D:\FSOFT\SPECTRUM\Workspace\Final_RTOS_Demo\autogen\linkerfile.ld" -Xlinker --gc-sections -Xlinker -Map="Final_RTOS_Demo.map" -mfpu=fpv5-sp-d16 -mfloat-abi=hard --specs=nano.specs -o Final_RTOS_Demo.axf -Wl,--start-group "./Handle_event/I2C_handle.o" "./Handle_event/TFT.o" "./Handle_event/blink.o" "./Handle_event/button.o" "./RTOS_test.o" "./app.o" "./main.o" "./autogen/sl_board_default_init.o" "./autogen/sl_device_init_clocks.o" "./autogen/sl_event_handler.o" "./autogen/sl_i2cspm_init.o" "./autogen/sl_simple_button_instances.o" "./autogen/sl_simple_led_instances.o" "./gecko_sdk_4.3.0/app/bluetooth/common/sensor_rht/sl_sensor_rht.o" "./gecko_sdk_4.3.0/app/bluetooth/common/sensor_select/sl_sensor_select.o" "./gecko_sdk_4.3.0/hardware/board/src/sl_board_control_gpio.o" "./gecko_sdk_4.3.0/hardware/board/src/sl_board_init.o" "./gecko_sdk_4.3.0/hardware/driver/configuration_over_swo/src/sl_cos.o" "./gecko_sdk_4.3.0/hardware/driver/joystick/src/sl_joystick.o" "./gecko_sdk_4.3.0/hardware/driver/memlcd/src/memlcd_usart/sl_memlcd_spi.o" "./gecko_sdk_4.3.0/hardware/driver/memlcd/src/sl_memlcd.o" "./gecko_sdk_4.3.0/hardware/driver/memlcd/src/sl_memlcd_display.o" "./gecko_sdk_4.3.0/hardware/driver/mx25_flash_shutdown/src/sl_mx25_flash_shutdown_usart/sl_mx25_flash_shutdown.o" "./gecko_sdk_4.3.0/hardware/driver/si70xx/src/sl_si70xx.o" "./gecko_sdk_4.3.0/platform/CMSIS/RTOS2/Source/os_systick.o" "./gecko_sdk_4.3.0/platform/Device/SiliconLabs/ZGM23/Source/startup_zgm23.o" "./gecko_sdk_4.3.0/platform/Device/SiliconLabs/ZGM23/Source/system_zgm23.o" "./gecko_sdk_4.3.0/platform/common/src/sl_assert.o" "./gecko_sdk_4.3.0/platform/common/toolchain/src/sl_memory.o" "./gecko_sdk_4.3.0/platform/driver/button/src/sl_button.o" "./gecko_sdk_4.3.0/platform/driver/button/src/sl_simple_button.o" "./gecko_sdk_4.3.0/platform/driver/debug/src/sl_debug_swo.o" "./gecko_sdk_4.3.0/platform/driver/i2cspm/src/sl_i2cspm.o" "./gecko_sdk_4.3.0/platform/driver/leddrv/src/sl_led.o" "./gecko_sdk_4.3.0/platform/driver/leddrv/src/sl_simple_led.o" "./gecko_sdk_4.3.0/platform/emdrv/gpiointerrupt/src/gpiointerrupt.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_burtc.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_cmu.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_core.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_emu.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_gpio.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_i2c.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_iadc.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_msc.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_prs.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_system.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_timer.o" "./gecko_sdk_4.3.0/platform/emlib/src/em_usart.o" "./gecko_sdk_4.3.0/platform/middleware/glib/dmd/display/dmd_memlcd.o" "./gecko_sdk_4.3.0/platform/middleware/glib/fonts/glib_font_narrow_6x8.o" "./gecko_sdk_4.3.0/platform/middleware/glib/fonts/glib_font_normal_8x8.o" "./gecko_sdk_4.3.0/platform/middleware/glib/fonts/glib_font_number_16x20.o" "./gecko_sdk_4.3.0/platform/middleware/glib/glib/bmp.o" "./gecko_sdk_4.3.0/platform/middleware/glib/glib/glib.o" "./gecko_sdk_4.3.0/platform/middleware/glib/glib/glib_bitmap.o" "./gecko_sdk_4.3.0/platform/middleware/glib/glib/glib_circle.o" "./gecko_sdk_4.3.0/platform/middleware/glib/glib/glib_line.o" "./gecko_sdk_4.3.0/platform/middleware/glib/glib/glib_polygon.o" "./gecko_sdk_4.3.0/platform/middleware/glib/glib/glib_rectangle.o" "./gecko_sdk_4.3.0/platform/middleware/glib/glib/glib_string.o" "./gecko_sdk_4.3.0/platform/peripheral/src/peripheral_sysrtc.o" "./gecko_sdk_4.3.0/platform/service/device_init/src/sl_device_init_dcdc_s2.o" "./gecko_sdk_4.3.0/platform/service/device_init/src/sl_device_init_emu_s2.o" "./gecko_sdk_4.3.0/platform/service/device_init/src/sl_device_init_hfxo_s2.o" "./gecko_sdk_4.3.0/platform/service/device_init/src/sl_device_init_nvic.o" "./gecko_sdk_4.3.0/platform/service/sleeptimer/src/sl_sleeptimer.o" "./gecko_sdk_4.3.0/platform/service/sleeptimer/src/sl_sleeptimer_hal_burtc.o" "./gecko_sdk_4.3.0/platform/service/sleeptimer/src/sl_sleeptimer_hal_sysrtc.o" "./gecko_sdk_4.3.0/platform/service/sleeptimer/src/sl_sleeptimer_hal_timer.o" "./gecko_sdk_4.3.0/platform/service/system/src/sl_system_init.o" "./gecko_sdk_4.3.0/platform/service/system/src/sl_system_kernel.o" "./gecko_sdk_4.3.0/platform/service/udelay/src/sl_udelay.o" "./gecko_sdk_4.3.0/platform/service/udelay/src/sl_udelay_armv6m_gcc.o" "./gecko_sdk_4.3.0/util/third_party/freertos/cmsis/Source/cmsis_os2.o" "./gecko_sdk_4.3.0/util/third_party/freertos/kernel/croutine.o" "./gecko_sdk_4.3.0/util/third_party/freertos/kernel/event_groups.o" "./gecko_sdk_4.3.0/util/third_party/freertos/kernel/list.o" "./gecko_sdk_4.3.0/util/third_party/freertos/kernel/queue.o" "./gecko_sdk_4.3.0/util/third_party/freertos/kernel/stream_buffer.o" "./gecko_sdk_4.3.0/util/third_party/freertos/kernel/tasks.o" "./gecko_sdk_4.3.0/util/third_party/freertos/kernel/timers.o" "./gecko_sdk_4.3.0/util/third_party/freertos/kernel/portable/GCC/ARM_CM33_NTZ/non_secure/port.o" "./gecko_sdk_4.3.0/util/third_party/freertos/kernel/portable/GCC/ARM_CM33_NTZ/non_secure/portasm.o" "./gecko_sdk_4.3.0/util/third_party/freertos/kernel/portable/MemMang/heap_4.o" -lgcc -lc -lm -lnosys -Wl,--end-group -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building out file: Final_RTOS_Demo.out'
	arm-none-eabi-objcopy "Final_RTOS_Demo.axf" "Final_RTOS_Demo.out"
	@echo ' '

	@echo 'Building hex file: Final_RTOS_Demo.hex'
	arm-none-eabi-objcopy -O ihex "Final_RTOS_Demo.axf" "Final_RTOS_Demo.hex"
	@echo ' '

	@echo 'Building bin file: Final_RTOS_Demo.bin'
	arm-none-eabi-objcopy -O binary "Final_RTOS_Demo.axf" "Final_RTOS_Demo.bin"
	@echo ' '

	@echo 'Building s37 file: Final_RTOS_Demo.s37'
	arm-none-eabi-objcopy -O srec "Final_RTOS_Demo.axf" "Final_RTOS_Demo.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "Final_RTOS_Demo.axf" -A
	@echo ' '

# Other Targets
clean:
	-@$(foreach FILE, $(EXECUTABLES), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(OBJS), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(C_DEPS), $(shell $(RM) $(FILE)) )
	-$(RM) Final_RTOS_Demo.axf
	-@echo ' '

.PHONY: all clean dependents main-build

-include ../makefile.targets
