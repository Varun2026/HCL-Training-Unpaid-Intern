#include <iostream>

int setThirdBit(int x) {
    return x | (1 << 2);
}

int main() {
    std::cout << setThirdBit(0) << std::endl;
    return 0;
}