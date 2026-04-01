#include <iostream>
#include <fstream>

struct Student {
    std::string name;
    int age;
};

int main() {
    Student students[2] = {{"John", 20}, {"Jane", 21}};
    std::ofstream file("students.txt");
    for (auto& s : students) {
        file << s.name << " " << s.age << std::endl;
    }
    file.close();
    std::ifstream file2("students.txt");
    Student s;
    while (file2 >> s.name >> s.age) {
        std::cout << s.name << " " << s.age << std::endl;
    }
    return 0;
}