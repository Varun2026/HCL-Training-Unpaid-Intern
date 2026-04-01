#include <iostream>

struct Student {
    std::string name;
    int age;
};

int main() {
    Student s = {"John", 20};
    Student* p = &s;
    std::cout << p->name << " " << p->age << std::endl;
    return 0;
}