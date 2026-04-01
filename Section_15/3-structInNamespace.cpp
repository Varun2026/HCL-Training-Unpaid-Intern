#include <iostream>

namespace MyNamespace {
    struct MyStruct {
        int x;
    };
}

int main() {
    MyNamespace::MyStruct s = {10};
    std::cout << s.x << std::endl;
    return 0;
}