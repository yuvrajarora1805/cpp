#include <iostream>

void modifyByPointer(int* p) {
    *p += 5;
}

void modifyByReference(int& r) {
    r += 10;
}

int main() {
    int num = 20;

    std::cout << "Original value: " << num << std::endl;

    modifyByPointer(&num);
    std::cout << "After modifying by pointer: " << num << std::endl;

    modifyByReference(num);
    std::cout << "After modifying by reference: " << num << std::endl;

    return 0;
}