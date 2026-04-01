#include <iostream>
#include <regex>

bool isURL(std::string s) {
    std::regex r("https?://[\\w\\.-]+");
    return std::regex_match(s, r);
}

int main() {
    std::cout << isURL("https://example.com") << std::endl;
    return 0;
}