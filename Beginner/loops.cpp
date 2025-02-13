#include <iostream>

int main() {
    // For loop
    for (int i = 0; i < 5; ++i) {
        std::cout << "For loop iteration: " << i << std::endl;
    }

    // While loop
    int i = 0;
    while (i < 5) {
        std::cout << "While loop iteration: " << i << std::endl;
        ++i;
    }

    // Do-while loop
    i = 0;
    do {
        std::cout << "Do-while loop iteration: " << i << std::endl;
        ++i;
    } while (i < 5);

    return 0;
}