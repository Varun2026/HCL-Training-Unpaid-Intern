#include <iostream>

enum Role { ADMIN = 1, USER = 2, MOD = 4 };

struct User {
    unsigned int roles : 3;
};

int main() {
    User u;
    u.roles = ADMIN | USER;
    std::cout << u.roles << std::endl;
    return 0;
}