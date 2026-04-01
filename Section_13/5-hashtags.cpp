#include <iostream>
#include <regex>
#include <vector>

std::vector<std::string> extractHashtags(std::string s) {
    std::regex r("#\\w+");
    std::vector<std::string> hashtags;
    for (std::sregex_iterator i = std::sregex_iterator(s.begin(), s.end(), r); i != std::sregex_iterator(); ++i) {
        hashtags.push_back(i->str());
    }
    return hashtags;
}

int main() {
    auto h = extractHashtags("Hello #world #test");
    for (auto& tag : h) std::cout << tag << std::endl;
    return 0;
}