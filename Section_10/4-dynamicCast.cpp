#include <iostream>

class Shape {
public:
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() { std::cout << "Circle" << std::endl; }
};

int main() {
    Shape* s = new Circle();
    Circle* c = dynamic_cast<Circle*>(s);
    if (c) c->draw();
    delete s;
    return 0;
}