#include <iostream>
#include <string>

/* Write a C++ program that takes a user input string and an integer index.
 Use the substr function to extract a substring starting from the given 
 index and print it.
 */

int main(){
    std::string str;
    int index;

    std::cout<<"Enter a string: "<<std::endl;
    std::getline(std::cin, str);

    std::cout<<"Enter the starting index: "<<std::endl;
    std::cin>>index;
    
    if (index >= 0 && index < str.length()) {
        std::cout << "Substring starting from index " << index << ": " << str.substr(index) << std::endl;
    } else {
        std::cout << "Invalid index. The index should be non-negative and less than the string length." << std::endl;
    }

    return 0;
}