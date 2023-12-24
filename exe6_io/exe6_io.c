/*
 * exe6_io.c
 *
 *  Created on: Sep 14, 2023
 *      Author: shredan abdullah
 */
#define F_CPU 16000000UL
#include<avr/io.h>
#include "util/delay.h"


int main(void){
	DDRD &= ~(1<<PD4);

	DDRC |=(1<<PC0)|(1<<PC1)|(1<<PC2)|(1<<PC3);
	PORTC &=~(1<<PC0)&~(1<<PC1)&~(1<<PC2)&~(1<<PC3);

	unsigned char isPressed=0;
	unsigned char count=0;

	while(1){
		if(PIND&(1<<PD4)){
			//_delay_ms(30);
			if(PIND&(1<<PD4)){
				if(isPressed==0){
					isPressed=1;
					count++;
					if(count<10){
						PORTC++;
					}
					else{
						PORTC &=~(1<<PC0)&~(1<<PC1)&~(1<<PC2)&~(1<<PC3);
						count=0;
					}
		       }
			}
	   }else isPressed=0;
	}
	return 0;
}

