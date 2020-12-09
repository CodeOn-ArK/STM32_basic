/**
 ******************************************************************************
 * @file           : main.c
 * @author         : CodeOn-ArK
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

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#define GCC_INLINE_C

int main(void)
{
#ifdef GCC_INLINE
	__asm volatile("LDR R1,=#0X20001000");
	__asm volatile("LDR R2,=#0X20001008");

	__asm volatile("LDR R0,[R1]");
	__asm volatile("LDR R1,[R2]");
	__asm volatile("ADD R0,R0,R1");
	__asm volatile("STR R0,[R3]");
#endif

#ifdef GCC_INLINE_C
	int var;	//variable declaration

	var = 101011;
	__asm volatile("MOV R0, %0": : "r"(var));
	__asm volatile("LDR R2, =#0x20001008");
	__asm volatile("LDR R1, [R2]");
	__asm volatile("ADD R0, R1, R0");
	__asm volatile("STR R0, [R4]");


#endif
    /* Loop forever */
	for(;;);
}
