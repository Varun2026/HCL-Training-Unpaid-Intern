#include <iostream>
#include <stdexcept>

int main() {
    try {
        int x;
        std::cin >> x;
        if (x < 0) throw std::runtime_error("Negative number");
        std::cout << x << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}