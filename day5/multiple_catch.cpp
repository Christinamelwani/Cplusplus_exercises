/*
Expand on the previous program by adding multiple catch statements to handle different 
types of exceptions. For example, catch and handle exceptions related to invalid input, 
such as non-numeric values.
*/

#include <iostream>
#include <string>

bool isNumeric(std::string str) {
   for (int i = 0; i < str.length(); i++)
      if (isdigit(str[i]) == false)
         return false; 
      return true;
}

int main() {
  int num1;
  int num2;

  try {
    std::cout << "Enter a number: " << std::endl;
    std::cin >> num1;

    if(!std::cin){
        throw std::string("Number not an integer");
    }

    std::cout << "Enter its divisor: " << std::endl;
    std::cin >> num2;

    if(!std::cin){
        throw std::string("Diviser not an integer");
    }

    if (num2 == 0) {
      throw 0;
    }

    int result = num1 / num2;

    std::cout << num1 << " divided by " << num2 << " is " << result << std::endl;
  } catch (int err) {
    std::cout << "Cannot divide by " << err << std::endl;
  } catch (std::string &err){
    std::cout << err <<std::endl;
  }

  return 0;
}