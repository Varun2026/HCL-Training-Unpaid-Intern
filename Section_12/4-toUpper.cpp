#include <iostream>

char toUpper(char c) {
    return c & ~32;
}

int main() {
    std::cout << toUpper('a') << std::endl;
    return 0;
}