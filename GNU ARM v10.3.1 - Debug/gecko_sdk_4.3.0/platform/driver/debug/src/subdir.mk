################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk/platform/driver/debug/src/sl_debug_swo.c 

OBJS += \
./gecko_sdk_4.3.0/platform/driver/debug/src/sl_debug_swo.o 

C_DEPS += \
./gecko_sdk_4.3.0/platform/driver/debug/src/sl_debug_swo.d 


# Each subdirectory must supply rules for building sources it contributes
gecko_sdk_4.3.0/platform/driver/debug/src/sl_debug_swo.o: C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk/platform/driver/debug/src/sl_debug_swo.c gecko_sdk_4.3.0/platform/driver/debug/src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m33 -mthumb -std=c99 '-DDEBUG=1' '-DDEBUG_EFM=1' '-DZGM230SB27HGN=1' '-DHARDWARE_BOARD_DEFAULT_RF_BAND_868=1' '-DHARDWARE_BOARD_SUPPORTS_3_RF_BANDS=1' '-DHARDWARE_BOARD_SUPPORTS_RF_BAND_868=1' '-DHARDWARE_BOARD_SUPPORTS_RF_BAND_914=1' '-DHARDWARE_BOARD_SUPPORTS_RF_BAND_924=1' '-DSL_BOARD_NAME="BRD4205B"' '-DSL_BOARD_REV="A00"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"D:\FSOFT\SPECTRUM\Workspace\Final_RTOS_Demo\Handle_event" -I"D:\FSOFT\SPECTRUM\Workspace\Final_RTOS_Demo\config" -I"D:\FSOFT\SPECTRUM\Workspace\Final_RTOS_Demo\autogen" -I"D:\FSOFT\SPECTRUM\Workspace\Final_RTOS_Demo" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/ZGM23/Include" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//app/common/util/app_assert" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/RTOS2/Include" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//hardware/driver/configuration_over_swo/inc" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/glib/dmd" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/glib" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//util/third_party/freertos/cmsis/Include" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//util/third_party/freertos/kernel/include" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//util/third_party/freertos/kernel/portable/GCC/ARM_CM33_NTZ/non_secure" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/middleware/glib/glib" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/driver/i2cspm/inc" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//hardware/driver/joystick/inc" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//hardware/driver/memlcd/src/ls013b7dh03" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//hardware/driver/memlcd/inc" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//hardware/driver/memlcd/inc/memlcd_usart" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//hardware/driver/mx25_flash_shutdown/inc/sl_mx25_flash_shutdown_usart" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/peripheral/inc" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//app/bluetooth/common/sensor_rht" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//app/bluetooth/common/sensor_select" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//hardware/driver/si70xx/inc" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -I"C:/Users/kien2/SimplicityStudio/SDKs/gecko_sdk//platform/service/udelay/inc" -Os -Wall -Wextra -mno-sched-prolog -fno-builtin -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mcmse --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"gecko_sdk_4.3.0/platform/driver/debug/src/sl_debug_swo.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


