#include "hw03.h"

void twelveToTwentyFour(int* hourP, int* minP, int* dayTime)
{
  if(*dayTime == 2)
  {
    *hourP = *hourP + 12;
  }
  *dayTime = 0;
  print(hourP, minP, dayTime);
}