/* Defines -----------------------------------------------------------*/
#define LED_GREEN   PB5     // AVR pin where green LED is connected
#define LED_RED PC0 // AVR pin where red LED is connected
#define PUSH_BUTTON PD0 // AVR pin where pushbutton is connected
#define BLINK_DELAY 500
#ifndef F_CPU
#define F_CPU 16000000      // CPU frequency in Hz required for delay
#endif

/* Includes ----------------------------------------------------------*/
#include <util/delay.h>     // Functions for busy-wait delay loops
#include <avr/io.h>         // AVR device-specific IO definitions

/* Functions ---------------------------------------------------------*/
/**
 * Main function where the program execution begins. Toggle two LEDs 
 * when a push button is pressed.
 */
int main(void)
{
    /* GREEN LED */    
    DDRB |= (1<<LED_GREEN); // Set pin as output in Data Direction Register...
	PORTB &= ~(1<<LED_GREEN); // ...and turn LED off in Data Register
	/* RED LED */
	DDRC |= (1<<LED_RED); // Set pin as output in Data Direction Register...
	PORTC &= ~(1<<LED_RED); // ...and turn LED off in Data Register
	/* PUSHBUTTON */
	DDRD &= ~(1<<PUSH_BUTTON); // Set pin as input in Data Direction Register...
	PORTD |= (1<<PUSH_BUTTON); // Set pull-up resistor
	
	    // Infinite loop
    while (1)
    {
		if(bit_is_clear(PIND, PUSH_BUTTON)) //if button is pressed blink with LEDs
		{
        // Pause several milliseconds
        _delay_ms(BLINK_DELAY);
		PORTB ^= (1<<LED_GREEN);
		PORTC ^= (1<<LED_RED);
		}
        
    }

    // Will never reach this
    return 0;
}