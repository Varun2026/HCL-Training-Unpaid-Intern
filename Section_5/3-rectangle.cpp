#include <iostream>
#include <stdexcept>

class Rectangle {
private:
    double width, height;
public:
    void setWidth(double w) {
        if (w <= 0) throw std::invalid_argument("Width must be positive");
        width = w;
    }
    void setHeight(double h) {
        if (h <= 0) throw std::invalid_argument("Height must be positive");
        height = h;
    }
    double getWidth() { return width; }
    double getHeight() { return height; }
};

int main() {
    Rectangle r;
    try {
        r.setWidth(-1);
    } catch (const std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}