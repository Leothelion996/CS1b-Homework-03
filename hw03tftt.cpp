#include "hw03.h"

//converts time from 24hr to 12h
int twentyFourToTwelev(int hour, int min)
{
  //int to keep track in AM or PM is needed in print
  int day;

  if(hour > 11 && hour < 24)
  {
    hour = hour - 12; //subracts 12 from the military time over 12
    day = 2; //sets to PM
  }
  else if(hour < 12)
  {
    day = 1; //sets to AM
  }
  else 
  {
    hour = hour - 24; //used to fix issue with midnight being shown wrong.
    day = 1;
  }

  print(&hour, &min, &day); //send to print

  return 0;
}