/*
 * main.h
 *
 *  Created on: Nov 22, 2020
 *      Author: KIIT
 */

#ifndef MAIN_H_
#define MAIN_H_

#include<stdint.h>

typedef struct{                     //RCC_AHB1ENR_t
	uint32_t gpioa_en : 1;
	uint32_t gpiob_en : 1;
	uint32_t gpioc_en : 1;
	uint32_t gpiod_en : 1;
	uint32_t gpioe_en : 1;
	uint32_t gpiof_en : 1;
	uint32_t gpiog_en : 1;
	uint32_t gpioh_en : 1;

	uint32_t res_1 : 4;
	uint32_t crc_en : 1;

	uint32_t res_2 : 5;
	uint32_t bkp_sram_en : 1;

	uint32_t res_3 : 1;
	uint32_t dma1_en : 1;
	uint32_t dma2_en : 1;

	uint32_t res_4 : 6;
	uint32_t otghs_en : 1;
	uint32_t otghs_ulpi_en : 1;

	uint32_t res_5 : 1;
}RCC_AHB1ENR_t;

typedef struct{                        //GPIOx_MODER_t
	uint32_t moder0 : 2;
	uint32_t moder1 : 2;
	uint32_t moder2 : 2;
	uint32_t moder3 : 2;
	uint32_t moder4 : 2;
	uint32_t moder5 : 2;
	uint32_t moder6 : 2;
	uint32_t moder7 : 2;
	uint32_t moder8 : 2;
	uint32_t moder9 : 2;
	uint32_t moder10 : 2;
	uint32_t moder11 : 2;
	uint32_t moder12 : 2;
	uint32_t moder13 : 2;
	uint32_t moder14 : 2;
	uint32_t moder15 : 2;
	uint32_t moder16 : 2;

}GPIOx_MODER_t;

typedef struct{                         //GPIOx_ODR_t

	uint32_t odr0 : 1;
	uint32_t odr1 : 1;
	uint32_t odr2 : 1;
	uint32_t odr3 : 1;
	uint32_t odr4 : 1;
	uint32_t odr5 : 1;
	uint32_t odr6 : 1;
	uint32_t odr7 : 1;
	uint32_t odr8 : 1;
	uint32_t odr9 : 1;
	uint32_t odr10 : 1;
	uint32_t odr11 : 1;
	uint32_t odr12 : 1;
	uint32_t odr13 : 1;
	uint32_t odr14 : 1;
	uint32_t odr15 : 1;
	uint32_t odr16 : 1;

	uint32_t reserved : 16;

}GPIOx_ODR_t;

#endif /* MAIN_H_ */
