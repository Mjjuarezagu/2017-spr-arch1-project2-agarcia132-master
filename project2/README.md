The msp430 will be used as a little toy for kids. IT will allow the user to play simple tunes and each sound will be accompanied with LED's green light.
In order to use just connect the MSP430 and start playing with the tip buttons. Each button plays a certain note. B, A, F, G are the notes to BTN 1, 2, 3, 4 
in that order.

To modify the sound find the wvelength of the note you want and go into the buzzer.c file. Under that file look at the buttons wavelength (usually in the thousands) and change the number to yours. 

To change the lights cycle or the color go into the led.c and change the color or the way it will output.

after you are done go into the console and enter 
    
    cd 2017 -tab
        enter
    cd project2
        enter
    make all
    
    make load
    
and all the changes will be compiled and done in the MSP430.
