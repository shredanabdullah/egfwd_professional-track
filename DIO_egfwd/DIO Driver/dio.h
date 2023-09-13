/*
 * dio.h
 *
 *  Created on: Sep 13, 2023
 *      Author: shredan abdullah
 */

#ifndef DIO_DRIVER_DIO_H_
#define DIO_DRIVER_DIO_H_

#include "../types.h"

//all internal typedefs


//all driver macros
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'


//Direction defines
#define INPUT 0
#define OUTPUT 1


//Value Defines
#define LOW 0
#define HIGH 0xFF


// functions prototypes
void DIO_init(unint8 port_number,unint8 pin_number,unint8 direction);//initialize dio pin direction
void DIO_write(unint8 port_number,unint8 pin_number,unint8 value);//write on pin
void DIO_read(unint8 port_number,unint8 pin_number,unint8 *value);//read pin value
void DIO_toggle(unint8 port_number,unint8 pin_number); //toggle pin


 #endif /* DIO_DRIVER_DIO_H_ */
