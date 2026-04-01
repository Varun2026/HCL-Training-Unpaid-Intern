#include <iostream>

class Test {
public:
    const int value;
    Test(int v) : value(v) {}
    void setValue(int v) {
        const_cast<int&>(value) = v;
    }
};

int main() {
    Test t(10);
    t.setValue(20);
    std::cout << t.value << std::endl;
    return 0;
}