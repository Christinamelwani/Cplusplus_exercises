/*
Create another C++ program that reads and displays the contents of the "output.txt" 
file you created in Exercise 1. Ensure that the program checks if the file is 
opened successfully and handles errors.*/

#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream file("output.txt");

    if(!file.is_open()){
        std::cout<<"The file could not be opened!";
        return 1;
    }

    while(file){
        std::string temp;
        std::getline(file, temp);
        std::cout << temp << std::endl;
    }

    return 0;
}