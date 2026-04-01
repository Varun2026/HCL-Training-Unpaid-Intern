#include <iostream>

class Meters {
public:
    double value;
    Meters(double v) : value(v) {}
};

class Seconds {
public:
    double value;
    Seconds(double v) : value(v) {}
};

class MetersPerSecond {
public:
    double value;
    MetersPerSecond(double v) : value(v) {}
};

MetersPerSecond operator/(const Meters& m, const Seconds& s) {
    return MetersPerSecond(m.value / s.value);
}

int main() {
    Meters m(10);
    Seconds s(2);
    MetersPerSecond v = m / s;
    std::cout << v.value << std::endl;
    return 0;
}