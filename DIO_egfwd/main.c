/*
 * main.c
 *
 *  Created on: Sep 13, 2023
 *      Author: shredan
 */

#include "DIO Driver/dio.h"

int main(){

	DIO_init(PORT_A,3,OUTPUT);
	DIO_write(PORT_A,3,HIGH);
	while(1){

}
	return 0;
}
