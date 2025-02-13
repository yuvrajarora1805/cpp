#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Writing to a file
    std::ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Hello, this is a test file." << std::endl;
        outFile.close();
    } else {
        std::cout << "Unable to open file for writing" << std::endl;
    }

    // Reading from a file
    std::ifstream inFile("example.txt");
    if (inFile.is_open()) {
        std::string line;
        while (getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cout << "Unable to open file for reading" << std::endl;
    }

    return 0;
}