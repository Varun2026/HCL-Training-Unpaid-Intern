#include <iostream>
#include <vector>
#include <string>
using namespace std;

int minOperations(string s1, string s2) {
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
    int lcs = dp[m][n];
    return (m - lcs) + (n - lcs);
}

int main() {
    string s1 = "heap";
    string s2 = "pea";
    cout << minOperations(s1, s2) << endl;
    return 0;
}