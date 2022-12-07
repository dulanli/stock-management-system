/*
    stockMgtSystem.cpp
    Author: M00723060
*/

#include <stdlib.h>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "items.h"
#include "cd.h"
#include "dvd.h"
#include "magazine.h"
#include "book.h"

// This function creates an empty file
void createFile(std::string f, std::string type){

    std::fstream file;
    file.open (f, std::ios::app);
    file << type << std::endl << "0" << std::endl << "0";
    file.close();
}

// This function rewrites the content of the file
void writeFile(std::string f, std::string type, int stock, int sales){

    std::fstream file;
    file.open (f);
    file << type << std::endl << stock << std::endl << sales;
    file.close();
}

// List the content of a file
void listAll(std::string f){
    
    std::fstream file;
    std::string input1;
    int input2;
    int input3;

    file.open(f.c_str());

    std::cout << "\n\n\t\tItem - " << "Stock - " << "Sales" << std::endl;
    while (file >> input1 >> input2 >> input3){
        std::cout << "\t\t " << input1 << " -  "<< input2 << " -  "<< input3 << std::endl;
    }

    file.close();

}

// Check if quantity is positive
void checkQty(int qty){

    if (qty < 0){
        std::cout << "\n\n>> [ERROR] Enter a valid value" << std::endl << std::endl;
    }
}

void sellItems(){

    int choice;
    int qty;
    std::fstream file;
    std::string type;
    int stock;
    int sales;
    int newStock;
    int newSales;

    while (true){

        std::cout << "\n----- [Sell Items] ----- "<<std::endl;

        std::cout << "\n[Type of Product]"<<std::endl;
        std::cout << "\n [1] CDs"<<std::endl;
        std::cout << " [2] DVDs"<<std::endl;
        std::cout << " [3] Magazines"<<std::endl;
        std::cout << " [4] Books"<<std::endl;
        std::cout << " [5] Exit"<<std::endl;
        std::cout << "> ";
        std::cin >> choice;

        if (choice == 5){
            system("clear");
            std::cout << "\n\n\t>> Goodbye, thank you!"<<std::endl<<std::endl;
            EXIT_SUCCESS;
            break;
        }  

        system("clear");    

        do{

                if (choice == 1){
        
                    std::string f = "cd.txt";

                    file.open(f.c_str());

                    if (file.fail()){

                        std::cout << "\n\n>> [ERROR] Please add an item first" << std::endl << std::endl;
                        break;
                    }

                    else{
                        file >> type >> stock >> sales;
                        file.close();

                        listAll("cd.txt");
                        std::cout << "\nAmount to sell: "; 
                        std::cin >> qty;   
                        checkQty(qty);

                        // Check if there is enough stock to sell
                        if (qty > stock){

                            std::cout << "\n\n>> [ERROR] You can only sell " << sales << "." << std::endl << std::endl;
                            break;
                        }

                        else{
                            newStock = stock - qty;
                            newSales = sales + 1;

                            writeFile(f, "CD", newStock, newSales);
                            break;
                        }
                    }

                    break;
                }
                
                if (choice == 2){

                    std::string f = "dvd.txt";

                    file.open(f.c_str());

                    if (file.fail()){
                        std::cout << "\n\n>> [ERROR] Please add an item first" << std::endl << std::endl;
                        break;
                    }

                    else{

                        file >> type >> stock >> sales;
                        file.close();

                        listAll("dvd.txt");
                        std::cout << "\nAmount to sell: "; 
                        std::cin >> qty;   
                        checkQty(qty);

                        if (qty > stock){

                            std::cout << "\n\n>> [ERROR] You can only sell " << sales << "." << std::endl << std::endl;
                            break;
                        }

                        else{
                            newStock = stock - qty;
                            newSales = sales + 1;

                            writeFile(f, "DVD", newStock, newSales);
                            break;
                        }
                    }

                    break;
                }

                if (choice == 3){

                    std::string f = "mag.txt";

                    file.open(f.c_str());

                    if (file.fail()){
                        std::cout << "\n\n>> [ERROR] Please add an item first" << std::endl << std::endl;
                        break;
                    }

                    else{
                        file >> type >> stock >> sales;
                        file.close();

                        listAll("mag.txt");
                        std::cout << "\nAmount to sell: "; 
                        std::cin >> qty;   
                        checkQty(qty);

                        if (qty > stock){

                            std::cout << "\n\n>> [ERROR] You can only sell " << sales << "." << std::endl << std::endl;
                            break;
                        }

                        else{
                            newStock = stock - qty;
                            newSales = sales + 1;

                            writeFile(f, "Magazine", newStock, newSales);
                            break;
                        }
                    }

                    break;
                }

                if (choice == 4){

                   std::string f = "book.txt";

                    file.open(f.c_str());

                    if (file.fail()){
                        std::cout << "\n\n>> [ERROR] Please add an item first" << std::endl << std::endl;
                        break;
                    }

                    else{
                        file >> type >> stock >> sales;
                        file.close();

                        listAll("book.txt");
                        std::cout << "\nAmount to sell: "; 
                        std::cin >> qty;   
                        checkQty(qty);

                        if (qty > stock){

                            std::cout << "\n\n>> [ERROR] You can only sell " << sales << "." << std::endl << std::endl;
                            break;
                        }

                        else{
                            newStock = stock - qty;
                            newSales = sales + 1;

                            writeFile(f, "Book", newStock, newSales);
                            break;
                        }
                    }

                    break;
                }

        }
        while (choice != 1 && choice != 2 && choice != 3 && choice != 4);

    }   

}

