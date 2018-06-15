/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools
#include "abdrive.h"

int lightleft, lightright, ndiff;
int speedleft, speedright;
int main()                                    // Main function
{ 
  while(1)
  {
  high(9);
  pause(1);
  lightleft = rc_time(9,1);
  
  high(5);
  pause(1);
  lightright = rc_time(5,1);
  
  ndiff = 200 * lightright / (lightright + lightleft) - 100;
  
  speedleft = 100;
  speedright = 100;
    if(ndiff>=0) speedleft -= (ndiff * 4);
    else speedright += (ndiff * 4);
    
    drive_speed(speedleft, speedright); 
    
    
  }  
}
