#include <iostream>

class Shape {
public:
    virtual void draw() = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
public:
    void draw() override {
        std::cout << "Rectangle" << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Circle" << std::endl;
    }
};

int main() {
    int choice;
    std::cin >> choice;
    Shape* s;
    if (choice == 1) s = new Rectangle();
    else s = new Circle();
    s->draw();
    delete s;
    return 0;
}