#include "mbed.h"

// main() runs in its own thread in the OS
int main()
{
    while (true) {

        DigitalOut redLED(PC_2);
        DigitalOut yelLED(PC_3);
        DigitalOut greLED(PC_6);

//INITIAL STATE
        redLED = 1;
        yelLED = 0;
        greLED = 0;
//WAIT
        wait_us(1000000);
//TURN YELLOW ON        
        yelLED = 1;
//WAIT
        wait_us(1000000);

//RED OFF
        redLED = 0;
//YELLOW OFF
        yelLED = 0;
//SHORT WAIT
        wait_us(250000);
//GREEN ON
        greLED = 1;

        wait_us(5000000);

//GREEN OFF
        greLED = 0;

//YELLOW ON
        yelLED = 1;

//WAIT      
        wait_us(1000000);
//YELLOW OFF
        yelLED = 0;
//WAIT
        wait_us(250000);
//RED ON
        redLED = 1;
//WAIT
        wait_us(5000000);        
    }
}

