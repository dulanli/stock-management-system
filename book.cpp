/*
     book.cpp
     Author: M00723060
*/

#include "book.h"

book::book(std::string id, int price, int stock, int sales, std::string title, std::string author, std::string publisher) :
items(id, price, stock, sales), book_title(title), book_author(author), book_publisher(publisher){
}

std::string book::getTitle(){
     return this->book_title;
}

std::string book::getAuthor(){
     return this->book_author;
}

std::string book::getPublisher(){
    return this->book_publisher;
}

void book::printData(){
    std::cout << "======================================" << std::endl;
    std::cout << "\t\tMagazine Added" << std::endl;
    std::cout << "======================================" << std::endl;
    std::cout << "\tID - " << items::getID() << std::endl;
    std::cout << "\tTitle - " << book::getTitle() << std::endl;
    std::cout << "\tAuthor - " << book::getAuthor() << std::endl;
    std::cout << "\tPublisher - " << book::getPublisher() << std::endl;
    std::cout << "\tPrice (Rs) - " << items::getPrice() << std::endl;
    std::cout << "\tStock (Qty) - " << items::getStock() << std::endl;
    std::cout << "======================================" << std::endl;
}

