#include <iostream>
#include <string>
using namespace std;

int main() {

  int choice1, choice2, choice3, choice4, choice5;
  string answer1;
  string answer2;
  string answer3;
  string answer4;
  string answer5;

  std::cout << "\n===================\n"; 
  std::cout << "Let's Write A Story!\n";
  std::cout << "====================\n\n"; 

  std::cout << "\nOnce upon a time there was a...\n";
  std::cout << "  1. young girl who lived in a cottage.\n";
  std::cout << "  2. young boy who lived in a castle.\n";
  std::cout << "  3. old lady who lived in a shoe.\n";
  std::cout << "  4. old man who lived on a boat.\n";
  std::cin >> choice1;
    while (choice1 < 1 || choice1 > 4) {
        std::cout << "Please enter a number between 1-4.\n";
        std::cin >> choice1;
    }
    if (choice1 == 1) {
        answer1 = "young girl who lived in a cottage.";
    } else if (choice1 == 2) {
        answer1 = "young boy who lived in a castle.";
    } else if (choice1 == 3) {
        answer1 = "old lady who lived in a shoe.";
    } else if (choice1 == 4) {
        answer1 = "old man who lived on a boat.";
    } else {
        std::cout << "Please enter a number between 1-4.\n";
        std::cin >> choice1;
    } 
    

  std::cout << "\nThey wanted, more than anything, to...\n";
  std::cout << "  1) be loved by all.\n";
  std::cout << "  2) have a family.\n";
  std::cout << "  3) learn how to bake.\n";
  std::cout << "  4) be successful.\n";
  std::cin >> choice2;
    while (choice2 < 1 || choice2 > 4) {
        std::cout << "Please enter a number between 1-4.\n";
        std::cin >> choice2;
    }
    if (choice2 == 1) {
        answer2 = "be loved by all.";
    } else if (choice2 == 2) {
        answer2 = "have a family.";
    } else if (choice2 == 3) {
        answer2 = "learn how to bake.";
    } else if (choice2 == 4) {
        answer2 = "be successful.";
    } else {
        std::cout << "Please enter a number between 1-4.\n";
        std::cin >> choice2;
    }
 

  std::cout << "\nOne day they set out on a quest to achieve their goal. Along the way, they ran into...\n";
  std::cout << "  1. their long-lost father!\n";
  std::cout << "  2. a huge ogre!\n";
  std::cout << "  3. a huge pile of gold!\n";
  std::cout << "  4. pirates!\n";
  std::cin >> choice3;
    while (choice3 < 1 || choice3 > 4) {
        std::cout << "Please enter a number between 1-4.\n";
        std::cin >> choice3;
    }
    if (choice3 == 1) {
        answer3 = "their long-lost father!";
    } else if (choice3 == 2) {
        answer3 = "a huge ogre!";
    } else if (choice3 == 3) {
        answer3 = "a huge pile of gold!";
    } else if (choice3 == 4) {
        answer3 = "pirates!";
    } else {
        std::cout << "Please enter a number between 1-4.\n";
        std::cin >> choice3;
    }


  std::cout << "\nThey decided to...\n";
  std::cout << "  1) run away.\n";
  std::cout << "  2) cautiously approach.\n";
  std::cout << "  3) jump up and down in excitement.\n";
  std::cout << "  4) start screaming.\n";
  std::cin >> choice4;
    while (choice4 < 1 || choice4 > 4) {
        std::cout << "Please enter a number between 1-4.\n";
        std::cin >> choice4;
    } 
    if (choice4 == 1) {
        answer4 = "run away.";
    } else if (choice4 == 2) {
        answer4 = "cautiously approach.";
    } else if (choice4 == 3) {
        answer4 = "jump up and down in excitement.";
    } else if (choice4 == 4) {
        answer4 = "start screaming.";
    } else {
        std::cout << "Please enter a number between 1-4.\n";
        std::cin >> choice4;
    }

  std::cout << "\nThis was too much adventure for one day, so they decided to return home. They couldn't believe what had happened and had to tell...\n";
  std::cout << "  1. the whole village.\n";
  std::cout << "  2. their cat.\n";
  std::cout << "  3. their family.\n";
  std::cout << "  4. the king.\n";
  std::cin >> choice5;
    while (choice5 < 1 || choice5 > 4) {
        std::cout << "Please enter a number between 1-4.\n";
        std::cin >> choice5;
    } 
    if (choice5 == 1) {
        answer5 = "the whole village.";
    } else if (choice5 == 2) {
        answer5 = "their cat.";
    } else if (choice5 == 3) {
        answer5 = "their family.";
    } else if (choice5 == 4) {
        answer5 = "the king.";
    } 

  std::cout << "\n==========\n";  
  std::cout << "Your Story\n";
  std::cout << "==========\n\n";
  std::cout << "Once upon a time there was a " << answer1 << " They wanted, more than anything, to " << answer2<< " One day they set out on a quest to achieve their goal. Along the way, they ran into " << answer3 << " They decided to " << answer4<< " This was too much adventure for one day, so they decided to return home. They couldn't believe what had happened and had to tell " << answer5 << "\n";
  std::cout << "\nTHE END\n\n";

}