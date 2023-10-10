/*
Write a C++ program that dynamically allocates an integer array of user-defined size 
(input from the user). Initialize the array with values from 1 to N 
(where N is the user input) using a loop and print the array.
*/

#include <iostream>
#include <array>

int main(){
    int N;
    std::cout<<"Enter the size of myArray: ";
    std::cin>>N;

    int *myArray = new int[N];

    for(int i = 0; i < N; i++){
        myArray[i] = i + 1;
    }

    for(int i = 0; i < N; i++){
        std::cout<<myArray[i]<<" ";
    }

    std::cout<<std::endl;
    return 0;
}