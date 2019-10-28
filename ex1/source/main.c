/*	Author: yxing024
 *  Partner(s) Name: Hao Wu
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif




void ADC_init()
{
  ADCSRA |=(1 << ADEN) | (1 << ADSC) | (1 << ADATE);
}

int main(void) {
    /* Insert DDR and PORT initializations */
  DDRB = 0xff; PORTB = 0x00;
  DDRD = 0xff; PORTD = 0x00;

  unsigned short x = ADC;

  unsigned char tmpB;
  unsigned char tmpD;
    /* Insert your solution below */

    ADC_init();

    while (1) {
      x = ADC;
      tmpB = (char)x;
      PORTB = tmpB;

    
      tmpD = (char)(x >> 8);
      PORTD = tmpD;
      //unsigned char my_char = (char)my_short;
      //my_char = (char)(my_short >> 8);
      //PORTB = 
	
      
    }
    return 1;
}
