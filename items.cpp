/*
     items.cpp
     Author: M00723060
*/

#include "items.h"

items::items(){
    this-> item_id = "";
    this-> item_price = 0;
    this-> item_stock = 0;
    this-> item_sales = 0;

}

items::items (std::string id, int price, int stock, int sales){
    this->item_id = id;
    this->item_price = price;
    this->item_stock = stock;
    this->item_sales = sales;
}

items::~items(){
}

std::string items::getID(){
     return this->item_id;
}

int items::getPrice(){
    return this->item_price;
}

int items::getStock(){
    return this->item_stock;
}

void items::setStock(int stock){
    this->item_stock = stock;
}

int items::getSales(){
    return this->item_sales;
}

void items::setSales(int sales){
    this->item_sales = sales;
}

