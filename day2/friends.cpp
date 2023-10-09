/* Create a class named Rectangle with private data members length and width. 
Declare a friend function calculateArea outside the class that calculates and 
returns the area of the rectangle using its length and width. Use this friend 
function to calculate the area of a rectangle object in your program. */

class Rectangle{
    private:
    int length;
    int width;

    public:
    Rectangle(int l, int w): length(l), width(w){};
    Rectangle(): length(5), width(7){};

    friend int calculateArea(Rectangle &obj);
};

int calculateArea(Rectangle &obj){
    return obj.length * obj.width;
}

#include <iostream>
int main(){

    Rectangle myRectangle;
    std::cout<<calculateArea(myRectangle)<<std::endl;

    return 0;
}