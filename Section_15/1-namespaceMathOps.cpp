#include <iostream>

namespace MathOps {
    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
}

int main() {
    std::cout << MathOps::add(1, 2) << std::endl;
    std::cout << MathOps::subtract(5, 3) << std::endl;
    return 0;
}