#include "hw03.h"

//
int twentyFourToTwelev(int hour, int min)
{
  int day;

  if(hour > 11 && hour < 24)
  {
    hour = hour - 12;
    day = 2;
  }
  else if(hour < 12)
  {
    day = 1;
  }
  else 
  {
    hour = hour - 24;
    day = 1;
  }

  print(&hour, &min, &day);

  return 0;
}