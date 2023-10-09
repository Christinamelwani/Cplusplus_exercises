/*
Create a header file named "math_functions.h" that contains the prototype of a global 
function double calculateAverage(double a, double b);. 
Implement this function in a separate C++ file named "math_functions.cpp." 
Include the header file in your main program and use the calculateAverage function to 
find the average of two numbers.
*/

#include <iostream>
#include "header_function.h"

int main(){

    int integer1;
    int integer2;

    std::cout<<"Enter the first integer: "<<std::endl;
    std::cin>>integer1;

    std::cout<<"Enter the second integer: "<<std::endl;
    std::cin>>integer2;

    int result = calculateAverage(integer1, integer2);

    std::cout<<"The average of "<<integer1<<" and "<<integer2<<" is "<<result<<std::endl;

    return 0;
}