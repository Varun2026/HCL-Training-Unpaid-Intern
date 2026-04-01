#include <iostream>

enum Color { RED, GREEN, BLUE };

int main() {
    Color c = RED;
    int i = static_cast<int>(c);
    std::cout << i << std::endl;
    return 0;
}