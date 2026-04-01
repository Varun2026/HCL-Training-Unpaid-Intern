#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> lcsTable(string s1, string s2) {
    int m = s1.size(), n = s2.size();
    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i-1] == s2[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp;
}

int main() {
    string s1 = "AGGTAB";
    string s2 = "GXTXAYB";
    auto dp = lcsTable(s1, s2);
    for (auto& row : dp) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}