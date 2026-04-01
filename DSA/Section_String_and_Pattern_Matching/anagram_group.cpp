#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

string normalize(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(), s.end());
    return s;
}

vector<vector<string>> groupAnagrams(vector<string> strs) {
    map<string, vector<string>> groups;
    for (string s : strs) {
        string key = normalize(s);
        groups[key].push_back(s);
    }
    vector<vector<string>> result;
    for (auto& p : groups) {
        result.push_back(p.second);
    }
    return result;
}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    auto groups = groupAnagrams(strs);
    for (auto& g : groups) {
        for (string s : g) {
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}