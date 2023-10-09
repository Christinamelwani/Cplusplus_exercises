/* 
Create a base class called Shape with a virtual function calculateArea().
Create two derived classes, Rectangle and Circle, both inheriting from Shape. 
Implement the calculateArea() function differently in each derived class. 
Create objects of both derived classes and call the calculateArea() function on them. 
Observe how dynamic binding works.
*/

#include <iostream>

class Shape{
    private:
    int sideLength;

    public:
    virtual int calculateArea(){
        return sideLength * sideLength;
    }
    Shape():sideLength(5){}
};

class Rectangle : public Shape{
    private:
    int length;
    int bredth;

    public:
    int calculateArea(){
    return length * bredth;
    }
    Rectangle():length(5),bredth(9){}
};

class Circle : public Shape{
    private:
    int radius;

    public:
    int calculateArea(){
    return radius * radius * 3.14;
    }

    Circle():radius(5){}
};


int main(){

    Shape myShape;
    Rectangle myRectangle;
    Circle myCircle;

    std::cout<<myShape.calculateArea()<<std::endl;
    std::cout<<myRectangle.calculateArea()<<std::endl;
    std::cout<<myCircle.calculateArea()<<std::endl;

    return 0;
}