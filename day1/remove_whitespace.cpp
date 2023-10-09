// 8. Write a C++ program that takes a user input string and removes all leading and trailing whitespace using appropriate functions. Print the modified string.

#include <iostream>
#include <string>

int main(){
    std::string str;
    
    std::cout<<"Please enter a string: "<< std::endl;
    std::getline(std::cin, str);

    // Leading whitespace
    int i = 0;
    while(str[i] == ' ' && i < str.length()){
        str.erase(i, 1);
    }

    // Trailing whitespace
    int n = str.length() - 1;
    while(n >= 0 && str[n] == ' '){
        str.erase(n, 1);
        n--;
    }

    std::cout<<"Final string: "<< str <<std::endl;
}