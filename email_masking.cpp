/* 7. Create a C++ program that takes an email address as input. Use the find and replace functions to redact the email address by replacing characters in the local part (before '@') with asterisks, while keeping the domain part unchanged. Print the redacted email address.*/

#include <iostream>
#include <string>

int main(){
    std::string email;
    
    std::cout<<"Please enter your email: "<< std::endl;
    std::getline(std::cin, email);

    int domain_position = email.find("@");

    if(domain_position == std::string::npos){
        std::cout<<"Not a valid email!"<<std::endl;
        return 1;
    }

    std::string maskedEmail(domain_position, '*');
    maskedEmail += email.substr(domain_position);

    std::cout<<"Your masked email is: "<< maskedEmail<<std::endl;

    return 0;
}

