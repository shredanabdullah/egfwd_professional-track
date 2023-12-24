/*
 * exe5_io.c
 *
 *  Created on: Sep 14, 2023
 *      Author: shredan abdullah
 */
#include <avr/io.h>

int main(void){
	DDRD  &=~(1<<3);
	PORTD |=(1<<3);

	//BUZZER INIT
	DDRC  |=(1<<5);
	PORTC &=~(1<<5);

	while(1){
		if(!(PIND&(1<<3))){
			PORTC  |=(1<<5);
		}
		else{
			PORTC &=~(1<<5);
		}
	}
	return 0;
}

