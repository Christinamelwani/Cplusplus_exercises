#include <iostream>
#include <string>

// 2. Create a C++ program that takes a user input string and two integer indices 
// (start and end). Use the substr function to extract a substring from the input 
// string starting from the start index and ending at the end index (inclusive). 
// Print the extracted substring.

int main(){
    std::string str;
    int start;
    int end;

    std::cout<<"Enter a string: "<<std::endl;
    std::getline(std::cin, str);

    std::cout<<"Enter the starting position: "<<std::endl;
    std::cin>>start;

    std::cout<<"Enter the ending position: "<<std::endl;
    std::cin>>end;

    if(end < str.length() && start < end){
        std::cout<<"The string you entered starting from position "<<start<<" to "<<end<<" is: "<<str.substr(start, end)<<std::endl;
    } else{
        std::cout<<"The starting and end position are unsuitable. Please check again."<<std::endl;
    }
 
    return 0;
}