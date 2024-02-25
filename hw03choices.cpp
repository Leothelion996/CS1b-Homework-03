#include "hw03.h"


void showChoices()
{
  //sets flag for loop
  bool flag = false;
  
  int menuChoice;

  //prints choices to screen. Loops based on selection.
  do
  {
    std::cout << "How would you like to input the time?\n";
    std::cout << "1. Military Time\n2. Standard Time\n3. Exit\n";
    std::cin >> menuChoice;

    switch(menuChoice)
    {
      case 1: //goes to func for 24hr input menu
        getTimeTwentyFourHour();
        break;
      case 2: //goes to func for 12hr input menu
        getTimeTwelveHour();
        break;
      case 3: //exit program
        std::cout << "Goodbye.\n";
        flag = true;
        break;
      default: //for wrong input.
        std::cout << "INVALID ENTRY.\n";
        break;
    }

  } 
  while(!flag);

  return;

}
