/*
 * ch3_pwm.c
 *
 *  Created on: Sep 9, 2023
 *      Author: shredan
 */


#include <avr/io.h>
#include "util/delay.h"

void Timer0_PWM_Init()
{
	TCNT0 = 0; // Set Timer Initial Value to 0

	OCR0  = 128; // Set Compare Value

	DDRB  = DDRB | (1<<PB3); // Configure PB3/OC0 as output pin --> pin where the PWM signal is generated from MC

	TCCR0 = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS01);
}
int main(void){
	Timer0_PWM_Init();
	//super loop
	while(1){

	}
	return 0;
}
