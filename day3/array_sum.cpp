/*
Write a C++ program to find the sum of all elements in the myArray declared 
in the previous exercise.
*/

#include <iostream>
#include <array>

int main(){
    std::array<int, 5> myArray;

    int sum = 0;

    for(int i = 0; i < myArray.size(); i++){
        myArray[i] = i + 1;
    } 

    for(auto const element: myArray){
        sum += element;
    }

    std::cout<<"The sum of all elements in myArray is "<<sum<<std::endl;

    return 0;
}