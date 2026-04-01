#include <iostream>
#include <regex>

bool isIPv4(std::string s) {
    std::regex r("\\b\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}\\b");
    return std::regex_match(s, r);
}

int main() {
    std::cout << isIPv4("192.168.1.1") << std::endl;
    return 0;
}