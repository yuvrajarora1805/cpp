#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    std::cout << "Add 2 numbers: " << add(5, 3) << std::endl;
    std::cout << "Add 3 numbers: " << add(5, 3, 2) << std::endl;

    return 0;
}