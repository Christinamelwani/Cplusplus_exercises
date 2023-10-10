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