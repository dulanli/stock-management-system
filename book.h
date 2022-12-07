/*
     book.h
     Author: M00723060
*/

#ifndef _BOOK_H_
#define _BOOK_H_

#include "items.h"

class book : public items{
  
  private:
    std::string book_title;
    std::string book_author;
    std::string book_publisher;

  public:
    book(std::string id, int price, int stock, int sales, std::string title, std::string author, std::string publisher);
    std::string getTitle();
    std::string getAuthor();
    std::string getPublisher();
    void printData();
};

#endif

