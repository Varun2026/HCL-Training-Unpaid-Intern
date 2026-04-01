#include <iostream>

int toggleFourthBit(int x) {
    return x ^ (1 << 3);
}

int main() {
    std::cout << toggleFourthBit(0) << std::endl;
    return 0;
}