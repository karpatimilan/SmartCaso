################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/ST7796/ST7796.c 

C_DEPS += \
./Drivers/ST7796/ST7796.d 

OBJS += \
./Drivers/ST7796/ST7796.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/ST7796/%.o Drivers/ST7796/%.su Drivers/ST7796/%.cyclo: ../Drivers/ST7796/%.c Drivers/ST7796/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xC -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I"C:/Users/peter/STM32CubeIDE/workspace_1.14.1/SmartCaso/Drivers/ST7796" -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-ST7796

clean-Drivers-2f-ST7796:
	-$(RM) ./Drivers/ST7796/ST7796.cyclo ./Drivers/ST7796/ST7796.d ./Drivers/ST7796/ST7796.o ./Drivers/ST7796/ST7796.su

.PHONY: clean-Drivers-2f-ST7796

