#include <iostream>
#include <regex>

std::string formatPhone(std::string s) {
    std::regex r("(\\d{3})(\\d{3})(\\d{4})");
    return std::regex_replace(s, r, "($1) $2-$3");
}

int main() {
    std::cout << formatPhone("1234567890") << std::endl;
    return 0;
}