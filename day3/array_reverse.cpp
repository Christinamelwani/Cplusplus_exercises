/*
Create a function that takes an integer array as a parameter and reverses 
the elements in the array in-place. Print the reversed array.
*/

#include <iostream>
#include <array>

void reverseArray(std::array<int, 5>& arrayToBeReversed){
    int left = 0;
    int right = arrayToBeReversed.size() - 1;

    while (left < right){
        std::swap(arrayToBeReversed[left], arrayToBeReversed[right]);
        left++;
        right--;
    }
}

int main(){
    std::array<int, 5> myArray = {1, 2, 3, 4, 5};

    reverseArray(myArray);

    for(auto const element: myArray){
        std::cout<<element<<" ";
    }

    std::cout << std::endl;

    return 0;
}