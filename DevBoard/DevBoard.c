/*
 * DevBoard.c
 *
 * Created: 15.3.2017 14:46:39
 *  Author: nemanja.isajlovic
 */ 


#include <alloca.h>
#include <avr/io.h>
#include <avr/iom2560.h>
#include <util/delay.h>
#include "Globals.h"

#define GRelej1_ON = 0b00100000;
//#define GRelej1_OFF= 0b00000000;
#define ERelej2_OFF = 0b00000000;
//#define ERelej2_ON= 0b00000010;

void Init();
void HardwareSetup();

int main(void)
{
	        _delay_ms(100);
	        HardwareSetup();
	        Init();
			Lcd4_Init();

			
    while(1)
    {
	
	// relej na bitu PG5
	// relej na bitu PE1
	// opto na PH3, PH4, PH5
	// opto na PL3, PL4, PL5
		
	_delay_ms(1000);
	PORTG = (0<<PG5);
	PORTE =(1<<PE1);
	PORTH = ((0<<PH3) | (1<<PH4) | (0<<PH5));
	PORTL = ((1<<PL3) | (0<<PL4) | (1<<PL5));
	_delay_ms(500);
	Init();

    }
}