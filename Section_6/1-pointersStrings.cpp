#include <iostream>

int main() {
    std::string* arr[3];
    arr[0] = new std::string("hello");
    arr[1] = new std::string("world");
    arr[2] = new std::string("!");
    for (int i = 0; i < 3; ++i) {
        std::cout << *arr[i] << std::endl;
        delete arr[i];
    }
    return 0;
}