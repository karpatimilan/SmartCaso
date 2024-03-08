/*
 * TouchGFX_DataTransfer.c
 *
 *  Created on: Mar 8, 2024
 *      Author: peter
 */



#include "ST7796.h"
#include "TouchGFX_DataTransfer.h"

extern void DisplayDriver_TransferCompleteCallback();

static uint8_t isTransmittingData = 0;

uint32_t touchgfxDisplayDriverTransmitActive(void)
{
	return isTransmittingData;
}

void touchgfxDisplayDriverTransmitBlock(uint8_t* pixels, uint16_t x, uint16_t y, uint16_t w, uint16_t h)
{
	isTransmittingData = 1;
	ST7796_SetWindow(x, y, x+w-1, y+h-1);
	ST7796_DrawBitmap(w, h, pixels);
}

void HAL_SPI_TxCpltCallback(SPI_HandleTypeDef *hspi)
{
	if (hspi->Instance == SPI1) {
		ST7796_EndOfDrawBitmap();
		isTransmittingData = 0;
		DisplayDriver_TransferCompleteCallback();
	}
}
