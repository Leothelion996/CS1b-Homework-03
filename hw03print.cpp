#include "hw03.h"

void print(int* hourP, int* minP, int* dayTime)
{
  //use this to force no daytime being passed
  int milTimeFlag = 0;

  //Starts the output
  std::cout << "\nThe time is ";

  if(*dayTime == 2) //checks if dayTime was set for PM
  {
      int min = *minP;
      std::cout << *hourP << ":";
      singleDigit(min);
      std::cout << "PM\n";
  }
  else if(*dayTime == 1) //checks if dayTime was set for PM
  {
      int min = *minP;
      std::cout << *hourP << ":";
      singleDigit(min);
      std::cout << "AM\n";
  }
  else // outputs military time.
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
  //assigns the length of minute input by using it as a string
  int minLength = std::to_string(minute).length();

  //if one number was input for time it adds a 0 in front
  if(minLength == 1) 
  {
    std::cout << "0" << minute;      
  }
  else //prints out minutes as is.
  {
      std::cout << minute;
  }
  
}