#include <iostream>

namespace MyNamespace {
    class MyException {
    public:
        std::string msg;
        MyException(std::string m) : msg(m) {}
    };
}

int main() {
    try {
        throw MyNamespace::MyException("Error");
    } catch (const MyNamespace::MyException& e) {
        std::cout << e.msg << std::endl;
    }
    return 0;
}