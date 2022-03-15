#include "cookie.h"
#include <iostream>
#include <string>

bool GetYesOrNoInput() {
  std::string yes = "yes";
  std::string no = "no";
  std::string input;
  std::cin >> input;
  while (true) {
    if(input == "yes") {
      return true;
    } else if (input == "no") {
      return false;
    } else {
      std::cout << "Sorry, I didn't understand. Try again: ";
      std::cin >> input;
   }
  }
  return 0;
}
