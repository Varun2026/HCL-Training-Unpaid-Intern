#include <iostream>

int main() {
    int x = 10;
    int* p = &x;
    int** pp = &p;
    **pp = 20;
    std::cout << x << std::endl;
    return 0;
}