#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int balance = 0;
        int min_balance = 0;

        for (char c : s) {
            if (c == '(') {
                balance++;
            } else {
                balance--;
            }
            min_balance = min(min_balance, balance);
        }

        int moves = abs(min_balance);
        cout << moves << endl;
    }

    return 0;
}
