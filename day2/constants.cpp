/* 
Create a class named Circle that has a constant member variable radius. 
Implement a constant member function calculateArea that calculates and returns 
the area of the circle. Create a constant object of the Circle class and use it to
calculate the area.
*/

#include <iostream>

class Circle{
    private:
    const int radius;

    public:
    Circle(int r) : radius (r){};
    Circle (): radius (5){};

    int calculateArea() const{
        return 3.14 * radius * radius;
    }
};

int main(){
    const Circle myCircle;
    int area = myCircle.calculateArea();
    
    std::cout<<"The area of your circle is "<<area<<std::endl;
    return 0;
}