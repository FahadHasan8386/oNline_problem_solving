#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        string s;
        cin >> n >> x >> s;

        ///Jekono ek side e ase
        if (x == 1 || x == n) {
            cout << 1 << "\n";
            continue;
        }

        /// Left nearest wall
        int L = 0;
        for (int i = x - 2; i >= 0; i--) {
            if (s[i] == '#') {
                L = i + 1;
                break;
            }
        }

        ///Riight nearest wall
        int R = n + 1;
        for (int i = x; i < n; i++) {
            if (s[i] == '#') {
                R = i + 1;
                break;
            }
        }

        ///No wall on both side
        if (L == 0 && R == n + 1) {
            cout << 1 << "\n";
            continue;
        }


        int ans = max(
            min(x, n - R + 2),
            min(L + 1, n - x + 1)
        );

        cout << ans << "\n";
    }
    return 0;
}