void addItems(){
    
    int type;

    while (true){
        std::string id = "";
        int price = 0;
        int stock = 0;
        int sales = 0;
        std::string name = "";
        std::string singer = "";
        std::string album = "";
        int duration = 0;
        std::string title = "";
        std::string publisher = "";
        std::string author = "";

        std::cout << "\n----- [Add Items] ----- "<<std::endl;

        std::cout << "\n[Type of Product]"<<std::endl;
        std::cout << "\n [1] CDs"<<std::endl;
        std::cout << " [2] DVDs"<<std::endl;
        std::cout << " [3] Magazines"<<std::endl;
        std::cout << " [4] Books"<<std::endl;
        std::cout << " [5] Exit"<<std::endl;
        std::cout << "> ";
        std::cin >> type;

        if (type == 5){
            system("clear");
            std::cout << "\n\n\t>> Goodbye, thank you!"<<std::endl<<std::endl;
            EXIT_SUCCESS;
            break;
        }  

        system("clear");    

        do{

                if (type == 1){
                    
                    std::string f = "cd.txt";

                    std::string theType = "CD";

                    std::cout << "\nEnter ID: "; 
                    std::cin >> id;   

                    std::cout << "Enter Name: ";  
                    std::cin >> name; 

                    std::cout << "Enter Singer: ";  
                    std::cin >> singer; 

                    std::cout << "Enter Album: ";  
                    std::cin >> album;

                    std::cout << "Enter Duration: ";  
                    std::cin >> duration;

                    std::cout << "Enter Price (Rs): ";    
                    std::cin >> price;   

                    std::cout << "Enter Stock: "; 
                    std::cin >> stock; 

                    system("clear");    
                    cd add = cd(id, price, stock, sales, name, singer, album, duration);
                    add.printData();
                    createFile(f, "CD");
                    writeFile(f, "CD", stock, sales);

                    break;
                }
                
                if (type == 2){

                    std::string f = "dvd.txt";

                    std::cout << "\nEnter ID: "; 
                    std::cin >> id;   

                    std::cout << "Enter Name: ";  
                    std::cin >> name; 

                    std::cout << "Enter Singer: ";  
                    std::cin >> singer; 

                    std::cout << "Enter Album: ";  
                    std::cin >> album;

                    std::cout << "Enter Duration: ";  
                    std::cin >> duration;

                    std::cout << "Enter Price (Rs): ";    
                    std::cin >> price;   

                    std::cout << "Enter Stock: "; 
                    std::cin >> stock; 

                    system("clear");    
                    dvd add = dvd(id, price, stock, sales, name, singer, album, duration);
                    add.printData();
                    createFile(f, "DVD");
                    writeFile(f, "DVD", stock, sales);
                    
                    break;
                }

                if (type == 3){

                    std::string f = "mag.txt";

                    std::cout << "\nEnter ID: "; 
                    std::cin >> id;   

                    std::cout << "Enter Title: ";  
                    std::cin >> title; 

                    std::cout << "Enter Publisher: ";  
                    std::cin >> publisher; 

                    std::cout << "Enter Price (Rs): ";    
                    std::cin >> price;   

                    std::cout << "Enter Stock: "; 
                    std::cin >> stock; 

                    system("clear");    
                    mag add = mag(id, price, stock, sales, title, publisher);
                    add.printData();
                    createFile(f, "Magazines");
                    writeFile(f, "Magazines", stock, sales);

                    break;
                }

                if (type == 4){

                    std::string f = "book.txt";

                    std::cout << "\nEnter ID: "; 
                    std::cin >> id;   

                    std::cout << "Enter Title: ";  
                    std::cin >> title; 

                    std::cout << "Enter Author: ";  
                    std::cin >> author; 

                    std::cout << "Enter Publisher: ";  
                    std::cin >> publisher; 

                    std::cout << "Enter Price (Rs): ";    
                    std::cin >> price;   

                    std::cout << "Enter Stock: "; 
                    std::cin >> stock; 

                    system("clear");    
                    book add = book(id, price, stock, sales, title, author, publisher);
                    add.printData();
                    createFile(f, "Book");
                    writeFile(f, "Book", stock, sales);

                    break;
                }

        }
        while (type != 1 && type != 2 && type != 3 && type != 4);

    }   

}

