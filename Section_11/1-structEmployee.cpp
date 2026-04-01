#include <iostream>

struct Employee {
    std::string name;
    struct Address {
        std::string street;
        std::string city;
    } address;
};

int main() {
    Employee e = {"John", {"Main St", "NYC"}};
    std::cout << e.name << " " << e.address.street << " " << e.address.city << std::endl;
    return 0;
}