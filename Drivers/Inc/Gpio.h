/*
 * Gpio.h
 *
 *  Created on: May 8, 2024
 *      Author: rohanguraja
 */

#ifndef INC_GPIO_H_
#define INC_GPIO_H_
#include "Stm32f303xx.h"


typedef struct
{
	uint8_t Pin_Number;
	uint8_t Pin_Mode;
	uint8_t Pin_PuPd;
	uint8_t Pin_Otype;
	uint8_t Pin_AltFunction;
	uint8_t Pin_Speed;
}GPIO_Config_t;


typedef struct
{
	GPIO_RegDef_t *pGpiox;
	GPIO_Config_t pGpio_Config;
}GPIO_Handle_t;


uint8_t GPIO_Clock_Control(GPIO_Handle_t *pGpio_handler, uint8_t Enable);
void GPIO_Init(GPIO_Handle_t *pGpio);
void GPIO_Write_Pin(GPIO_Handle_t *pGpio);
void GPIO_Read_Pin(GPIO_Handle_t *pGpio);
void GPIO_Set_ALfunction(GPIO_Handle_t *pGpio);
void GPIO_Set_IRQ(GPIO_Handle_t *pGpio);


#endif /* INC_GPIO_H_ */
