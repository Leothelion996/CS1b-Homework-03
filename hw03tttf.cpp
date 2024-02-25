#include "hw03.h"

void twelveToTwentyFour(int* hourP, int* minP, int* dayTime)
{
  if(*dayTime == 2) //if input time is PM ...
  {
    *hourP = *hourP + 12; //adds 12 to hour if PM
  }

  //sets AM PM info to 0 so military time output gets printed
  *dayTime = 0;

  //pass variables to print.
  print(hourP, minP, dayTime);
}