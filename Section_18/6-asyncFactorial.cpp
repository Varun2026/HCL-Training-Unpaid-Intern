#include <iostream>
#include <future>

int factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; ++i) res *= i;
    return res;
}

int main() {
    std::future<int> fut = std::async(std::launch::async, factorial, 5);
    std::cout << fut.get() << std::endl;
    return 0;
}