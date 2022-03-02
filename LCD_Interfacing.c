/*
 * LCDInterfacing.c
 *
 * Created: 3/2/2022 5:15:24 PM
 * Author : HP
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <stdio.h>
#include <util/delay.h>


void lcd_cmd(unsigned char cmd)   //For command
{
	PORTD=cmd;
	
	PORTC=0x04;
	_delay_ms(10);
	PORTC=0x00;
}

void lcd_data(unsigned char data)   //for data
{
	PORTD=data;
	
	PORTC=0x05;
	_delay_ms(10);
	PORTC=0x01;
}

void lcd_initialisation()
{
	lcd_cmd(0x38);  //to clear 
	lcd_cmd(0x0F);   //to blink
	lcd_cmd(0x01);
	
}

int main(void)
{
	DDRD=0xFF;
	DDRC=0xFF;
    lcd_initialisation();
    while (1) 
    {
		lcd_cmd(0x80);
		
		lcd_data('H');
		_delay_ms(100);
		
		lcd_data('E');
		_delay_ms(100);
		
		lcd_data('L');
		_delay_ms(100);
		
		lcd_data('L');
		_delay_ms(100);
		
		lcd_data('O');
		_delay_ms(100);
		
		lcd_cmd(0xC0);
		
		lcd_data('E');
		_delay_ms(100);
		
		lcd_data('S');
		_delay_ms(100);
	
    }
	
}

