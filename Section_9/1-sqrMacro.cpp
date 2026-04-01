#include <iostream>

#define SQR(x) ((x) * (x))

inline int sqr(int x) { return x * x; }

int main() {
    int a = 2, b = 3;
    std::cout << SQR(a + b) << std::endl;
    std::cout << sqr(a + b) << std::endl;
    return 0;
}