/*
 * registers.h
 *
 *  Created on: Sep 12, 2023
 *      Author: shredan abdullah
 */

#ifndef REGISTERS_H_
#define REGISTERS_H_

#include "types.h"

/*
 * #define PORTD (0x3B)
 * lw 3mlna kda w gena est3mlnaha ex:PORTD|=(1<<7);
 * KDA fe elpreprocessing stage hy7sal elreplacement ll # fa kda aknna bn2ol 0x3B=rakamm
 * w kda ghalat lazem eli 2abl elequal yekon memory location msh rakam hwa kda blnsbalna rakam
 * fa lazem nrga3 n3rf elpreprocessor eno dah address msh rakam so we will cast to pointer
 * nshof elreg dah elsize bta3o ad ehh w n cast elrakam dah eno yekon pointer ll reg dah
 * #define PORTD (unint8*)0x3B
 * ana kda fahmto eno address bs still fe error 3shan kda akne bsawe adress b rakam ya3ne ptr=rakam, elmafroud ptr= location(ptr1 for ex)
 * ana mhtaga aghyar fe elvalue bta3t elpointer dah msh address elhaga eli byshwer 3aleha so we will use * 3shan access elhaga eli elpointer byshawer 3aleha
 * #define PORTD *((unint8*)0x3B)
 * */


/**************************************/
/* DIO Registers                      */
/**************************************/
//PORTA
#define PORTA *((volatile unint8*)0x3B)
#define DDRA  *((volatile unint8*)0x3A)
#define PINA  *((volatile unint8*)0x39)
//PORTB
#define PORTB *((volatile unint8*)0x38)
#define DDRB  *((volatile unint8*)0x37)
#define PINB  *((volatile unint8*)0x36)
//PORTC
#define PORTC *((volatile unint8*)0x35)
#define DDRC  *((volatile unint8*)0x34)
#define PINC  *((volatile unint8*)0x33)
//PORTD
#define PORTD *((volatile unint8*)0x32)
#define DDRD  *((volatile unint8*)0x31)
#define PIND  *((volatile unint8*)0x30)

#endif /* REGISTERS_H_ */
