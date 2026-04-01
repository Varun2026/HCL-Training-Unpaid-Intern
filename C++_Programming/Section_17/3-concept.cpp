#include <iostream>
#include <concepts>

template<typename T>
concept Arithmetic = requires(T a, T b) {
    a + b;
    a * b;
};

template<Arithmetic T>
class Matrix {
};

int main() {
    Matrix<int> m;
    return 0;
}