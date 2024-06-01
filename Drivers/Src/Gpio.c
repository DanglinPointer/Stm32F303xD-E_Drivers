/*
 * Gpio.c
 *
 *  Created on: May 8, 2024
 *      Author: rohanguraja
 */


#include "Gpio.h"


uint8_t GPIO_Clock_Control(GPIO_Handle_t *pGpio_handler, uint8_t Enable)
{
	if(Enable)
	{
		if(pGpio_handler->pGpiox == GPIOA)
		{
			GPIOA_PCLK_EN();
		}
		else if(pGpio_handler->pGpiox == GPIOB)
		{
			GPIOB_PCLK_EN();
		}
		else if(pGpio_handler->pGpiox == GPIOC)
		{
			GPIOC_PCLK_EN();
		}
		else if(pGpio_handler->pGpiox == GPIOD)
		{
			GPIOD_PCLK_EN();
		}
		else if(pGpio_handler->pGpiox == GPIOE)
		{
			GPIOE_PCLK_EN();
		}
		else if(pGpio_handler->pGpiox == GPIOF)
		{
			GPIOF_PCLK_EN();
		}
		else if(pGpio_handler->pGpiox == GPIOG)
		{
			GPIOG_PCLK_EN();
		}
		else if(pGpio_handler->pGpiox == GPIOH)
		{
			GPIOH_PCLK_EN();
		}
		else{
			return -1;
		}

	}
	else
	{
		if(pGpio_handler->pGpiox == GPIOA)
		{
			GPIOA_PCLK_DIS();
		}
		else if(pGpio_handler->pGpiox == GPIOB)
		{
			GPIOB_PCLK_DIS();
		}
		else if(pGpio_handler->pGpiox == GPIOC)
		{
			GPIOC_PCLK_DIS();
		}
		else if(pGpio_handler->pGpiox == GPIOD)
		{
			GPIOB_PCLK_DIS();
		}
		else if(pGpio_handler->pGpiox == GPIOE)
		{
			GPIOB_PCLK_DIS();
		}
		else if(pGpio_handler->pGpiox == GPIOF)
		{
			GPIOB_PCLK_DIS();
		}
		else if(pGpio_handler->pGpiox == GPIOG)
		{
			GPIOB_PCLK_DIS();
		}
		else if(pGpio_handler->pGpiox == GPIOH)
		{
			GPIOB_PCLK_DIS();
		}
		else
		{
			return -1;
		}
	}
	return 0;
}
