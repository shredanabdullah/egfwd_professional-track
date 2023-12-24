/*
 * exe1_interrupt.c
 *
 *  Created on: Sep 10, 2023
 *      Author: Tobi
 */

#include <avr/io.h>
#include <avr/interrupt.h>


void interrupt_init(){
	DDRD &=~(1<<2);
	SREG |=(1<<7);
	MCUCR |=(1<<ISC01) | (1<<ISC00);
	GICR |=(1<<6);
}

ISR(INT0_vect){
	PORTC ^=(1<<0);
}
int main(void){
	DDRC |=(1<<0);
	PORTC &=~(1<<0);

	interrupt_init();

	while(1){

	}


}
