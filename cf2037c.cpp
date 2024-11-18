/// In the name of Allah

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 3) {
            cout << -1 << "\n";
        } else {
            for (int i = n; i >= 1; i--) {
                cout << i << " ";
            }
            cout << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
