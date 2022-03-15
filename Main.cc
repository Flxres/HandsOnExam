#include <iostream>
#include "cookie.h"

int main() {
  std::cout << "Do you like chocolate chip cookies? Enter \"yes\" or \"no\": ";
  bool likes_cookies = false;
  likes_cookies = GetYesOrNoInput();
  if (likes_cookies) {
    std::cout << "Yummy yummy chocolate chip cookies!" << std::endl;
  } else {
    std::cout << "One less person to worry about eating my chocolate chip cookies." << std::endl;
  }
  return 0; 
}
