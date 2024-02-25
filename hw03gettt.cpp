#include "hw03.h"

void getTimeTwelveHour()
{
  int hour, minute, dayTime;

  //user input hours
  std::cout << "What is the hour? (HH)";
  std::cin >> hour;

  // Check if hours are within a valid range
  if(hour > 12 || hour < 0)
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

  //user input Time of day
  std::cout << "Is it AM or PM\n1. AM\n2. PM\n";
  std::cin >> dayTime;

  // Check if minutes are within a valid range
  if(dayTime > 2 || dayTime < 0)
  {
    std::cout << "INVALID MINUTES ENTRY\nTRY AGAIN\n";
    std::cin >> dayTime;
  }

  //pass time to function to convert time
  twelveToTwentyFour(&hour, &minute, &dayTime);
}