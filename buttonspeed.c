/*
 * buttonspeed.c
 *
 * Created: 11-06-2019 14:04:44
 * Author : ganga
 */ 

#define F_CPU 8000000UL
#include <avr/io.h>
# include <util/delay.h>
void PWM_init()
{
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	DDRB=(1<<PB3);
}

int main()
{
	DDRC|=(1<<PC0);
	DDRD&=~(1<<PD0);
	
	unsigned char duty;
	PWM_init();
	while (1)
	{
		if((PIND&(1<<PD0))==0)
		for(duty=0;duty<255;duty++)
		{
			OCR0=150;
			_delay_ms(8);
		}
		if((PIND&(1<<PD0))==0)
		for(duty=255;duty>1;duty--)
		{
			OCR0=duty;
			_delay_ms(8);
		}
	}
}


