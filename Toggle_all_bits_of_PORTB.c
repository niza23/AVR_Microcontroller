/*
 * ES_EXPERIMENT_2.2.c
 *
 * Created: 1/19/2022 4:49:36 PM
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>


int main(void)
{
	DDRB=0xFF;
    /* Replace with your application code */
    while (1) 
    {
		PORTB=0xFF;
		PORTB=0x00;
    }
}

