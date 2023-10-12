/*
Explore the C++ standard library's exception hierarchy by creating a program that uses 
some of the standard exception classes, such as std::runtime_error, std::logic_error, 
or std::bad_alloc. Demonstrate how to handle these standard exceptions in your code.
*/

#include <iostream>
#include <exception>
#include <string>

int main() {

  try {
    std::string userInput;

    std::cout << "Enter the error you want to trigger: " << std::endl;
    std::cin >> userInput;

    if (userInput == "runtime") {
      throw std::runtime_error("This is a runtime error");
    }
    if (userInput == "logic") {
      throw std::logic_error("This is a logic error");
    }
    if (userInput == "alloc") {
      throw std::bad_alloc();
    }
  } catch (std::runtime_error err) {
    std::cout << err.what() << std::endl;
  } catch (std::logic_error err) {
    std::cout << err.what() << std::endl;
  } catch (std::bad_alloc err) {
    std::cout << err.what() << std::endl;
  }
  return 0;
}