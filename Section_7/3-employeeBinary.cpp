#include <iostream>
#include <fstream>

class Employee {
public:
    std::string name;
    int id;
};

int main() {
    Employee e = {"John", 123};
    std::ofstream file("emp.bin", std::ios::binary);
    file.write((char*)&e, sizeof(Employee));
    file.close();
    Employee e2;
    std::ifstream file2("emp.bin", std::ios::binary);
    file2.read((char*)&e2, sizeof(Employee));
    file2.close();
    std::cout << e2.name << " " << e2.id << std::endl;
    return 0;
}