#include <iostream>

class MyException {};

int main() {
    try {
        int salary;
        std::cin >> salary;
        if (salary < 0) throw MyException();
        std::cout << salary << std::endl;
    } catch (const MyException&) {
        std::cout << "Negative salary" << std::endl;
    }
    return 0;
}