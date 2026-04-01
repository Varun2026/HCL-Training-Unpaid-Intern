#include <iostream>
#include <thread>
#include <chrono>

int main() {
    std::cout << "Sleeping" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Yielding" << std::endl;
    std::this_thread::yield();
    std::cout << "Done" << std::endl;
    return 0;
}