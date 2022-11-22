#include <iostream>
#include <stdlib.h>

/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/

int main() {
  // Live long and prosper
  srand (time(NULL));

  int computer = rand() % 3 + 1;

  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) rock\n";
  std::cout << "2) paper\n";
  std::cout << "3) scissors\n";

  std::cout << "shoot! \n";

  std::cin >> user;

  std::cout << "Computer chose " << computer << "\n";

  if (user == 1) {
    if (computer == 1) {
      std::cout << "It's a tie!\n";
    } else if (computer == 2) {
      std::cout << "Computer wins!\n";
    } else if (computer == 3) {
      std::cout << "User wins!\n";
    }
  } else if (user == 2) {
    if (computer == 1) {
      std::cout << "User wins!\n";
    } else if (computer == 2) {
      std::cout << "It's a tie!\n";
    } else if (computer == 3) {
      std::cout << "Computer wins!\n";
    } 
  } else if (user == 3) {
    if (computer == 1) {
      std::cout << "Computer wins!\n";
    } else if (computer == 2) {
      std::cout << "User wins!\n";
    } else if (computer == 3) {
      std::cout << "It's a tie!\n";
    } 
  }

}