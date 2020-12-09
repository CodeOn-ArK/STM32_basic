/*
 * bits.h
 *
 *  Created on: Dec 7, 2020
 *      Author: KIIT
 */

#ifndef BITS_H_
#define BITS_H_

#include<stdint.h>

void delay(void)
{
	for(int i = 0; i < 300000; i++);
}

typedef struct{
	uint32_t gpioA_en 	: 1;
	uint32_t gpioB_en 	: 1;
	uint32_t gpioC_en 	: 1;
	uint32_t gpioD_en 	: 1;
	uint32_t gpioE_en 	: 1;
	uint32_t gpioF_en 	: 1;
	uint32_t gpioG_en 	: 1;
	uint32_t gpioH_en 	: 1;

	uint32_t RES1 		: 4;
	uint32_t crc 		: 1;
	uint32_t RES2 		: 5;

	uint32_t bkp_sramen : 1;
	uint32_t RES3 		: 1;

	uint32_t dma1_en 	: 1;
	uint32_t dma2_en 	: 1;
	uint32_t RES4 		: 6;

	uint32_t otghs_en 	: 1;
	uint32_t otg_hs_ulpien : 1;
	uint32_t RES5 		: 1;

}RCC_AHB1ENR_t;

typedef struct{
	uint32_t mode_r0 	: 2;
	uint32_t mode_r1 	: 2;
	uint32_t mode_r2 	: 2;
	uint32_t mode_r3 	: 2;
	uint32_t mode_r4 	: 2;
	uint32_t mode_r5 	: 2;
	uint32_t mode_r6 	: 2;
	uint32_t mode_r7 	: 2;
	uint32_t mode_r8 	: 2;
	uint32_t mode_r9 	: 2;
	uint32_t mode_r10 	: 2;
	uint32_t mode_r11 	: 2;
	uint32_t mode_r12 	: 2;
	uint32_t mode_r13 	: 2;
	uint32_t mode_r14 	: 2;
	uint32_t mode_r15 	: 2;

}GPIO_MODER_t;

typedef struct{
	uint32_t od_r0 	: 1;
	uint32_t od_r1 	: 1;
	uint32_t od_r2 	: 1;
	uint32_t od_r3 	: 1;
	uint32_t od_r4 	: 1;
	uint32_t od_r5 	: 1;
	uint32_t od_r6 	: 1;
	uint32_t od_r7 	: 1;
	uint32_t od_r8 	: 1;
	uint32_t od_r9 	: 1;
	uint32_t od_r10 : 1;
	uint32_t od_r11 : 1;
	uint32_t od_r12 : 1;
	uint32_t od_r13 : 1;
	uint32_t od_r14 : 1;
	uint32_t od_r15 : 1;

}GPIO_ODR_t;

typedef struct{

	uint32_t idr0 : 1;
	uint32_t idr1 : 1;
	uint32_t idr2 : 1;
	uint32_t idr3 : 1;
	uint32_t idr4 : 1;
	uint32_t idr5 : 1;
	uint32_t idr6 : 1;
	uint32_t idr7 : 1;
	uint32_t idr8 : 1;
	uint32_t idr9 : 1;
	uint32_t idr10 : 1;
	uint32_t idr11 : 1;
	uint32_t idr12 : 1;
	uint32_t idr13 : 1;
	uint32_t idr14 : 1;
	uint32_t idr15 : 1;
	uint32_t idr16 : 1;
}GPIO_IDR_t;

typedef struct{

	uint32_t pupdr0   : 2;
	uint32_t pupdr1   : 2;
	uint32_t pupdr2   : 2;
	uint32_t pupdr3   : 2;
	uint32_t pupdr4   : 2;
	uint32_t pupdr5   : 2;
	uint32_t pupdr6   : 2;
	uint32_t pupdr7   : 2;
	uint32_t pupdr8   : 2;
	uint32_t pupdr9   : 2;
	uint32_t pupdr10  : 2;
	uint32_t pupdr11  : 2;
	uint32_t pupdr12  : 2;
	uint32_t pupdr13  : 2;
	uint32_t pupdr15  : 2;

}GPIO_PUPDR_t;
#endif /* BITS_H_ */