void restockItems(){

    int type;
    int incQty;

    while (true){

        std::cout << "\n----- [Restock Items] ----- "<<std::endl;

        std::cout << "\n[Type of Product]"<<std::endl;
        std::cout << "\n [1] CDs"<<std::endl;
        std::cout << " [2] DVDs"<<std::endl;
        std::cout << " [3] Magazines"<<std::endl;
        std::cout << " [4] Books"<<std::endl;
        std::cout << " [5] Exit"<<std::endl;
        std::cout << "> ";
        std::cin >> type;

        if (type == 5){
            system("clear");
            std::cout << "\n\n\t>> Goodbye, thank you!"<<std::endl<<std::endl;
            EXIT_SUCCESS;
            break;
        }  

        system("clear");    

        do{

                if (type == 1){
                    
                    std::string f = "cd.txt";
                    std::fstream file;
                    std::string type;
                    int stock;
                    int sales;
                    int newStock;

                    file.open(f.c_str());

                    if (file.fail()){
                        std::cout << "\n\n>> [ERROR] Please add an item first" << std::endl << std::endl;
                        break;
                    }

                    else{
                        file >> type >> stock >> sales;
                        file.close();

                        listAll("cd.txt");
                        std::cout << "\nAmount to restock: "; 
                        std::cin >> incQty;   
                        checkQty(incQty);

                        newStock = stock + incQty;
                        writeFile(f, "CD", newStock, sales);
                        break;
                    }
                }
                
                if (type == 2){

                    std::string f = "dvd.txt";
                    std::fstream file;
                    std::string type;
                    int stock;
                    int sales;
                    int newStock;

                    file.open(f.c_str());

                    if (file.fail()){
                        std::cout << "\n\n>> [ERROR] Please add an item first" << std::endl << std::endl;
                        break;
                    }

                    else{
                        file >> type >> stock >> sales;
                        file.close();

                        listAll("dvd.txt");
                        std::cout << "\nAmount to restock: "; 
                        std::cin >> incQty;   
                        checkQty(incQty);

                        newStock = stock + incQty;
                        writeFile(f, "CD", newStock, sales);
                        break;
                    }
                }

                if (type == 3){

                    std::string f = "mag.txt";
                    std::fstream file;
                    std::string type;
                    int stock;
                    int sales;
                    int newStock;

                    file.open(f.c_str());

                    if (file.fail()){
                        std::cout << "\n\n>> [ERROR] Please add an item first" << std::endl << std::endl;
                        break;
                    }

                    else{
                        file >> type >> stock >> sales;
                        file.close();

                        listAll("mag.txt");
                        std::cout << "\nAmount to restock: "; 
                        std::cin >> incQty;   
                        checkQty(incQty);

                        newStock = stock + incQty;
                        writeFile(f, "Magazine", newStock, sales);
                        break;
                    }
                }

                if (type == 4){

                    std::string f = "book.txt";
                    std::fstream file;
                    std::string type;
                    int stock;
                    int sales;
                    int newStock;

                    file.open(f.c_str());

                    if (file.fail()){
                        std::cout << "\n\n>> [ERROR] Please add an item first" << std::endl << std::endl;
                        break;
                    }

                    else{
                        file >> type >> stock >> sales;
                        file.close();

                        listAll("book.txt");
                        std::cout << "\nAmount to restock: "; 
                        std::cin >> incQty;   
                        checkQty(incQty);

                        newStock = stock + incQty;
                        writeFile(f, "Book", newStock, sales);
                        break;
                    }
                }

        }
        while (type != 1 && type != 2 && type != 3 && type != 4);

    }   


}

