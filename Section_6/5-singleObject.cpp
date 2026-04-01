#include <iostream>

class Test {
public:
    Test() { std::cout << "Constructor" << std::endl; }
    ~Test() { std::cout << "Destructor" << std::endl; }
};

int main() {
    Test* t = new Test();
    delete t;
    return 0;
}