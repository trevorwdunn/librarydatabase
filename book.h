// This is a header guard.
#ifndef _BOOKS_H
#define _BOOKS_H_

#include <iostream>
#include <string>

class Book {
private:
  std::string bookTitle;
  std::string bookDescription;
  int rating;
  double price;

public:
  void setTitle(std::string bookTitle);
  void setDescription(std::string bookDescription);
  void setRating(int rating);
  void setPrice(double price);
  void Print();
};

#endif
