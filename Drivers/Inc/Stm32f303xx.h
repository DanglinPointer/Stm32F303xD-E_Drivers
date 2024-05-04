/*
 * Stm32f303xx.h
 *
 *  Created on: May 3, 2024
 *      Author: rohanguraja
 */

#ifndef INC_STM32F303XX_H_
#define INC_STM32F303XX_H_


//Flash and RAM Memory Address defiitions

//Base Addresses of buses
#define AHB1_BASE_ADDR			(0x40020000)U
#define AHB2_BASE_ADDR			(0x48000000)U
#define AHB3_BASE_ADDR			(0x50000000)U
#define AHB4_BASE_ADDR			(0x60000000)U
#define APB1_BASE_ADDR			(0x40000000)U
#define APB2_BASE_ADDR			(0x40010000)U



//System clock addressses definitions
#define RCC_BASE_ADDR			(AHB1_BASE_ADDR + 0x1000)

//Peripherals base address

//GPIO base address
#define GPIOA_BASE_ADDR		(AHB2_BASE_ADDR + 0x0000)
#define GPIOB_BASE_ADDR		(AHB2_BASE_ADDR + 0x0400)
#define GPIOC_BASE_ADDR		(AHB2_BASE_ADDR + 0x0800)
#define GPIOD_BASE_ADDR		(AHB2_BASE_ADDR + 0x0C00)
#define GPIOE_BASE_ADDR		(AHB2_BASE_ADDR + 0x1000)
#define GPIOF_BASE_ADDR		(AHB2_BASE_ADDR + 0x1400)
#define GPIOG_BASE_ADDR		(AHB2_BASE_ADDR + 0x1800)
#define GPIOH_BASE_ADDR		(AHB2_BASE_ADDR + 0x1C00)

#endif /* INC_STM32F303XX_H_ */
