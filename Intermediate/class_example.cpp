#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(std::string n, int a) : name(n), age(a) {}

    // Getter for name
    std::string getName() const {
        return name;
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    // Method to display person details
    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person person1("Alice", 30);
    person1.displayInfo();

    return 0;
}