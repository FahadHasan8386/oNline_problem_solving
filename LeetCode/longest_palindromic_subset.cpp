///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

string longestPalindromicSubstring(string s) {
    int n = s.size();
    if (n == 0) return "";

    int start = 0, maxLength = 1;
    vector<vector<bool>> dp(n, vector<bool>(n, false));

    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
    }

    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            if (s[i] == s[j]) {
                if (len == 2) {
                    dp[i][j] = true;
                } else {
                    dp[i][j] = dp[i + 1][j - 1];
                }
                if (dp[i][j] && len > maxLength) {
                    start = i;
                    maxLength = len;
                }
            }
        }
    }

    return s.substr(start, maxLength);
}

int main() {
    string s;
    cin >> s;

    string result = longestPalindromicSubstring(s);
    cout << result << endl;

    return 0;
}
