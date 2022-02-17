/*
 * GccApplication1.c
 *
 * Created: 2/2/2022 4:14:26 PM
 * Author : HP
 */ 
#define F_CPU 16000000
#include <avr/io.h>
#include<util/delay.h>



int main(void)
{
    /* Replace with your application code */
	DDRA=0XFF;
	
    while (1) 
    {
		PORTA=0x01;
		_delay_ms(100);
		PORTA=0x00;
		_delay_ms(100);
    }
}

