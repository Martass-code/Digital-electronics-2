/* Defines -----------------------------------------------------------*/
#define BLINK_DELAY 250
#ifndef F_CPU
#define F_CPU 16000000      // CPU frequency in Hz required for delay
#endif

/* Includes ----------------------------------------------------------*/
#include <util/delay.h>     // Functions for busy-wait delay loops
#include <avr/io.h>         // AVR device-specific IO definitions

int main(void)
{

	DDRC |= (0b00111111); 
	PORTC |= (0b00000000);
	//PORTC &= ~(1<<LED_RED);
	
	


 uint8_t u = 0b00010000;
    // Infinite loop
    while (1)
    {

        // Pause several milliseconds
		for(uint8_t i = 0; i<6; i++)
		{
		PORTC = (1<<i);
		_delay_ms(BLINK_DELAY);	
		}
		
		for(int8_t i = 0; i<4; i++)
		{
			PORTC = (u>>i);
			_delay_ms(BLINK_DELAY);
		}	
	
		
		
		
		
        
    }

    // Will never reach this
    return 0;
}