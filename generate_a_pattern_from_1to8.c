/*
 * ES_EXPERIMENT_2.3.c
 *
 * Created: 1/19/2022 4:55:58 PM
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>


int main(void)
{
	char mynum[]={1,2,3,4,5,6,7,8};
	unsigned char z;
	
	DDRC=0xFF;
	
    /* Replace with your application code */
    while (1) 
    {
		for(z=0;z<9;z++)
		PORTC=mynum[z];
	}
}

