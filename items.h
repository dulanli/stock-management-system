/*
     items.h
     Author: M00723060
*/

#ifndef _ITEMS_H_
#define _ITEMS_H_

#include <string>
#include <iostream>
#include <vector>

class items {
  
  private:
    std::string item_id;
    int item_price;
    int item_stock;
    int item_sales;

  public:
    items();
    items(std::string id, int price, int stock, int sales);
    
    virtual ~items();
    std::string getID();
    int getPrice();
    int getStock();
    int getSales();
    std::string getType();
    void setStock(int stock);
    void setSales(int sales);
    void getType(std::string type);
    
};

#endif


