#include "mbed.h"

DigitalOut redLED(LED_RED);
DigitalOut greenLED(LED_GREEN);

int rLed(DigitalOut& ledpin);
int gLed(DigitalOut& ledpin);

int main()
{
   redLED = 1;
   greenLED = 1;
   while (true) {
       rLed(redLED);
       gLed(greenLED);
   }
}