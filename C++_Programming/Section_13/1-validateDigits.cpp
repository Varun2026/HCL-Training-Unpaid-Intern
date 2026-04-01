#include <iostream>
#include <regex>

bool isDigits(std::string s) {
    std::regex r("\\d+");
    return std::regex_match(s, r);
}

int main() {
    std::cout << isDigits("123") << std::endl;
    return 0;
}