/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools

int main()                                    // Main function
{
  int timecounter;
  int interval;
  char again = 'Y';
  float average = 0;
  int rounds = 0;
  char no = 'N';
  
  srand(CNT);
  print(" Game Instructions: \n");
  print("The blue LED will turn on when the game starts. \n");
  print("When the green LED turns on ,\n");
  print("let go of the button as fast as you can. \n\n");
 
  
  
  while (again == 'Y' || again == 'y')
  {
   print("Press and hold the button to start. \n");
   print("____________________________________________\n");
   while(input(3) == 0)
   {
     // intentionally blank
   }  
   print("Get ready \n");   
   high(15);
   low(14);
  
   
   interval = (rand() % 1001) + 500;
   pause(interval);
   low(15);
   high(14);
   timecounter = 0;
   while (input(3) == 1)
   {
     pause(1);
     timecounter = timecounter + 1;
   }
   low(14);
   if (timecounter > 0)
   {
     rounds = rounds + 1;
     average = average + timecounter;
     print("Your time was %d ms.  \n", timecounter);
     print("Good Job \n");
 
   }
   else
   {
   print(" OOPS! You let go of the button to soon. \n");
   freqout(0,500,2000);
   }   
   
   print(" Would you like to play again?  (Y/N) ");  
   scan("%c", &again);  
   
   
   
   
    
  }// end of play again loop    
  print("Goodbye! Your average time was %0.2f ms. \n", average/rounds);
  print("Thanks For Playing.\n");
  print("          ___ \n");
  print("         /   | \n");
  print("         |   | \n");
  print("         |   |  \n");
  print(" ________|   | \n");
  print("(_______     | \n");
  print("(_______     | \n");
  print("(_______     | \n");
  print("(____________|        Thanks For Playing \n");
  }
  
  
  
