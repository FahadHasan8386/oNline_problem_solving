/// In the name of Allah

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string n;
    cin >> n;


    int originalSum = 0;
    for (char ch : n) {
        originalSum += ch - '0';
    }

    if (originalSum % 9 == 0) {
        cout << "YES" << endl;
        return;
    }


    for (int i = 0; i < n.size(); i++) {
        int digit = n[i] - '0';
        int square = digit * digit;

        if (square < 10) {
            int tempSum = originalSum - digit + square;
            if (tempSum % 9 == 0) {
                cout << "YES" << endl;
                return;
            }
        }
    }

    // If no replacement makes the number divisible by 9
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
