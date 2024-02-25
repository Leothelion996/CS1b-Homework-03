#include "hw03.h"

//
int twentyFourToTwelev(int* hourP, int* minP)
{
    int hour = *hourP;
    int min = *minP;

  if(hour > 11 && hour < 24)
  {
    hour = hour - 12;
    std::cout << "The time is: " << hour << ":";
    singleDigit(min);
    std::cout << " PM\n";
  }
  else if(hour < 12)
  {
    std::cout << "The time is: " << hour << ":";
    singleDigit(min);
    std::cout << " AM\n";
  } 
  else 
  {
    hour - 24;
    std::cout << "The time is: 00:";
    singleDigit(min);
    std::cout << " AM\n";
  }
  

  return 0;
}