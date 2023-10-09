/* 6. Build a C++ program where a user enters a password, and the program masks the password
 by replacing all characters except the last four with asterisks. 
 Print the masked password.*/

#include <iostream>
#include <string>

int main(){
    std::string password;
    
    std::cout<<"Please enter your password: "<< std::endl;
    std::getline(std::cin, password);

    for(int i = 0; i < password.length() - 4; i++){
        password.replace(i, 1, "*");
    }

    std::cout<<"Masked password: "<< password << std::endl;
    return 0;
}

