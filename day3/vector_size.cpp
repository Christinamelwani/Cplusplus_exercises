/*
Write a C++ program to find and print the number of elements in the myVector declared 
in the previous exercise using the size() member function.*/

#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> myVector;

    myVector.push_back("apple");
    myVector.push_back("cherry");
    myVector.push_back("banana");
    myVector.push_back("date");
    
    std::cout<<"The size of myVector is "<<myVector.size()<<std::endl;
    return 0;
}