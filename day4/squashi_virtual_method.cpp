/*
    Create a C++ program with a base class that has a squasi virtual method (a virtual 
    method with a function body). Create a derived class that overrides this method. 
    Instantiate objects of both classes and call the method. Explain the behavior.
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