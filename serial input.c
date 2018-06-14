/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools
const int top_button    = 1;
const int bottom_button = 0;
int main()                                    // Main function
{
 int input_bit;
 int i = 0;
 
  while(i < 4)
  {
  while (input(top_button) == 0)  //waiting for the clock button to be pressed
   {
  // intentionally blank
   }  
  while (input(top_button) == 1)  //waiting for the clock button to be let go
   {
    //intentionally blank
   } 
   input_bit = input_bit << 1;
   input_bit =input_bit + input(bottom_button);
   print(" We read input bit %d\n", input(bottom_button));  
   i = i + 1; 
  }  
  print("Number is %d\n" ,input_bit);
}
