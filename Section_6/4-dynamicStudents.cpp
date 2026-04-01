#include <iostream>

struct Student {
    std::string name;
    int age;
};

int main() {
    int n = 3;
    Student* students = new Student[n];
    for (int i = 0; i < n; ++i) {
        students[i].name = "Student" + std::to_string(i);
        students[i].age = 20 + i;
    }
    for (int i = 0; i < n; ++i) {
        std::cout << students[i].name << " " << students[i].age << std::endl;
    }
    delete[] students;
    return 0;
}