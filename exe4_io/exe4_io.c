/*
 * exe4_io.c
 *
 *  Created on: Sep 14, 2023
 *      Author: shredan abdullah
 */
#include <avr/io.h>
#include "util/delay.h"

int main(void){
	DDRB&=~(1<<0);
	PORTB|=(1<<0);//PULL UP HT CHECK 3LA ZERO

	DDRC|=(1<<0);
	PORTC|=(1<<0);
    unsigned char isPressed=0;

	while(1){
		if(!(PINB&(1<<0))){
			_delay_ms(30);
			if(!(PINB&(1<<0))){
				if(isPressed ==0){
					isPressed = 1;
					PORTC^=(1<<0);
				}
			}
		}
		else{
		isPressed=0;
		}
	}
}
