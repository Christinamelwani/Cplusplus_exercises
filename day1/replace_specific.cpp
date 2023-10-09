// 5. Write a C++ program that takes a user input string and a word to find and replace. Additionally, take an integer representing the occurrence number (e.g., 2 for the second occurrence) to replace only that specific occurrence of the word. Use appropriate functions to accomplish this and print the modified string.


#include <iostream>
#include <string>

int main(){
    std::string str;
    std::string str_to_find;
    std::string replace_with;
    int occurences;

    std::cout<<"Enter a string: "<<std::endl;
    std::getline(std::cin, str);

    std::cout<<"Enter a string to find: "<<std::endl;
    std::getline(std::cin, str_to_find);

    std::cout<<"Enter a string to replace: "<<std::endl;
    std::getline(std::cin, replace_with);
    
    std::cout<<"Enter the number of occurences of that string to replace: "<<std::endl;
    std::cin>>occurences;

    if (str_to_find.empty()) {
        std::cout << "The string to find cannot be empty." << std::endl;
        return 1;
    }

    size_t found = str.find(str_to_find);
    int count_replaced = 0;
    while(found != std::string::npos && count_replaced < occurences){
        str.replace(found, replace_with.length(), replace_with);
        found = str.find(str_to_find, found + replace_with.length());
        count_replaced++;
    }

    std::cout<<"The final string: "<<str<<std::endl;

    return 0;
}