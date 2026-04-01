#include <iostream>
#include <string>
using namespace std;

bool areAnagrams(string a, string b) {
    if (a.length() != b.length()) return false;
    int count[256] = {0};
    for (char c : a) count[c]++;
    for (char c : b) count[c]--;
    for (int i = 0; i < 256; i++) if (count[i] != 0) return false;
    return true;
}

int main() {
    string a = "listen";
    string b = "silent";
    if (areAnagrams(a, b)) {
        cout << "Anagrams" << endl;
    } else {
        cout << "Not anagrams" << endl;
    }
    return 0;
}