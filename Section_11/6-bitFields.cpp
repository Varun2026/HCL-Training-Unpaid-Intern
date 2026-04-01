#include <iostream>

struct Flags {
    unsigned int isAdmin : 1;
    unsigned int isActive : 1;
    unsigned int isVerified : 1;
};

int main() {
    Flags f = {1, 0, 1};
    std::cout << f.isAdmin << " " << f.isActive << " " << f.isVerified << std::endl;
    return 0;
}