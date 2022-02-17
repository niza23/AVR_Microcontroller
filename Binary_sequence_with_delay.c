/*
 * GccApplication4.c
 *
 * Created: 2/2/2022 5:27:20 PM
 * Author : HP
 */ 

#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	/* Replace with your application code */
	DDRA=0xFF;
	int a[]={1,2,4,8,16,32,64,128};
	
	while (1)
	{
		for(int i=0;i<=8;i++)
		{
			PORTA = a[i];
			_delay_ms(100);
			PORTA = 0;
			_delay_ms(100);
		}
	}
}



