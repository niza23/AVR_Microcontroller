/*
 * GccApplication4.c
 *
 * Created: 2/2/2022 5:13:42 PM
 * Author : HP
 */ 

#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	/* Replace with your application code */
	DDRC=0xFF;
	int array[] = {1,2,3,4,5,6,7,8};
	
	
	while (1)
	{
		for(int i=0;i<8;i++)
		{
			PORTC  = array[i];
			_delay_ms(100);
			PORTC = 0;
			_delay_ms(100);
		}
	}
}

