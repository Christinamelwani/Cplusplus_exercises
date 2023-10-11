/*
    Create a base class "Shape" and derive two classes, "Circle" and "Rectangle," from it. 
    Implement a method "CalculateArea()" in both child classes. Show how polymorphism allows
    you to call the "CalculateArea()" method on an object of the base class, which can refer
    to objects of both "Circle" and "Rectangle" classes.
*/

#include <iostream>

class Shape{
    private:
    int sideLength;

    public:
    virtual int calculateArea(){
        return sideLength * sideLength;
    }
};

class Rectangle: public Shape{
    private:
    int length;
    int height;

    public:
    int calculateArea(){
        return length * height;
    }

    Rectangle(int l, int h):length(l),height(h){};
};

class Circle : public Shape{
    private:
    int radius;

    public:
    int calculateArea(){
        return radius * radius * 3.14;
    }

    Circle(int r):radius(r){};
};

int main(){
    Rectangle r(1,5);
    Circle c(1);

    Shape* shape1 = &r;
    Shape* shape2 = &c;

    std::cout<<"The area of a rectangle is "<<shape1->calculateArea()<<" while the area of a circle is "<<shape2->calculateArea()<<std::endl; 
    
    return 0;
}