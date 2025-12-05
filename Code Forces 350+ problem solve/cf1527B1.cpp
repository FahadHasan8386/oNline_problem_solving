#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int zero = count(s.begin(), s.end(), '0');

        if (zero == 1) {
            cout << "BOB" << endl;
        }
        else if (zero % 2 == 1) {
            cout << "ALICE" << endl;
        }
        else {
            cout << "BOB" << endl;
        }
    }
    return 0;
}
