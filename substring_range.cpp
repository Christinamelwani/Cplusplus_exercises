#include <iostream>
#include <string>

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