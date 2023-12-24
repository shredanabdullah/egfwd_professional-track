/*
 * exe6_pwm.c
 *
 *  Created on: Sep 10, 2023
 *      Author: shredan abdullah
 */
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


void timer0_pwm(unsigned char duty){
	TCNT0=0;
	TCCR0 |=(1<<WGM01) | (1<<WGM00) | (1<<COM01) | (1<<CS01);
	OCR0=duty;
	DDRB|=(1<<3);
}

int main(void){
	PORTB |=(1<<3);
	while(1){
	timer0_pwm(64);
	_delay_ms(1000);
	timer0_pwm(128);
	_delay_ms(1000);
	timer0_pwm(192);
	_delay_ms(1000);
	}
}

