#include <iostream>
#include <regex>

bool matchApple(std::string s) {
    std::regex r("apple", std::regex_constants::icase);
    return std::regex_match(s, r);
}

int main() {
    std::cout << matchApple("Apple") << std::endl;
    return 0;
}