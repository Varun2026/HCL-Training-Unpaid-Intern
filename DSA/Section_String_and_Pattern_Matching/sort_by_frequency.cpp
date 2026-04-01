#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

vector<int> sortByFrequency(vector<int> arr) {
    map<int, int> freq;
    for (int num : arr) freq[num]++;
    vector<pair<int, int>> vec;
    for (auto& p : freq) vec.push_back({p.second, p.first});
    sort(vec.rbegin(), vec.rend());
    vector<int> result;
    for (auto& p : vec) {
        for (int i = 0; i < p.first; i++) result.push_back(p.second);
    }
    return result;
}

int main() {
    vector<int> arr = {1,1,2,2,2,3};
    auto res = sortByFrequency(arr);
    for (int num : res) cout << num << " ";
    cout << endl;
    return 0;
}