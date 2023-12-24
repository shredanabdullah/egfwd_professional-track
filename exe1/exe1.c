/*
 * EXE.C
 *
 *  Created on: Sep 9, 2023
 *      Author:  Shredan abdullah
 */

/*
 * write embedded c code using ATmega16/32 to control a led using a push button
 * req:
 * configure the microC clk with 16Mhz Crystall Oscillator
 * the push button is connected to pin2 in PORTD using pull up config
 * the led is connected to pin1 in portc using positive logic config
 * turn on the led when the push button is pressed
 * turn off the led when the push button is released
 * */
#define F_CPU 16000000UL
#include <avr/io.h>
#include "util/delay.h"


int main(void){
	//initialization
	//the push button is connected to pin2 in PORTD using pull up config
	DDRD &=~(1<<2);
	//the push button is connected to pin2 in PORTD using pull up config
	PORTD |=(1<<2);
	//the led is connected to pin1 in portc using positive logic config
	DDRC |=(1<<1);
	PORTC &=~(1<<1);
	//super loop
	while(1){
		if(PIND &(1<<2)){
			_delay_ms(30);
			if(PIND&(1<<2)){
				PORTC |=(1<<1);
		}
	 }
		else if(!(PIND &(1<<2))){
			_delay_ms(30);
			if(!(PIND&(1<<2))){
				PORTC &=~(1<<1);
		}
	 }
	}
	return 0;
}
