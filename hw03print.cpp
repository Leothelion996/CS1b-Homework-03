#include "hw03.h"

void print(int* hourP, int* minP, int* dayTime)
{
  //use this to force no daytime being passed
  int milTimeFlag = 0;

  std::cout << "\nThe time is ";

  if(*dayTime == 2)
  {
      int min = *minP;
      std::cout << *hourP << ":";
      singleDigit(min);
      std::cout << "PM\n";
  }
  else if(*dayTime == 1)
  {
      int min = *minP;
      std::cout << *hourP << ":";
      singleDigit(min);
      std::cout << "AM\n";
  }
  else
  {
      int min = *minP;
      std::cout << *hourP << ":";
      singleDigit(min);
      std::cout << " Military Time.\n";
  } 
}

//checks if the minute input 
void singleDigit(int minute)
{
  int minLength = std::to_string(minute).length();

  if(minLength == 1)
  {
    std::cout << "0" << minute;      
  }
  else
  {
      std::cout << minute;
  }
  
}