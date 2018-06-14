/*
  Ryan Frost
  http://learn.parallax.com/propeller-c-tutorials 
*/

#include "simpletools.h"                      
#include "adcDCpropab.h"

int main()                                  
{
 float volts;
adc_init(21,20,19,18);

 
  while(1)
  {
   volts = adc_in(3);
   high(15);
   low(14);
   freqout(0, 100, 2000-volts);
   pause(volts+200);
   low(15);
   high(14);
   freqout(0, 100, volts+500);
   pause(volts+200);
   print("%cA/D value =%f%c\n", HOME, (volts * 5.0)/4095, CLREOL);
  }  
}
