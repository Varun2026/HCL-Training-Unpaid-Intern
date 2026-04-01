#include <iostream>
#include <string>

template<typename T>
std::string to_string(T value) {
    return std::to_string(value);
}

template<>
std::string to_string(std::string value) {
    return "\"" + value + "\"";
}

int main() {
    std::cout << to_string(123) << std::endl;
    std::cout << to_string(3.14) << std::endl;
    std::cout << to_string("hello") << std::endl;
    return 0;
}