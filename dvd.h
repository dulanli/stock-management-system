/*
     dvd.h
     Author: M00723060
*/

#ifndef _DVD_H_
#define _DVD_H_

#include "items.h"

class dvd : public items{
  
  private:
    std::string dvd_name;
    std::string dvd_singer;
    std::string dvd_album;
    int dvd_duration;

  public:
    dvd();
    dvd(std::string id, int price, int stock, int sales, std::string name, std::string singer, std::string album, int duration);
    std::string getName();
    std::string getSinger();
    std::string getAlbum();
    int getDuration();
    void printData();

};

#endif

