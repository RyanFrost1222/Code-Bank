/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools
#include "servo.h"


int main()                                    // Main function
{
  int angle = 900;

 
  while(1)
  {
   // get pushbutton state
   if (input(4) == 1)
   angle = angle + 20;
   
   if (input(3) == 1)
   angle = angle - 20;
   
   // limit the angle of the servo
   if (angle > 1800)
   angle = 1800;
   
   if (angle < 0)
   angle = 0;
   
   print("%c angle = %d %c", HOME , angle, CLREOL);
   
   servo_angle(14,angle);
   pause(20);
   
    
  }  
}
