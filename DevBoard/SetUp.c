/*
 * SetUp.c
 *
 * Created: 15.3.2017 15:01:56
 *  Author: dejan.ristic
 */ 

#ifdef F_CPU 
#endif F_CPU 11059200UL // 11MHz clock speed

#include <alloca.h>
#include <avr/io.h>
#include <avr/iom2560.h>


void HardwareSetup()
{
	DDRG = 0xFF; // relej na bitu PG5
	DDRE = 0xff; // relej na bitu PE1
	DDRH = 0xff; // opto na PH3, PH4, PH5
	DDRL = 0xff; // opto na PL3, PL4, PL5
}

void Init()
{
	PORTG = 0b00100000;
	PORTE = 0b00000000;
	PORTH = ((1<<PH3) | (1<<PH5));
	PORTL = 0b00010000;
}