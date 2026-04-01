#include <iostream>

namespace Company {
    namespace HR {
        void displayPolicy() {
            std::cout << "Policy" << std::endl;
        }
    }
}

int main() {
    Company::HR::displayPolicy();
    return 0;
}