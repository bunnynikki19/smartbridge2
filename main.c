/*
 * sensorir.c
 *
 * Created: 11-06-2019 15:27:26
 * Author : ganga
 */ 
#ifdef F_CPU
#define  F_CPU 16000000UL
#endif
#include <avr/io.h>

#define LED_OUTPUT PORTB
#define  PIR_input PINC
int main(void)
{
    DDRC=0X00;
	DDRB=0XFF;
    while (1) 
    {
		LED_OUTPUT=PIR_input;
    }
}

