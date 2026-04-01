#include <iostream>

class Obj {
public:
    Obj(int id) : id(id) { std::cout << "Construct " << id << std::endl; }
    ~Obj() { std::cout << "Destruct " << id << std::endl; }
private:
    int id;
};

int main() {
    try {
        Obj o1(1);
        {
            Obj o2(2);
            throw std::runtime_error("Error");
            Obj o3(3);
        }
        Obj o4(4);
    } catch (...) {
        std::cout << "Caught" << std::endl;
    }
    return 0;
}