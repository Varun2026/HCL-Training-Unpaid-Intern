#include <iostream>
#include <stdexcept>

struct Date {
    int day, month, year;
};

Date createDate(int d, int m, int y) {
    if (d < 1 || d > 31 || m < 1 || m > 12 || y < 0) throw std::invalid_argument("Invalid date");
    return {d, m, y};
}

int main() {
    try {
        Date d = createDate(31, 12, 2023);
        std::cout << d.day << "/" << d.month << "/" << d.year << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}