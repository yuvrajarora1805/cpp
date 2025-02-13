#include <iostream>

int main() {
    // Break statement
    for (int i = 0; i < 10; ++i) {
        if (i == 5) {
            std::cout << "Breaking at i = 5" << std::endl;
            break;
        }
        std::cout << "Break loop iteration: " << i << std::endl;
    }

    // Continue statement
    for (int i = 0; i < 10; ++i) {
        if (i % 2 == 0) {
            continue;
        }
        std::cout << "Continue loop iteration: " << i << std::endl;
    }

    return 0;
}