/*
Create a program with nested function calls. Implement exception handling to demonstrate 
stack unwinding. When an exception is thrown in a deeply nested function, make sure to
observe the order of function calls being unwound.
*/

#include <iostream>
#include <string>

void function4(){
    std::cout<<"Function4 being called here";
    throw std::string("Oops! Error");
}

void function3(){
    std::cout<<"Function3 being called here";
    function4();
}

void function2(){
    std::cout<<"Function2 being called here";
    function3();
}

void function1(){
    std::cout<<"Function1 being called here";
    function2();
}

int main(){

    try{
        function1();
    }catch(std::string &err){
        std::cout<<err<<std::endl;
    }

    return 0;
}