void updateStock(){

    int choice;
    int value;
    std::fstream file;
    std::string type;
    int stock;
    int sales;

    while (true){

        std::cout << "\n----- [Update Stock] ----- "<<std::endl;

        std::cout << "\n[Type of Product]"<<std::endl;
        std::cout << "\n [1] CDs"<<std::endl;
        std::cout << " [2] DVDs"<<std::endl;
        std::cout << " [3] Magazines"<<std::endl;
        std::cout << " [4] Books"<<std::endl;
        std::cout << " [5] Exit"<<std::endl;
        std::cout << "> ";
        std::cin >> choice;

        if (choice == 5){
            system("clear");
            std::cout << "\n\n\t>> Goodbye, thank you!"<<std::endl<<std::endl;
            EXIT_SUCCESS;
            break;
        }  

        system("clear");    

        do{

                if (choice == 1){
                    
                    std::string f = "cd.txt";

                    file.open(f.c_str());

                    if (file.fail()){
                        std::cout << "\n\n>> [ERROR] Please add an item first" << std::endl << std::endl;
                        break;
                    }

                    else{
                        file >> type >> stock >> sales;
                        file.close();

                        listAll("cd.txt");
                        std::cout << "\nUpdate stock value: "; 
                        std::cin >> value;   
                        checkQty(value);

                        writeFile(f, "CD", value, sales);
                        break;
                    }
                }
                
                if (choice == 2){

                    std::string f = "dvd.txt";

                    file.open(f.c_str());

                    if (file.fail()){
                        std::cout << "\n\n>> [ERROR] Please add an item first" << std::endl << std::endl;
                        break;
                    }

                    else{
                        file >> type >> stock >> sales;
                        file.close();

                        listAll("dvd.txt");
                        std::cout << "\nUpdate stock value: "; 
                        std::cin >> value;   
                        checkQty(value);

                        writeFile(f, "DVD", value, sales);
                        break;
                    }
                }

                if (choice == 3){

                    std::string f = "mag.txt";

                    file.open(f.c_str());

                    if (file.fail()){
                        std::cout << "\n\n>> [ERROR] Please add an item first" << std::endl << std::endl;
                        break;
                    }

                    else{
                        file >> type >> stock >> sales;
                        file.close();

                        listAll("mag.txt");
                        std::cout << "\nUpdate stock value: "; 
                        std::cin >> value;   
                        checkQty(value);

                        writeFile(f, "Magazine", value, sales);
                        break;
                    }
                }

                if (choice == 4){

                    std::string f = "book.txt";

                    file.open(f.c_str());

                    if (file.fail()){
                        std::cout << "\n\n>> [ERROR] Please add an item first" << std::endl << std::endl;
                        break;
                    }

                    else{
                        file >> type >> stock >> sales;
                        file.close();

                        listAll("book.txt");
                        std::cout << "\nUpdate stock value: "; 
                        std::cin >> value;   
                        checkQty(value);

                        writeFile(f, "Book", value, sales);
                        break;
                    }
                }

        }
        while (choice != 1 && choice != 2 && choice != 3 && choice != 4);

    }   
}

