 
#include <msp430.h>
#include "led.h"
#include "switches.h"

void led_init(){
  P1DIR |= LEDS;		// bits attached to the LED's are output in the launchpad
  switch_state_changed = 1;
  led_update();
}

void led_update(){
  if (switch_state_changed) {
    char ledFlags = 0; /* by default, no LEDs on */

    ledFlags ^= switch_state_down ? LED_RED : 0; // either one or the other but not both. When one turns green the other will be 0
    ledFlags ^= switch_state_down ? 0 : LED_GREEN;

    P1OUT &= (0xff - LEDS) | ledFlags; // clear bits for off leds that are not being used
    P1OUT ^= ledFlags;         // will set bits for LED's that are on or in use
  }
  switch_state_changed = 0; //will keep it continuous after every update.
}
