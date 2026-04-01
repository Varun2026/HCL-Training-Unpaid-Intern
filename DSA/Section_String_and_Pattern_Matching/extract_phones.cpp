#include <iostream>
#include <regex>
#include <string>
using namespace std;

void extractPhones(string text) {
    regex pattern(R"(\(?\d{3}\)?[-.\s]?\d{3}[-.\s]?\d{4})");
    smatch matches;
    string::const_iterator searchStart(text.cbegin());
    while (regex_search(searchStart, text.cend(), matches, pattern)) {
        cout << matches[0] << endl;
        searchStart = matches.suffix().first;
    }
}

int main() {
    string text = "Call me at (123) 456-7890 or 987-654-3210.";
    extractPhones(text);
    return 0;
}