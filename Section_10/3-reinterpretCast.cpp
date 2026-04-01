#include <iostream>

int main() {
    int addr = 0x12345678;
    int* p = reinterpret_cast<int*>(addr);
    std::cout << p << std::endl;
    return 0;
}