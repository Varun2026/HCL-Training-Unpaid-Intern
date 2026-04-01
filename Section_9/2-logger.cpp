#include <iostream>

void log() {
    std::cout << __FILE__ << " " << __LINE__ << " " << __func__ << std::endl;
}

void func1() {
    log();
}

int main() {
    func1();
    log();
    return 0;
}