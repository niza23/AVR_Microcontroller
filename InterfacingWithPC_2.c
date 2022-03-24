/*
 * experiment-10.c
 *
 * Created: 3/23/2022 4:48:37 PM
 * Author : HP
 */ 

#include <avr/io.h>

void usart_init(void)
{
	UCSRB=(1<<TXEN);   //act as a transmitter
	UCSRC=(1<<UCSZ1)|(1<<UCSZ0)|(1<<URSEL);   //char size
	UBRRL=0x33;   //baud rate
}

void usart_send(unsigned char ch)
{
	while(!(UCSRA&(1<<UDRE)));  //check if buffer is empty or not
	UDR=ch; //if empty pass G in UDR
}


int main(void)
{
    /* Replace with your application code */
	
	unsigned char str[30]="hello everyone ";
	unsigned char strlen=30;
	unsigned char i=0;
	
	usart_init();
    while (1) 
    {
		usart_send(str[i++]);
		
		if(i>=strlen)
		{
			i=0;
		}
    }
	return 0;
}

