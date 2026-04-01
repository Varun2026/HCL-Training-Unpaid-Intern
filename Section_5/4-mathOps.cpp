#include <iostream>
#include <cmath>

namespace MathOps {
    int pow(int base, int exp) {
        int result = 1;
        for (int i = 0; i < exp; ++i) {
            result *= base;
        }
        return result;
    }
    double pow(double base, double exp) {
        return std::pow(base, exp);
    }
}

class Function {
public:
    virtual double evaluate(double x) = 0;
};

class Square : public Function {
public:
    double evaluate(double x) override {
        return x * x;
    }
};

int main() {
    std::cout << MathOps::pow(2, 3) << std::endl;
    std::cout << MathOps::pow(2.0, 3.0) << std::endl;
    Square s;
    std::cout << s.evaluate(5) << std::endl;
    return 0;
}