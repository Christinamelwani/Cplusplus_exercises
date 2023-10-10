/*
Create a function that takes a vector of integers and an integer value as parameters. 
The function should return true if the value is found in the vector and false otherwise.*/


#include <iostream>
#include <vector>

bool vectorSearch(std::vector<int> vector, int value){
    for(auto const element: vector){
        if(element == value){
            return true;
        }
    }
    
    return false;
}

int main(){
    std::vector<int> myVector = {1,2,3,4,5};
    int value = 2;

    std::cout<<"The value "<<value<<" is in myVector: "<<vectorSearch(myVector, value)<<std::endl;
    
    return 0;
}