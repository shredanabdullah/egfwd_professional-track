/*
 * exe1_io.c
 *
 *  Created on: Sep 14, 2023
 *      Author: shredan abdullah
 */


/*
 * write embedded c to control led using bush button
 * */
#define F_CPU 16000000UL
#include<avr/io.h>
#include "util/delay.h"


int main(void){
	//initialization
	//BUTTON INIT
	DDRD &=~(1<<2);
	PORTD |=(1<<2);
	//LED INIT
	DDRC |=(1<<1);
	PORTC &=~(1<<1);

	//SUPER LOOP
	while(1){
		if(!(PIND &(1<<2))){
			PORTC |=(1<<1);
		}
		else if(PIND &(1<<2)){
			PORTC &=~(1<<1);
		}
	}



	return 0;
}
