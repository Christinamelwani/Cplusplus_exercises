// 3. Write a C++ program that takes a user input string and two 
// substrings to find and replace. 
// Use the replace function to replace all occurrences of the first substring with the second
// substring in the input string. Print the modified string.

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::string str_to_find;
    std::string replace_with;

    std::cout<<"Enter a string: "<<std::endl;
    std::getline(std::cin, str);

    std::cout<<"Enter a string to find: "<<std::endl;
    std::getline(std::cin, str_to_find);

    std::cout<<"Enter a string to replace: "<<std::endl;
    std::getline(std::cin, replace_with);
    
    if (str_to_find.empty()) {
        std::cout << "The string to find cannot be empty." << std::endl;
        return 1;
    }

    size_t found = str.find(str_to_find);
    while(found != std::string::npos){
        str.replace(found, replace_with.length(), replace_with);
        found = str.find(str_to_find, found + replace_with.length());
    }

    std::cout<<"The final string: "<<str<<std::endl;

    return 0;
}