/*
 * motordriver.c
 *
 * Created: 11-06-2019 10:10:07
 * Author : ganga
 */ 
#ifdef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD=0X00;
    while (1) 
    {
		PORTB=0XFF;
		_delay_ms(2000);
		PORTB=0X00;
		_delay_ms(2000);
    }
}

