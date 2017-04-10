
#include <msp430.h>   //calling board memory
#include "led.h"      //LED
#include "libTimer.h" 
#include "switches.h" 
#include "buzzer.h"   

void main(){
    
    configureClocks(); //call for clocking of the LED's and sound
    switch_init(); 
    led_init();        //LED's files
    buzzer_init();     //Buzzer files
    or_sr(0x18);
}
