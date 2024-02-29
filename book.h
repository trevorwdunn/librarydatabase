// This is a header guard.
#ifndef _BOOKS_H
#define _BOOKS_H_

#include <iostream>
#include <string>

class Book {
private:
  std::string bookTitle{};
  std::string bookDescription{};
  int rating{};
  double price{};
  int quantity{};

public:
  // This is the constructor
  Book();
  Book(std::string bookTitle, std::string bookDescription, int rating,
       double price, int quantity);

  std::string getTitle() const;
  std::string getDescription() const;
  int getRating();
  double getPrice();
  int getQuantity();
  void setTitle(std::string bookTitle);
  void setDescription(std::string bookDescription);
  void setRating(int rating);
  void setPrice(double price);

  void printBookTitleAndCost() const;
  void printBookDescription() const;

  void Print();
};

#endif // !_BOOKS_H_
