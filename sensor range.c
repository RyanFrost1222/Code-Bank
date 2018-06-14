/*
  Ryan Frost
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools
const int trigger_pin = 0;
const int echo_pin    = 1;
const int send_led    =26;
const int recv_led    =27;
const int warn_led    =15;
const int ok_led      =14;
int main()                                    // Main function
{
  long distance;
  long duration;
  low(trigger_pin);
  low(echo_pin);
  low(send_led);
  low(recv_led);
  low(warn_led);
  low(ok_led);
  pause(250);

 
  while(1)
  {
   high(send_led);
   pulse_out(trigger_pin,10);
   duration = pulse_in(echo_pin,1);
   low(send_led);
   pause(50);
   high(recv_led);
   print("%c%c",HOME,CLREOL);
   distance=duration/148;
   print("distance=%d inches", distance);
   low(recv_led);
   if(distance<12)
   {
     high(warn_led);
     low(ok_led);
     freqout(10,distance*100-100,2500);
   }     
   else
   {
    low(warn_led);
    high(ok_led);
   }    
   pause(250);
   
    
  }  
}
