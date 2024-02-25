#include "hw03.h"

void twelveToTwentyFour(int* hourP, int* minP, int* dayTime)
{
    int dayT = *dayTime;

  if(dayT == 2)
  {
    hourP = hourP + 12;
  }

  print(hourP, minP, dayTime);
}