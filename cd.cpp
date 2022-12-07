/*
     cd.cpp
     Author: M00723060
*/

#include "cd.h"

cd::cd(){
    std::string cd_name = "";
    std::string cd_singer = "";
    std::string cd_album = "";
}

cd::cd(std::string id, int price, int stock, int sales, std::string name, std::string singer, std::string album, int duration) :
items(id, price, stock, sales), cd_name(name), cd_singer(singer), cd_album(album), cd_duration(duration){
}

std::string cd::getName(){
     return this->cd_name;
}

std::string cd::getSinger(){
    return this->cd_singer;
}

std::string cd::getAlbum(){
    return this->cd_album;
}

int cd::getDuration(){
    return this->cd_duration;
}

void cd::printData(){
    std::cout << "======================================" << std::endl;
    std::cout << "\t\tCD Added" << std::endl;
    std::cout << "======================================" << std::endl;
    std::cout << "\tID - " << items::getID() << std::endl;
    std::cout << "\tName - " << cd::getName() << std::endl;
    std::cout << "\tSinger - " << cd::getSinger() << std::endl;
    std::cout << "\tAlbum - " << cd::getAlbum() << std::endl;
    std::cout << "\tDuration - " << cd::getDuration() << std::endl;
    std::cout << "\tPrice (Rs) - " << items::getPrice() << std::endl;
    std::cout << "\tStock (Qty) - " << items::getStock() << std::endl;
    std::cout << "======================================" << std::endl;
}