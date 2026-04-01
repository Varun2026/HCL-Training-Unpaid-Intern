#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<string> events = {"INFO", "WARN", "ERROR", "INFO"};
    map<string, int> freq;
    for (string e : events) freq[e]++;
    string most = "";
    int maxCount = 0;
    for (auto& p : freq) {
        cout << p.first << ": " << p.second << endl;
        if (p.second > maxCount) {
            maxCount = p.second;
            most = p.first;
        }
    }
    cout << "Most common: " << most << endl;
    return 0;
}