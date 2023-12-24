/*
 * exe1_motorr.c
 *
 *  Created on: Sep 9, 2023
 *      Author: Tobi
 */


#include <avr/io.h>



int main(void){
	//initialization
	//the led is connected to pin2 in portc using positive logic config
	DDRA &=~(1<<0)&~(1<<1)&~(1<<2);

	DDRC |=(1<<0)|(1<<1);
	PORTC &=~(1<<0)&~(1<<1);
	//super loop
	while(1){
		if(PINA &(1<<0)){
			PORTC &=~(1<<0);
			PORTC |=(1<<1);
		}
		else if(PINA &(1<<1)){

			PORTC &=~(1<<1);
			PORTC |=(1<<0);
		}
		else if (PINA &(1<<2)){
			PORTC &=~(1<<0);
			PORTC &=~(1<<1);
		}
	}
	return 0;
}
