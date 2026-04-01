#include <iostream>

template<class T>
struct Vector2 {
    T x, y;
    Vector2(T a, T b) : x(a), y(b) {}
    Vector2 operator+(const Vector2& other) {
        return Vector2(x + other.x, y + other.y);
    }
    Vector2 operator-(const Vector2& other) {
        return Vector2(x - other.x, y - other.y);
    }
    Vector2 operator*(T scalar) {
        return Vector2(x * scalar, y * scalar);
    }
};

template<>
struct Vector2<std::string> {
    static_assert(false, "Vector2 does not support std::string");
};

int main() {
    Vector2<float> v1(1.0f, 2.0f);
    Vector2<float> v2(3.0f, 4.0f);
    auto v3 = v1 + v2;
    std::cout << v3.x << " " << v3.y << std::endl;
    return 0;
}