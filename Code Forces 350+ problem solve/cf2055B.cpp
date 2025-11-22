///In the name of Allah
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll inf = LLONG_MAX;

void solve()
{
    ll n;
    cin >> n;
    vector<ll>a(n), b(n);
    for (ll i = 0 ; i < n; i++) cin >> a[i];
    for (ll i = 0 ; i < n; i++) cin >> b[i];

    ll cnt = 0;
    for (ll i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            cnt++;
        }
    }

    if (cnt >= 2) {
        cout << "NO" << endl;
        return;
    } else if (cnt == 0) {
        cout << "YES" << endl;
        return;
    }

    ll max_deficit = 0, min_surplus = inf;
    for (ll i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            max_deficit = b[i] - a[i];
        } else {
            min_surplus = min(min_surplus, a[i] - b[i]);
        }
    }

    if (max_deficit <= min_surplus) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
