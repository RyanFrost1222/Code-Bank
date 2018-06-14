/*
  Ryan Frost
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools

 const int button_1 = 1;
 const int button_2 = 0;
 const int led_1   = 15;
 const int led_2   = 14;
int main()                                   
{
 int pressed_1;
 int pressed_2;
 int number;
  while(1)
  {
    pressed_1 = input(button_1);
    if(pressed_1 == 1)
    high(led_1);

    else
    low(led_1);
    
        pressed_2 = input(button_2);
    if(pressed_2 == 1)
    
    high(led_2);
    
    else
    low(led_2);
    
    print("%c Button 1 is %d %c\n", HOME, pressed_1, CLREOL);
    print("Button 2 is %d %c\n", pressed_2, CLREOL);
    number = (pressed_2 * pow(2,1)) + (pressed_1 * pow(2,0));
    print("Decimal number = %d%c\n", number, CLREOL);
    pause(50);
  }  
}
