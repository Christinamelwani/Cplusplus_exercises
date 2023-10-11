/*
    Create a C++ program that demonstrates late binding. Create a base class with a virtual
    function and a derived class that overrides that function. Use pointers or references 
    to objects of both classes and call the virtual function. 
    Explain how the binding is determined during runtime.
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

    Worker* worker1 = &w;
    Worker* worker2 = &p;

    worker1->work();
    worker2->work();
    
    return 0;
}