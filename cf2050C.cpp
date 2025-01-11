#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string n;
    cin >> n;

    int sum = 0, count2 = 0, count3 = 0;
    for (char c : n) {
        sum += c - '0';
        if (c == '2') count2++;
        if (c == '3') count3++;
    }

    for (int x = 0; x <= min(count2, 8); x++) {
        for (int y = 0; y <= min(count3, 8); y++) {
            if ((sum + 2 * x + 6 * y) % 9 == 0) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
