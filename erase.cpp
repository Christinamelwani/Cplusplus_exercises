/* 4. Create a C++ program that takes a user input string and a substring to erase. Use the erase function to remove all occurrences of the specified substring from the input string. Print the modified string.
*/

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::string to_erase;

    std::cout<<"Enter a string: "<<std::endl;
    getline(std::cin, str);

    std::cout<<"Enter a string to erase within that string: "<<std::endl;
    getline(std::cin, to_erase);

    if (str.empty()) {
        std::cout << "The original string is empty." << std::endl;
        return 1; 
    }

    if (to_erase.empty()) {
        std::cout << "The substring to erase is empty." << std::endl;
        return 1;
    }


    size_t foundPos;
    while((foundPos = str.find(to_erase)) != std::string::npos){
        str.erase(foundPos, to_erase.length());
    }

    std::cout<<"Final string: "<<str<<std::endl;
}