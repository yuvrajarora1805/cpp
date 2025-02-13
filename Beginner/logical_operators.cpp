#include <iostream>

int main() {
    bool a = true;
    bool b = false;

    std::cout << "a && b: " << (a && b) << std::endl;
    std::cout << "a || b: " << (a || b) << std::endl;
    std::cout << "!a: " << (!a) << std::endl;

    return 0;
}