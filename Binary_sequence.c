/*
 * ES_EXPERIMENT_2.4.c
 *
 * Created: 1/19/2022 5:12:37 PM
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>


int main(void)
{
	DDRA=0xFF;
	
    /* Replace with your application code */
    while (1) 
    {
		for(int i=0;i<=8;i++)
		{
			PORTA=(0x01<<i);
			PORTA=0x00;
    }
	}
}

