/*
    Authors:Trevor Dunn, Ian
    Start Date:February 27, 2024
    Purpose/Description: This is a library database document designed to help us
    retain our programming skills.
*/

#include "book.h"
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

char askUserForMethod();
std::vector<Book> getBookInfoFromFile();

int main() {

  std::string userName;
  std::cout << "What is your name?";
  getline(std::cin, userName);

  return 0;
}

char askUserForMethod() {
  char userChoice;
  bool inputMethod;
  std::cout << "Enter 1 to enter the book information yourself. Enter 2 to "
               "read the book information from a file";
  std::cin >> userChoice;

  if (userChoice != 1 || 2) {
    throw std::invalid_argument(
        "Your choice must be either 1 or 2. Please try again.");
  } else if (userChoice == 1) {
    inputMethod = 0;
  } else {
    inputMethod = 1;
  }
  return inputMethod;
}

std::vector<Book> getBookInfoFromFile() {
  std::string fileName;
  std::cout << "What is the file name?";
  std::cin >> fileName;

  std::ifstream file(fileName);
  if (!file) {
    throw std::runtime_error("File could not be opened. Please try again.");
  }
}
