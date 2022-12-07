/*
     magazine.h
     Author: M00723060
*/

#ifndef _MAGAZINE_H_
#define _MAGAZINE_H_

#include "items.h"

class mag : public items{
  
  private:
    std::string mag_title;
    std::string mag_publisher;

  public:
    mag(std::string id, int price, int stock, int sales, std::string title, std::string publisher);
    std::string getTitle();
    std::string getPublisher();
    void printData();
};

#endif

