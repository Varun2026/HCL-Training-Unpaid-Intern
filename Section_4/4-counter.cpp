#include <iostream>

class Counter {
public:
    int value;
    Counter(int v = 0) : value(v) {}
    Counter& operator++() {
        ++value;
        return *this;
    }
    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }
};

int main() {
    Counter c(0);
    int x = c++;
    int y = ++c;
    std::cout << x << " " << y << " " << c.value << std::endl;
    return 0;
}