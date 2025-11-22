///In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define endl '\n'

const int MAXI = 1e5 + 2;
bool dp[MAXI];
vector<int> binaryDecimals;

bool isBinaryDecimal(int n) {
    string str = to_string(n);
    for (char ch : str) {
        if (ch != '0' && ch != '1') {
            return false;
        }
    }
    return true;
}

void preprocess() {
    for (int i = 1; i <= 100000; i++) {
        if (isBinaryDecimal(i)) {
            binaryDecimals.push_back(i);
        }
    }

    dp[1] = true;
    for (int i = 1; i <= 100000; i++) {
        if (dp[i]) {
            for (int b : binaryDecimals) {
                if (1LL * i * b <= 100000) {
                    dp[i * b] = true;
                }
            }
        }
    }
}

void fahad() {
    int n;
    cin >> n;
    cout << (dp[n] ? "YES" : "NO") << endl;
}

int main() {
    fastio();
    preprocess();
    int t;
    cin >> t;
    while (t--) fahad();
    return 0;
}
