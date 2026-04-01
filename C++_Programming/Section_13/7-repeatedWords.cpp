#include <iostream>
#include <regex>

bool hasRepeatedWords(std::string s) {
    std::regex r("\\b(\\w+)\\s+\\1\\b", std::regex_constants::icase);
    return std::regex_search(s, r);
}

int main() {
    std::cout << hasRepeatedWords("the the") << std::endl;
    return 0;
}