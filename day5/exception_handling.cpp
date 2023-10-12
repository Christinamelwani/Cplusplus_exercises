/*
Create a C++ program that reads two numbers from the user and performs division. 
Implement exception handling to catch and display an error message if the denominator 
is zero.
*/

#include <iostream>

int main() {
  int num1;
  int num2;

  try {
    std::cout << "Enter a number: " << std::endl;
    std::cin >> num1;

    std::cout << "Enter its divisor: " << std::endl;
    std::cin >> num2;

    if (num2 == 0) {
      throw 0;
    }

    int result = num1 / num2;

    std::cout << num1 << " divided by " << num2 << " is " << result << std::endl;
  } catch (int err) {
    std::cout << "Cannot divide by " << err << std::endl;
  }

  return 0;
}