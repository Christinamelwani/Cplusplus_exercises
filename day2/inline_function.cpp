/* Define an inline function called square that takes an integer as an argument and 
returns its square. Use this function in your program to calculate the square of a 
user-inputted integer.*/

#include <iostream>

inline int square(int integer){
    return integer * integer;
}

int main(){
    int integer;

    std::cout<<"Enter an integer: "<<std::endl;
    std::cin>>integer;

    int result = square(integer);

    std::cout<<"The square of "<<integer<<" is "<<result<<std::endl;
    return 0;
}