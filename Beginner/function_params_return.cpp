#include <iostream>

// Function to multiply two numbers
double multiply(double a, double b) {
    return a * b;
}

int main() {
    double num1 = 5.5;
    double num2 = 3.2;

    std::cout << "Product: " << multiply(num1, num2) << std::endl;

    return 0;
}