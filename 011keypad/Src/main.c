/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */
/*
 * THIS PROJECT IS USING BIT MANIPULATION TO IMPLEMENT THE APPLICATION
 * NESTED STRUCTURE WILL BE USED IN FUTURE VERSIONS
 */
#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include<stdio.h>
#include<stdint.h>

void delay()
{
	for(int i=0; i < 100000; i++);
}

int main(void)
{
	//IMPLEMENTATION: STEP 1
	//choose the IO which are to be used for the application

	/*GPIOA TO BE SELECTED FOR THE APPLICATION WHOSE Base Addr IS 0x40020000
	 * RCC Base Addr : 0x4002 3800
	 * Off : 0X00
	 * RCC AHB1ENR : 0X30 BIT 0 FOR GPIOAEN
	 * GPIO A0,A1,A2,A3 to be used as output
	 * GPIO A4,A5,A6,A7 to be used as input
	*/

	/*//IMPLEMENTATION: STEP 2
	//create required pointer variables to handle memory mapped registers
	//initialize the pointer variables with appropriate memory mapped
	//registers addresses
	//use type qualifier such as volatile or const if memory mapped register
	//access is involved
	//REGISTERS TO BE INITIALIZED : RCCAHB1ENR, GPIOAMODER, GPIOAIPR. GPIOAOPR, GPIOAPUDR*/
	uint32_t volatile *const pRCC_en 			= (uint32_t *)(0x40023800 + 0x30);
	uint32_t volatile *const pGPIO_mode 		= (uint32_t *)(0x40020400);
	uint32_t volatile *const pGPIO_OP 			= (uint32_t *)(0x40020400 + 0x14);
	uint32_t volatile *const pGPIO_IP 			= (uint32_t *)(0x40020400 + 0x10);
	uint32_t volatile *const pGPIO_pullup 		= (uint32_t *)(0x40020400 + 0x0C);

/*
	//IMPLEMENTATION: STEP 3
	//make all row IOs mode as O/P
	//make all column IOs mode as I/P
	//activate internal pull-up resistors for column IOs
*/
	*pRCC_en		 |= 0x2;

	*pGPIO_mode      &= ~(0xffff);
	*pGPIO_mode 	 |= 0x55;

	*pGPIO_OP		 &= ~(0xf );

	*pGPIO_pullup 	 &= 0x00;
	*pGPIO_pullup    |= (0x55 << 8);

	//IMPLEMENTATION: STEP 4
	//implement the key detect logic as per the flow chart

    /* Loop forever */
	while(1)
	{
		*pGPIO_OP  |= 0xf;
		*pGPIO_OP  &= ~(0x1 << 0);
		if(!(*pGPIO_IP & (0x1 << 4)))
		{
			delay(); // delay
			printf("1");
		}
		if(!(*pGPIO_IP & (0x1 << 5)))
		{
			delay(); // delay
			printf("2\n");
		}
		if(!(*pGPIO_IP & (0x1 << 6)))
		{
			delay(); // delay
			printf("3\n");
		}
		if(!(*pGPIO_IP & (0x1 << 7)))
		{
			delay(); // delay
			printf("A\n");
		}

		delay(); // delay
		*pGPIO_OP  |= 0xf;
		*pGPIO_OP  &= ~(0x1 << 1);
		if(!(*pGPIO_IP & (0x1 << 4)))
		{
			delay(); // delay
			printf("4\n");
		}
		if(!(*pGPIO_IP & (0x1 << 5)))
		{
			delay(); // delay
			printf("5\n");
		}
		if(!(*pGPIO_IP & (0x1 << 6)))
		{
			delay(); // delay
			printf("6\n");
		}
		if(!(*pGPIO_IP & (0x1 << 7)))
		{
			delay(); // delay
			printf("B\n");
		}

		delay(); // delay
		*pGPIO_OP  |= 0xf;
		*pGPIO_OP  &= ~(0x1 << 2);
		if(!(*pGPIO_IP & (0x1 << 4)))
		{
			delay(); // delay
			printf("7\n");
		}
		if(!(*pGPIO_IP & (0x1 << 5)))
		{
			delay(); // delay
			printf("8\n");
		}
		if(!(*pGPIO_IP & (0x1 << 6)))
		{
			delay(); // delay
			printf("9\n");
		}
		if(!(*pGPIO_IP & (0x1 << 7)))
		{
			delay(); // delay
			printf("C\n");
		}

		delay(); // delay
		*pGPIO_OP  |= 0xf;
		*pGPIO_OP  &= ~(0x1 << 3);
		if(!(*pGPIO_IP & (0x1 << 4)))
		{
			delay(); // delay
			printf("*\n");
		}
		if(!(*pGPIO_IP & (0x1 << 5)))
		{
			delay(); // delay
			printf("0\n");
		}
		if(!(*pGPIO_IP & (0x1 << 6)))
		{
			delay(); // delay
			printf("#\n");
		}
		if(!(*pGPIO_IP & (0x1 << 7)))
		{
			delay(); // delay
			printf("D\n");
		}
	}
}