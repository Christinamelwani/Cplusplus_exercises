/*
Write a C++ program that demonstrates how to create a custom exception class. 
For instance, create an exception class for a specific problem, and then use it in your code
to handle that problem gracefully.
*/

#include <iostream>
#include <string>

class InvalidInput{
    public:
    std::string message;

    InvalidInput(std::string m):message(m){};
};

int main() {
  int num1;
  int num2;

  try {
    std::cout << "Enter a number: " << std::endl;
    std::cin >> num1;

    if(!std::cin){
        throw InvalidInput("Number not an integer");
    }

    std::cout << "Enter its divisor: " << std::endl;
    std::cin >> num2;

    if(!std::cin){
        throw InvalidInput("Diviser not an integer");
    }

    if (num2 == 0) {
      throw 0;
    }

    int result = num1 / num2;

    std::cout << num1 << " divided by " << num2 << " is " << result << std::endl;
  } catch (int err) {
    std::cout << "Cannot divide by " << err << std::endl;
  } catch (InvalidInput err){
    std::cout << err.message <<std::endl;
  }

  return 0;
}