#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        ll ans = 1e18;

        for (int i = 0; i < n; ) {
            int j;
            for (j = i; j < n && a[j] == a[i]; j++);//na mille porer seggement
            ans = min(ans, (ll)(i + n - j) * a[i]);
            i = j; // go to next segment
        }

        cout << ans << endl;
    }
    return 0;
}
