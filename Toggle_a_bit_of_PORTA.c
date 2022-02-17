/*
 * ES_EXPERIMENT_2.1.c
 *
 * Created: 1/19/2022 4:25:42 PM
 * Author : HP
 */ 
#define F_CPU 16000000UL  //clock cycle
#include <avr/io.h>


int main(void)
{
	DDRA=0xFF;
	
    while (1) 
    { 
		PORTA=0x01;
		PORTA=0x00;
    }
}

