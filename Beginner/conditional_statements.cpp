#include <iostream>

int main() {
    int num = 10;

    if (num > 0) {
        std::cout << "Number is positive" << std::endl;
    } else if (num < 0) {
        std::cout << "Number is negative" << std::endl;
    } else {
        std::cout << "Number is zero" << std::endl;
    }

    switch (num) {
        case 1:
            std::cout << "Number is 1" << std::endl;
            break;
        case 2:
            std::cout << "Number is 2" << std::endl;
            break;
        default:
            std::cout << "Number is not 1 or 2" << std::endl;
    }

    return 0;
}