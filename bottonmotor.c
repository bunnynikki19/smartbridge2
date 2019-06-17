/*
 * bottonmotor.c
 *
 * Created: 11-06-2019 11:09:43
 * Author : ganga
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>
int main(void)

{
	DDRC|=(1<<PC0);
	DDRD&=~(1<<PD0);
	/* Replace with your application code */
	while (1)
	{
		if((PINB&(1<<PB0))==0)
		{
			PORTD=0X01;
			_delay_ms(2000);
			PORTD=0X02;
			_delay_ms(2000);
		}
		if((PINB&(1<<PB0))==0)
		{
			PORTD=0X02;
			_delay_ms(2000);
			PORTD=0X01;
			_delay_ms(2000);
		}
	}
}