/*
Implement a class template for a generic "Stack" data structure. 
Demonstrate how this template class can be used to create stacks of integers, 
doubles, and strings. Implement push and pop operations and show the stack's 
functionality with various data types.
*/

#include <iostream>
#include <vector>

template <class T>

class myStack{
    private:
        std::vector<T> array;
    public:
        void push(T newMember){
            array.push_back(newMember);
        }
        T pop(){
            T temp = array[array.size() - 1];
            array.pop_back();
            return temp;
        }
};

int main(){
    myStack<int> integerStack;
    myStack<double> doubleStack;
    myStack<char> characterStack;

    integerStack.push(5);
    std::cout<<integerStack.pop()<<std::endl;

    doubleStack.push(5.6);
    std::cout<<doubleStack.pop()<<std::endl;

    characterStack.push('i');
    std::cout<<characterStack.pop()<<std::endl;

    return 0;
}