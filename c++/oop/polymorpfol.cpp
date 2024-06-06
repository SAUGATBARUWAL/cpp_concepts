#include <iostream>

class OverloadedFunctions {
public:
    // Function with one integer parameter
    void print(int num) {
        std::cout << "Integer: " << num << std::endl;
    }

    // Function with two double parameters
    void print(double num1, double num2) {
        std::cout << "Double 1: " << num1 << ", Double 2: " << num2 << std::endl;
    }

    // Function with a string parameter
    void print(const std::string& str) {
        std::cout << "String: " << str << std::endl;
    }
};

int main() {
    OverloadedFunctions obj;

    // Calls the function with one integer parameter
    obj.print(42);

    // Calls the function with two double parameters
    obj.print(3.14, 2.71);

    // Calls the function with a string parameter
    obj.print("Hello, Function Overloading!");

    return 0;
}

