/*
 * Stm32f303xx.h
 *
 *  Created on: May 3, 2024
 *      Author: rohanguraja
 */

#ifndef INC_STM32F303XX_H_
#define INC_STM32F303XX_H_

#include "stdint.h"

// Macros to improve readability

//Bit field micro definitions
#define BIT0				(0)
#define BIT1				(1<<1)
#define BIT2				(1<<2)
#define BIT3				(1<<3)
#define BIT4				(1<<4)
#define BIT5				(1<<5)
#define BIT6				(1<<6)
#define BIT7				(1<<7)
#define BIT8				(1<<8)
#define BIT9				(1<<9)

#define ENABLE 				1
#define DISABLE				0


//Flash and RAM Memory Address defiitions

//Base Addresses of buses
#define AHB1_BASE_ADDR			(0x40020000U)
#define AHB2_BASE_ADDR			(0x48000000U)
#define AHB3_BASE_ADDR			(0x50000000)
#define AHB4_BASE_ADDR			(0x60000000)
#define APB1_BASE_ADDR			(0x40000000)
#define APB2_BASE_ADDR			(0x40010000)



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




//peripheral register structure
typedef struct
{
	volatile uint32_t RC;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t APB1RSTR;
	volatile uint32_t AHBENR;
	volatile uint32_t APB2ENR;
	volatile uint32_t APB1ENR;
	volatile uint32_t BDCR;
	volatile uint32_t CSR;
	volatile uint32_t AHBRSTR;
	volatile uint32_t CFGR2;
	volatile uint32_t CFGR3;
}RCC_RegDef_t;

//GPIO Peripheral register structure
typedef struct {

	volatile uint32_t Moder;
	volatile uint32_t Otyper;
	volatile uint32_t Ospeedr;
	volatile uint32_t Pupdr;
	volatile uint32_t Idr;
	volatile uint32_t Odr;
	volatile uint32_t Bsrr;
	volatile uint32_t Lckr;
	volatile uint32_t Afr[2];
	volatile uint32_t Brr;

}GPIO_RegDef_t;




//typecasting base addresses to pointers of structs to make code more readable. See *pGPIOA for more context
#define GPIOA		((GPIO_RegDef_t*)GPIOA_BASE_ADDR)
#define GPIOB		((GPIO_RegDef_t*)GPIOB_BASE_ADDR)
#define GPIOC		((GPIO_RegDef_t*)GPIOC_BASE_ADDR)
#define GPIOD		((GPIO_RegDef_t*)GPIOD_BASE_ADDR)
#define GPIOE		((GPIO_RegDef_t*)GPIOE_BASE_ADDR)
#define GPIOF		((GPIO_RegDef_t*)GPIOF_BASE_ADDR)
#define GPIOG		((GPIO_RegDef_t*)GPIOG_BASE_ADDR)
#define GPIOH		((GPIO_RegDef_t*)GPIOH_BASE_ADDR)

//
#define RCC			((RCC_RegDef_t*)RCC_BASE_ADDR)

//Peripheral clock enable macros
#define GPIOA_PCLK_EN()		(RCC->AHBENR |= (1<<17))
#define GPIOB_PCLK_EN()		(RCC->AHBENR |= (1<<18))
#define GPIOC_PCLK_EN()		(RCC->AHBENR |= (1<<19))
#define GPIOD_PCLK_EN()		(RCC->AHBENR |= (1<<20))
#define GPIOE_PCLK_EN()		(RCC->AHBENR |= (1<<21))
#define GPIOF_PCLK_EN()		(RCC->AHBENR |= (1<<22))
#define GPIOG_PCLK_EN()		(RCC->AHBENR |= (1<<23))
#define GPIOH_PCLK_EN()		(RCC->AHBENR |= (1<<16))

//Peripheral clock enable macros
#define GPIOA_PCLK_DIS()		(RCC->AHBENR &= ~(1<<17))
#define GPIOB_PCLK_DIS()		(RCC->AHBENR &= ~(1<<18))
#define GPIOC_PCLK_DIS()		(RCC->AHBENR &= ~(1<<19))
#define GPIOD_PCLK_DIS()		(RCC->AHBENR &= ~(1<<20))
#define GPIOE_PCLK_DIS()		(RCC->AHBENR &= ~(1<<21))
#define GPIOF_PCLK_DIS()		(RCC->AHBENR &= ~(1<<22))
#define GPIOG_PCLK_DIS()		(RCC->AHBENR &= ~(1<<23))
#define GPIOH_PCLK_DIS()		(RCC->AHBENR &= ~(1<<16))


#endif /* INC_STM32F303XX_H_ */
