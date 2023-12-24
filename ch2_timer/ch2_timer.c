/*
 * ch2_timer.c
 *
 *  Created on: Sep 10, 2023
 *      Author: shredan
 */
#include <avr/io.h>

void timer0_init(){
	TCNT0=0;
	TCCR0 |= (1<<FOC0)|(1<<WGM01)|(1<<COM01)|(1<<CS01);

}
int main(void){




	return 0;
}

