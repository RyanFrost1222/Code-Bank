/*
  Ryan Frost
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools

int main()                                    // Main function
{
void tempo(ms);
void blink(ms);
 
  while(1)
  {
    freqout(0,500,800);
    pause(650);
    freqout(0,150,1000);
    pause(500);
    freqout(0,1000,1200);
    pause(1000);
    freqout(0,500,200);
    pause(250);
    freqout(0,300,200);
    pause(1000);
    freqout(0,500,1000);
    pause(750);
    freqout(0,150,1200);
    pause(500);
    freqout(0,1000,1400);
    pause(1000);
    freqout(0,500,400);
    pause(250);
    freqout(0,300,400);
    pause(1000);
    
    
    
    
    
    
    
  }
 }