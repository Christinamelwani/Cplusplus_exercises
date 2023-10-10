/*
Declare a vector of strings called myVector. 
Add the strings "apple," "banana," "cherry," and "date" to the vector. 
Then, print the elements of the vector.
*/

#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> myVector;

    myVector.push_back("apple");
    myVector.push_back("cherry");
    myVector.push_back("banana");
    myVector.push_back("date");

    for(auto const element: myVector){
        std::cout<<element<<" ";
    }

    std::cout<<std::endl;
    return 0;
}