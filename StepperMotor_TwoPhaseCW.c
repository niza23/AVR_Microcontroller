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
		//A1 on; B1 on
		PORTC=0x0C; 
		_delay_ms(1000);
		
		//B1 on; A2 on
		PORTC=0x06;
		_delay_ms(1000);
		
		//A2 on; B2 on
		PORTC=0x03;
		_delay_ms(1000);
		
		//B2 on; A1 on
		PORTC=0x09;
		_delay_ms(1000);
		
    }
}

