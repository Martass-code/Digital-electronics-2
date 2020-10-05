/* Defines -----------------------------------------------------------*/

#define BLINK_DELAY 250 //speed of blinking
#ifndef F_CPU
#define F_CPU 16000000      // CPU frequency in Hz required for delay
#endif

/* Includes ----------------------------------------------------------*/
#include <util/delay.h>     // Functions for busy-wait delay loops
#include <avr/io.h>         // AVR device-specific IO definitions

int main(void)
{
	//LEDs are on pins PC5 to PC0 (6 total) alternative DDRC |= (1<<PC5)|(1<<PC4)|(1<<PC3)...
	DDRC |= (0b00111111); //set all LEDs as output
	PORTC &= (0b11000000); //set off all LEDs  
	
	uint8_t u = 0b00010000; 
    // Infinite loop
    while (1)
    {
		//rewriting PC7 (not used) and PC6 (defined as input with ext. pull up) does not matter
		
        //swift lighting LED to left
		for(uint8_t i = 0; i<6; i++)
		{
		PORTC = (1<<i);
		_delay_ms(BLINK_DELAY);	
		}
		//swift lighting LED to right
		for(int8_t i = 0; i<4; i++)
		{
			PORTC = (u>>i);
			_delay_ms(BLINK_DELAY);
		}		  
    }
    // Will never reach this
    return 0;
}