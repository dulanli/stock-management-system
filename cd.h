/*
    cd.h
    Author: M00723060
*/

#ifndef _CD_H_
#define _CD_H_

#include "items.h"

class cd : public items{
  
  private:
    std::string cd_name;
    std::string cd_singer;
    std::string cd_album;
    int cd_duration;

  public:
    cd();
    cd(std::string id, int price, int stock, int sales, std::string name, std::string singer, std::string album, int duration);
    std::string getName();
    std::string getSinger();
    std::string getAlbum();
    int getDuration();
    void printData();

};

#endif

