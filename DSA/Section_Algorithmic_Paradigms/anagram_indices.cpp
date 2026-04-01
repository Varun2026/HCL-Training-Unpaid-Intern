#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    vector<int> result;
    unordered_map<char, int> need, window;
    for (char c : p) need[c]++;
    int left = 0, right = 0;
    int valid = 0;
    while (right < s.size()) {
        char c = s[right];
        right++;
        if (need.count(c)) {
            window[c]++;
            if (window[c] == need[c]) valid++;
        }
        if (right - left == p.size()) {
            if (valid == need.size()) result.push_back(left);
            char d = s[left];
            left++;
            if (need.count(d)) {
                if (window[d] == need[d]) valid--;
                window[d]--;
            }
        }
    }
    return result;
}

int main() {
    string s = "cbaebabacd";
    string p = "abc";
    auto indices = findAnagrams(s, p);
    for (int i : indices) cout << i << " ";
    cout << endl;
    return 0;
}