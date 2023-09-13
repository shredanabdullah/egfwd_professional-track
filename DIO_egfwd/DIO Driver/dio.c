/*
 * dio.c
 *
 *  Created on: Sep 13, 2023
 *      Author: shredan abdullah
 */

//include.h
#include "dio.h"
#include "../types.h"
#include "../registers.h"

//global variables
//functions definitions
void DIO_init(unint8 port_number,unint8 pin_number,unint8 direction){
	switch(port_number){
	case PORT_A:
		if(direction==INPUT){DDRA &=~(1<<pin_number);}
	    else if(direction==OUTPUT){DDRA |=(1<<pin_number);}
	    else{
	    	//error handling
	    }
	    break;
	case PORT_B:
		if(direction==INPUT){DDRB &=~(1<<pin_number);}
		else if(direction==OUTPUT){DDRB |=(1<<pin_number);}
		else{
				    	//error handling
		}
		break;
	case PORT_C:
		if(direction==INPUT){DDRC &=~(1<<pin_number);}
		else if(direction==OUTPUT){DDRC |=(1<<pin_number);}
		else{
				    	//error handling
	    }
		break;
	case PORT_D:
		if(direction==INPUT){DDRD &=~(1<<pin_number);}
        else if(direction==OUTPUT){DDRD |=(1<<pin_number);}
        else{
        		    	//error handling
        }
        break;
	}
}//initialize dio pin direction


void DIO_write(unint8 port_number,unint8 pin_number,unint8 value){
	switch(port_number){
		case PORT_A:
			if(value==LOW){PORTA &=~(1<<pin_number);}
		    else if(value==HIGH){PORTA |=(1<<pin_number);}
		    else{
		    	//error handling
		    }
		    break;
		case PORT_B:
			if(value==LOW){PORTB &=~(1<<pin_number);}
			else if(value==HIGH){PORTB |=(1<<pin_number);}
			else{
					    	//error handling
			}
			break;
		case PORT_C:
			if(value==LOW){PORTC &=~(1<<pin_number);}
			else if(value==HIGH){PORTC |=(1<<pin_number);}
			else{
					    	//error handling
		    }
			break;
		case PORT_D:
			if(value==LOW){PORTD &=~(1<<pin_number);}
			else if(value==HIGH){PORTD |=(1<<pin_number);}
			else{
					    	//error handling
		    }
	        break;
		}
}//write on pin


void DIO_read(unint8 port_number,unint8 pin_number,unint8 *value){

}//read pin value


void DIO_toggle(unint8 port_number,unint8 pin_number){

} //toggle pin
