/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<vector<int>> FRQ(n + 1);
    for (int i = 0; i < n; i++) {
        FRQ[a[i]].push_back(i);
    }

    vector<int> b(n, 0);
    int cnt = 1;
    bool ok = true;

    for (int i = 1; i <= n; i++) {
        if ((int)FRQ[i].size() % i != 0) {
            cout << -1 << "\n";
            ok = false;
            break;
        } else {
            int c = 0;
            while (c < (int)FRQ[i].size()) {
                for (int v = 0; v < i; v++) {
                    b[FRQ[i][c]] = cnt;
                    c++;
                }
                cnt++;
            }
        }
    }

    if (ok) {
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
