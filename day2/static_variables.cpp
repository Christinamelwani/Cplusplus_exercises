/*
Create a class called Counter with a static integer variable count. 
Implement a member function incrementCount that increments the count variable each time 
it's called. Create multiple objects of the Counter class and observe the behavior of the 
static variable.
*/

#include <iostream>

class Counter{
    private:
    static int count;

    public:
    void incrementCount(){
        count++;
        std::cout<<"The value of count is now "<<count<< std::endl;
    }
};

int Counter::count = 0;

int main(){
    Counter count1;
    Counter count2;

    count1.incrementCount();
    count2.incrementCount();
    count1.incrementCount();
    
    return 0;
}