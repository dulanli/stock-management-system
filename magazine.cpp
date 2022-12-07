/*
     magazine.cpp
     Author: M00723060
*/

#include "magazine.h"

mag::mag(std::string id, int price, int stock, int sales, std::string title, std::string publisher) :
items(id, price, stock, sales), mag_title(title), mag_publisher(publisher){
}

std::string mag::getTitle(){
     return this->mag_title;
}

std::string mag::getPublisher(){
    return this->mag_publisher;
}

void mag::printData(){
    std::cout << "======================================" << std::endl;
    std::cout << "\t  Magazine Added" << std::endl;
    std::cout << "======================================" << std::endl;
    std::cout << "\tID - " << items::getID() << std::endl;
    std::cout << "\tTitle - " << mag::getTitle() << std::endl;
    std::cout << "\tPublisher - " << mag::getPublisher() << std::endl;
    std::cout << "\tPrice (Rs) - " << items::getPrice() << std::endl;
    std::cout << "\tStock (Qty) - " << items::getStock() << std::endl;
    std::cout << "======================================" << std::endl;
}
