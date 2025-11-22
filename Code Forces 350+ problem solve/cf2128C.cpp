/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long

bool solve() {
    int n;
    cin >> n;
    vector<ll> b(n);
    for (ll &x : b) cin >> x;

    ll mn = b[0];
    for (int i = 0; i < n; ++i) {
        if (b[i] >= 2 * mn) return false;
        mn = min(mn, b[i]);
    }

    return true;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        cout << (solve() ? "YES\n" : "NO\n");
    }
}
