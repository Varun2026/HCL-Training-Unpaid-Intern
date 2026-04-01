#include <iostream>
#include <fstream>
#include <stdexcept>

int main() {
    try {
        std::ifstream file("numbers.txt");
        if (!file) throw std::runtime_error("File not found");
        double a, b;
        file >> a >> b;
        if (b == 0) throw std::runtime_error("Division by zero");
        std::cout << a / b << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}