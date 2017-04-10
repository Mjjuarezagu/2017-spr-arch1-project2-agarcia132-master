
#include <msp430.h>
#include "libTimer.h"
#include "switches.h"
#include "buzzer.h"

void buzzer_init(){
    /* 
       
          P2SEL2.6, P2SEL2.7, anmd P2SEL.7 must be zero
          P2SEL.6 must be 1
    */
    timerAUpmode();		/*drive's speaker*/
    P2SEL2 &= ~(BIT6 | BIT7);
    P2SEL &= ~BIT7; 
    P2SEL |= BIT6;
    P2DIR = BIT6;		/* enable output to the speaker */

    // buzzer_set_period(1000);	/*simple sound can modify into notes later*/
    makeSounds();
}

void buzzer_set_period(short cycles){
  CCR0 = cycles; 
  CCR1 = cycles >> 1;		/* one half cycle */
}

void makeSounds() {
    
    if(btn1){
        
        buzzer_set_period(1117.67); //B0
        
    }
    else if(btn2){
        
        buzzer_set_period(1254.55); //A0
        
    }
    else if(btn3){
        
        buzzer_set_period(1580.63); //F0
        
    }
    else if(btn4){
        
        buzzer_set_period(1408.18); //G0
        
    }
    //ITS John Cena!!!!!!
    
}
