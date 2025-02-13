#include <iostream>
#include <vector>
#include <string>

class Student {
private:
    std::string name;
    int id;
    float gpa;

public:
    // Constructor
    Student(std::string n, int i, float g) : name(n), id(i), gpa(g) {}

    // Getter for name
    std::string getName() const {
        return name;
    }

    // Getter for ID
    int getId() const {
        return id;
    }

    // Getter for GPA
    float getGpa() const {
        return gpa;
    }

    // Method to display student details
    void displayInfo() const {
        std::cout << "Name: " << name << ", ID: " << id << ", GPA: " << gpa << std::endl;
    }
};

class StudentManagementSystem {
private:
    std::vector<Student> students;

public:
    // Method to add a student
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    // Method to display all students
    void displayAllStudents() const {
        for (const auto& student : students) {
            student.displayInfo();
        }
    }
};

int main() {
    StudentManagementSystem sms;

    // Adding some students
    sms.addStudent(Student("Alice", 1, 3.8));
    sms.addStudent(Student("Bob", 2, 3.5));

    // Displaying all students
    sms.displayAllStudents();

    return 0;
}