/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &x : a) cin >> x;

        vector<ll> b(n + 1, 0);
        ll ans = 0;

        for (int i = 0; i < n; i += 2) {
            ll mn = a[i];

            if (i >= 2) {
                mn = min(mn, a[i - 1] - b[i - 2]);
            }
            if (i + 1 < n) {
                mn = min(mn, a[i + 1]);
            }

            b[i] = mn;
            ans += (a[i] - b[i]);
        }

        cout << ans << "\n";
    }
    return 0;
}
