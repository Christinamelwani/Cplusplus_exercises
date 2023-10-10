/*
Declare an integer array named myArray with a size of 5 and initialize it with values 
1, 2, 3, 4, and 5 using a loop. Print the contents of the array.
*/

#include <iostream>
#include <array>

int main(){
    std::array<int, 5> myArray;

    for(int i = 0; i < 5; i++){
        myArray[i] = i + 1;
    } 

    for(const auto &element : myArray){
        std::cout << element << " ";
    }

    return 0;
}