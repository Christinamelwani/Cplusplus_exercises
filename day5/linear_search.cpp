/*
Write a C++ program that performs a linear search on an array of integers. 
Prompt the user to enter an integer to search for, and then check if that integer 
is present in the array. If it is found, display the index of the first occurrence; 
otherwise, print a message stating that the element was not found.
*/

#include <iostream>

int main(){

    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int integer;

    std::cout<<"Enter an integer to search for: ";
    std::cin>>integer;

    for(int i = 0; i < 10; i++){
        if(array[i] == integer){
            std::cout<<"Integer found at index "<<i<<std::endl;
            return 0;
        }
    }

    std::cout<<"Integer not found."<<std::endl;
    return 0;
}