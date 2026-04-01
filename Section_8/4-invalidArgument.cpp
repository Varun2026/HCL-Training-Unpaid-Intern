#include <iostream>
#include <stdexcept>

int toInt(std::string s) {
    try {
        return std::stoi(s);
    } catch (...) {
        throw std::invalid_argument("Not a number");
    }
}

int main() {
    try {
        std::cout << toInt("123") << std::endl;
        std::cout << toInt("abc") << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}