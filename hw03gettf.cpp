#include "hw03.h"

void getTimeTwentyFourHour()
{
  int hour, minute;

  //user input hours
  std::cout << "What is the hour? (HH)";
  std::cin >> hour;

  // Check if hours are within a valid range
  if(hour > 24 || hour < 0)
  {
    std::cout << "INVALID HOURS ENTRY\nTRY AGAIN\n";
    std::cin >> hour;
  }

  //user input minutes
  std::cout << "What are the minutes?(MM)";
  std::cin >> minute;

  // Check if minutes are within a valid range
  if(minute > 59 || minute < 0)
  {
    std::cout << "INVALID MINUTES ENTRY\nTRY AGAIN\n";
    std::cin >> minute;
  }

  //pass time to function to convert time
  twentyFourToTwelev(hour, minute);
}
