#include "hw03.h"

void print(int* hourP, int* minP, int* dayTime)
{
  std::cout << "in print"
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