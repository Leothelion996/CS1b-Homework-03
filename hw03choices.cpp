#include "hw03.h"


void showChoices()
{
  //sets flag for loop
  bool flag = false;
  int menuChoice;

  do
  {
    std::cout << "How would you like to input the time?\n";
    std::cout << "1. Military Time\n2. Standard Time\n3. Exit\n";
    std::cin >> menuChoice;

    switch(menuChoice)
    {
      case 1:
      std::cout << "choice 1";
        //getTimeTwentyFourHour();
        break;
      case 2:
        std::cout << "choice 2";
        //getTimeTwelveHour();
        break;
      case 3:
        std::cout << "Goodbye.\n";
        flag = true;
        break;
      default:
        std::cout << "INVALID ENTRY." << std::endl;
        break;
    }

  } 
  while(!flag);

  return;

}
