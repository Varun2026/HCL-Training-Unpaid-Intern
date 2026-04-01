#include <iostream>
#include <cmath>

struct Point {
    double x, y;
};

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double distance(Point p1, Point p2) {
    return distance(p1.x, p1.y, p2.x, p2.y);
}

double distance(Point p) {
    return distance(0, 0, p.x, p.y);
}

int main() {
    Point p1 = {1, 2};
    Point p2 = {3, 4};
    std::cout << distance(1, 2, 3, 4) << std::endl;
    std::cout << distance(p1, p2) << std::endl;
    std::cout << distance(p1) << std::endl;
    return 0;
}