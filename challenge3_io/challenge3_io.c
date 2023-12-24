/*
 * challenge3_io.c
 *
 *  Created on: Sep 14, 2023
 *      Author: shredan abdullah
 */

#include<avr/io.h>


int main(void){
	//INIT TWO BUTTONS
	DDRD &=~(1<<2)&~(1<<3);
	PORTD |= (1<<2)|(1<<3);
	//INIT PIN FOR COMMON CATHODE
	DDRC |=(1<<6);
	PORTC |=(1<<6);
	//INIT 7 SEGMENTS LEDS
	DDRA|= (1<<1)|(1<<2)|(1<<3)|(1<<4)|(1<<5)|(1<<6)|(1<<7);
	PORTA =0b01111110;

	unsigned char count=0;
	unsigned char arr[10]={0b01111110,0b00001100,0b10110110,0b10011110,0b11001100,0b11011010,0b11111000,0b00001110,0b11111110,0b11001110};

	while(1){
		if(!(PIND&(1<<2))){
				if(count<9){
				count++;
				PORTA = arr[count];
			    }
			while( !(PIND & (1<<PD2)) ){} // wait until switch is released
		}
		else if(!(PIND&(1<<3))){
			if(count>0){
			count--;
			PORTA = arr[count];
		    }
		while( !(PIND & (1<<PD3)) ){} // wait until switch is released
	    }
    }
	return 0;
}


