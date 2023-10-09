#include <iostream>
#include <string>

int calculateSum(int integer1, int integer2){
    return integer1 + integer2;
}

int main(){
    int integer1;
    int integer2;

    std::cout<<"Enter the first integer: "<<std::endl;
    std::cin>>integer1;

    std::cout<<"Enter the second integer: "<<std::endl;
    std::cin>>integer2;

    int result = calculateSum(integer1, integer2);

    std::cout<<"The sum of "<<integer1<<" and "<<integer2<<" is "<<result<<std::endl;
    
    return 0;
}