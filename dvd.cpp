/*
     dvd.cpp
     Author: M00723060
*/

#include "dvd.h"

dvd::dvd(std::string id, int price, int stock, int sales, std::string name, std::string singer, std::string album, int duration) :
items(id, price, stock, sales), dvd_name(name), dvd_singer(singer), dvd_album(album), dvd_duration(duration){
}

std::string dvd::getName(){
     return this->dvd_name;
}

std::string dvd::getSinger(){
    return this->dvd_singer;
}

std::string dvd::getAlbum(){
    return this->dvd_album;
}

int dvd::getDuration(){
    return this->dvd_duration;
}

void dvd::printData(){
    std::cout << "======================================" << std::endl;
    std::cout << "\t\tDVD Added" << std::endl;
    std::cout << "======================================" << std::endl;
    std::cout << "\tID - " << items::getID() << std::endl;
    std::cout << "\tName - " << dvd::getName() << std::endl;
    std::cout << "\tSinger - " << dvd::getSinger() << std::endl;
    std::cout << "\tAlbum - " << dvd::getAlbum() << std::endl;
    std::cout << "\tDuration - " << dvd::getDuration() << std::endl;
    std::cout << "\tPrice (Rs) - " << items::getPrice() << std::endl;
    std::cout << "\tStock (Qty) - " << items::getStock() << std::endl;
    std::cout << "======================================" << std::endl;
}

