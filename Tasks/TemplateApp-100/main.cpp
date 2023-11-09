#include "uop_msb.h"
#include "mbed.h"
using namespace uop_msb;

//output
DigitalOut redLED(PC_2);
DigitalOut yelLED(PC_3);
DigitalOut greLED(PC_6);

LatchedLED disp(LatchedLED::SEVEN_SEG);


int main(){
disp.enable(true);
}

//int
int count = 0;
while(true){
while (count < 4) { 
    redLED = 1;
wait_us(250000);
redLED= 0;
wait_us(250000);
count = count + 1;
}}

//red led on
redLED = 1;

// wait
wait_us(250000);

//red led + yellow led on
yellow LED = 1;

//wait
wait_us(250000);

//green led on yellow led and red led off