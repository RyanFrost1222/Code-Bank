/*
  Ryan Frost
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools

int main()                                    // Main function
{  
   
     int n=1;
     int top=0;
  while (1) 
  while (top<10)
  {
    print("%d\n",n);
    n=n+1;
    high(15);
    high(14);
    high(13);
    pause(200);
    low(15);
    low(14);
    low(13);
    pause(200);
    high(14);
    high(13);
    pause(200);
    low(14);
    low(13);
    pause(200);
    high(13);
    pause(200);
    low(13);
    pause(200);
    {
    high(15);
    pause(100);
    low(15);
    pause(100);
    top=top+1;
    }    
   }    

    
}
