/*
Write a C++ program that removes all occurrences of a specific element (provided by the user)
from the myVector and prints the modified vector.
*/

#include <iostream>
#include <vector>

int main(){
    int value;
    std::vector<int> myVector = {1,2,3,4,5,2,2,2,3,4,5};

    std::cout<<"Enter the value you want to remove: ";
    std::cin>>value;
    
    std::vector<int>::iterator it = myVector.begin();

    while (it != myVector.end()) {
        if (*it == value) {
            it = myVector.erase(it); 
        } else {
            ++it; 
        }
    }
    
    for(int i = 0; i < myVector.size(); i++){
        std::cout<<myVector[i]<<" ";
    }
    
    std::cout<<std::endl;
}