#include <iostream>

int main() {
    int a = 10;
    int b = 5;

    a += b; // a = a + b
    std::cout << "a after a += b: " << a << std::endl;

    a -= b; // a = a - b
    std::cout << "a after a -= b: " << a << std::endl;

    a *= b; // a = a * b
    std::cout << "a after a *= b: " << a << std::endl;

    a /= b; // a = a / b
    std::cout << "a after a /= b: " << a << std::endl;

    a %= b; // a = a % b
    std::cout << "a after a %= b: " << a << std::endl;

    return 0;
}