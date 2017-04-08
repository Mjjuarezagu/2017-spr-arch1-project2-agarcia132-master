
#include <msp430.h>   //calling board memory
#include "led.h"      //LED
#include "libTimer.h" 
#include "switches.h" 
#include "buzzer.h"   

void main(){
    
    configureClocks();
    switch_init();
    led_init();
    buzzer_init();
    or_sr(0x18);
}