void salesReport(){

    std::fstream file;
    std::string type;
    int stock;
    int sales;

    std::cout << "\n\n\t\t----- [Sales Report] ----- "<<std::endl;

    file.open("cd.txt");

    if (file.fail()){
        file.close();
        std::cout << "\t\t    CD - 0 sale" << std::endl;
    }

    else {
        file >> type >> stock >> sales;
        file.close();
        std::cout << "\t\t    CD - " << sales << " sale(s)" << std::endl;
    }

    file.open("dvd.txt");

    if (file.fail()){
        file.close();
        std::cout << "\t\t    DVD - 0 sale" << std::endl;
    }

    else {
        file >> type >> stock >> sales;
        file.close();
        std::cout << "\t\t    DVD - " << sales << " sale(s)" << std::endl;
    }

    file.open("mag.txt");

    if (file.fail()){
        file.close();
        std::cout << "\t\t    Magazines - 0 sale" << std::endl;
    }

    else {
        file >> type >> stock >> sales;
        file.close();
        std::cout << "\t\t    Magazine - " << sales << " sale(s)" << std::endl;
    }

    file.open("book.txt");

    if (file.fail()){
        file.close();
        std::cout << "\t\t    Book - 0 sale" << std::endl;
    }

    else {
        file >> type >> stock >> sales;
        file.close();
        std::cout << "\t\t    Book - " << sales << " sale(s)" << std::endl << std::endl;
    }
}

int main(){
    
    int selection;
    
    system("clear");    // clear the screen

    std::cout<<"==================================="<<std::endl;
    std::cout<<" == ||Stock Management System|| =="<<std::endl;
    std::cout<<"==================================="<<std::endl;

    do{
        std::cout << "\n----- [MENU] -----"<<std::endl;
        std::cout << " [1] Sell Items"<<std::endl;
        std::cout << " [2] Restock Items"<<std::endl;
        std::cout << " [3] Add New Items"<<std::endl;
        std::cout << " [4] Update Stock Quantity"<<std::endl;
        std::cout << " [5] View Sales Report"<<std::endl;
        std::cout << " [6] Exit"<<std::endl;

        std::cout << "> ";
        std::cin >> selection;

        switch(selection){

            case 1:
                system("clear");
                sellItems();
                break;

            case 2:
                system("clear");
                restockItems();
                break;

            case 3:
                system("clear");
                addItems();
                break;

            case 4:
                system("clear");
                updateStock();
                break;

            case 5:
                system("clear");
                salesReport();
                break;

            case 6:
                system("clear");
                std::cout << "\n\n\t>> Goodbye, thank you!"<<std::endl<<std::endl;
                EXIT_SUCCESS;
                break;

            default:
                std::cout << "\n\n\t\t>> [ERROR] Please enter a valid input"<<std::endl<<std::endl;
                break;

        }

    }   while (selection != 1 && selection != 2 && selection != 3 && selection != 4 && selection != 5 && selection != 6);
    
    return 0;

}



