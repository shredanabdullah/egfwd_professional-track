/*
 * exe3_io.c
 *
 *  Created on: Sep 14, 2023
 *      Author: shredan abdullah
 */

/**controlling two leds using two push buttons*/

#include <avr/io.h>

int main(void){
	//init buttons
	DDRB &= ~(1<<0)&~(1<<1);//pull down
	//init leds
	DDRC |= (1<<0)|(1<<1);
	PORTC |= (1<<0)|(1<<1);
	//super loop
	while(1){
		if(PINB&(1<<0)){
			PORTC &=~(1<<0);
		}
		else if(!(PINB&(1<<0))){
			PORTC |=(1<<0);
		}
		if(PINB&(1<<1)){
			PORTC &=~(1<<1);
		}
		else if(!(PINB&(1<<1))){
			PORTC |=(1<<1);
		}
		if((PINB&(1<<0)) && (PINB&(1<<1))){
			PORTC &= ~(1<<0)&~(1<<1);
		}
		else if(! ( (PINB& (1<<0) ) && ( PINB& (1<<1) ) ) ){
			PORTC |= (1<<0)|(1<<1);
		}
	}
	return 0;
}



