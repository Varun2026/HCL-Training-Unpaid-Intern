#include <iostream>
#include <fstream>

int main() {
    std::fstream file("test.txt", std::ios::out);
    if (file.is_open()) {
        file << "Hello World";
        file.close();
    }
    std::fstream file2("test.txt", std::ios::in);
    if (file2.is_open()) {
        std::string content;
        std::getline(file2, content);
        std::cout << content << std::endl;
        file2.close();
    }
    return 0;
}