#include <iostream>
#include <regex>
using namespace std;

bool isValidEmail(string email) {
    regex pattern(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");
    return regex_match(email, pattern);
}

int main() {
    string email = "test@example.com";
    if (isValidEmail(email)) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }
    return 0;
}