/*
    Write a C++ program that demonstrates early binding. Define a base class with a virtual 
    function and a derived class that overrides that function. Create objects of both 
    classes and call the virtual function. Explain how the binding is determined during 
    compilation.
*/

#include <iostream>

class Worker{
    public:
    virtual void work(){
        std::cout<<"sorting through papers"<<std::endl;
    }
};

class Programmer:public Worker{
    public:
    void work(){
        std::cout<<"coding."<<std::endl;
    }
};

int main(){
    Worker w;
    Programmer p;

    w.work();
    p.work();
    
    return 0;
}