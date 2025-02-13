#include <iostream>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 3;

    std::cout << "Sum: " << add(num1, num2) << std::endl;

    return 0;
}