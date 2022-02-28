/*
 * DcMotor.c
 *
 * Created: 2/28/2022 10:58:53 AM
 * Author : HP
 */ 
#include<stdio.h>
#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
    /* Replace with your application code */
	DDRC=0xFF;
    while (1) 
    {
		//B2 on
		PORTC=0x01; 
		_delay_ms(1000);
		
		//A2 on
		PORTC=0x02;
		_delay_ms(1000);
		
		//B1 on
		PORTC=0x04;
		_delay_ms(1000);
		
		//A1 on
		PORTC=0x08;
		_delay_ms(1000);
		
    }
}

