#include <iostream>
#include <regex>
using namespace std;

bool isValidInvoice(string inv) {
    regex pattern(R"(INV-\d{4}(0[1-9]|1[0-2])-\d{6})");
    return regex_match(inv, pattern);
}

int main() {
    string inv = "INV-202511-000123";
    if (isValidInvoice(inv)) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }
    return 0;
}