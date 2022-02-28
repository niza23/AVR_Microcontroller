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
	DDRA=0xFF;
    while (1) 
    {
		//m1 off; m1 off
		PORTA=0x00; 
		_delay_ms(100);
		
		//m1 on; m2 off
		PORTA=0x05;
		_delay_ms(100);
		
		//m1 off; m1 on
		PORTA=0x28;
		_delay_ms(100);
		
		//m1 CW; m2 CCW
		PORTA=0x2D;
		_delay_ms(100);
		
		//m1 CCW; m2 CW
		PORTA=0x1E;
		_delay_ms(100);
    }
}

