/*
Write a C++ program that creates a text file named "output.txt" and writes a series of lines
to it. Each line should contain a message. Make sure to check if the file is opened 
successfully and handle errors.
*/

#include <iostream>
#include <fstream>

int main(){
    std::ofstream file("output.txt");

    if(!file.is_open()){
        std::cout<<"The file could not be opened!";
        return 1;
    }

    file<<"This is the sample output."<<std::endl;
    file<<"This is the sample output."<<std::endl;
    file<<"This is the sample output."<<std::endl;
    file<<"This is the sample output."<<std::endl;

    return 0;
}