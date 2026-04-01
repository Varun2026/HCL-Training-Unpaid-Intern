#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<string> ids = {"A1", "B2", "A1", "C3", "B2"};
    map<string, int> freq;
    for (string id : ids) freq[id]++;
    vector<string> duplicates;
    for (auto& p : freq) {
        if (p.second > 1) duplicates.push_back(p.first);
    }
    for (string d : duplicates) cout << d << endl;
    return 0;
}