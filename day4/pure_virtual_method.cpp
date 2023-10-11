/*
    Create an abstract class with a pure virtual method (a method with "=0" after the 
    declaration). Derive two classes from the abstract class and implement the 
    pure virtual method in each derived class. Instantiate objects of the derived 
    classes and call the pure virtual method. Explain why an abstract class cannot be 
    instantiated.
*/

#include <iostream>

class Worker{
    public:
    virtual void work() = 0;
};

class Programmer:public Worker{
    public:
    void work(){
        std::cout<<"coding."<<std::endl;
    }
};

class Teacher:public Worker{
    public:
    void work(){
        std::cout<<"teaching."<<std::endl;
    }
};


int main(){
    Programmer p;
    Teacher t;

    Worker* worker1 = &t;
    Worker* worker2 = &p;

    worker1->work();
    worker2->work();
    
    return 0;
}