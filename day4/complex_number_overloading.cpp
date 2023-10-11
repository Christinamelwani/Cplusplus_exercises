/*
Create a C++ class ComplexNumber to represent complex numbers. 
Overload the addition (+) and subtraction (-) operators for complex numbers. 
Implement a method to display the complex number. 
Demonstrate the use of these overloaded operators.
*/

#include <iostream>
#include <string>

class complexNumber{
    private:
    std::string number;

    public:
    complexNumber(std::string n): number(n){};   

    complexNumber operator+(complexNumber c){
        int real1= int(number.at(this->number.find("+") + 2)) - 48;
        int real2= int(c.number.at(c.number.find("+") + 2)) - 48;
        int img1 = number[this->number.find("i") - 1] - 48;
        int img2 = c.number[c.number.find("i") - 1] - 48;  

        int realSum = real1 + real2;
        int imgSum = img1 + img2;

        return complexNumber(std::to_string(imgSum) + "i + "+ std::to_string(realSum));
    }

        complexNumber operator-(complexNumber c){
        int real1= int(number.at(this->number.find("+") + 2)) - 48;
        int real2= int(c.number.at(c.number.find("+") + 2)) - 48;
        int img1 = number[this->number.find("i") - 1] - 48;
        int img2 = c.number[c.number.find("i") - 1] - 48;  

        int realSum = real1 - real2;
        int imgSum = img1 - img2;

        return complexNumber(std::to_string(imgSum) + "i + "+ std::to_string(realSum));
    }


    std::string getNumber(){
        return number;
    }
};

int main(){

    complexNumber complex1("2i + 3");
    complexNumber complex2("1i + 4");

    complexNumber sum = (complex1 + complex2);
    complexNumber diff = (complex1 - complex2);

    std::cout<<diff.getNumber()<<std::endl;
    return 0;
}