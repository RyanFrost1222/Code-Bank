/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools
#include "abdrive.h"
#include "ping.h"

int distance, setpoint, errorval, kp, speed;

int main()                                    // Main function
{ 
 
   setpoint = 32;
   kp = -10;
   drive_setRampStep(6);
   7/ticks/sec / 20 ms
  
  while(1)
  {
  
  distance = ping_cm(8);
  errorval = setpoint - distance;
  speed = kp * errorval;
  if(speed< 128) speed = 128;
  if(speed < -128) speed = -128;
  drive_rampStep(speed,speed); 
    
    
  }  
}
