/*
    Create a C++ program with two functions of the same name but different parameters 
    (function overloading). 
    Demonstrate how you can call these functions with different arguments.
*/

#include <iostream>
#include <string>

void print(){
    std::cout<<"You have not entered anything."<<std::endl;
}

void print(std::string toPrint){
    std::cout<<toPrint<<std::endl;
}

int main(){
    std::string input;

    getline(std::cin, input);

    if(!input.empty()){
        print(input);
    } else {
        print();
    }

    return 0;
}