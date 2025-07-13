/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

void fahad() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m);

    for (ll i = 0; i < m; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<ll> v;

    for (ll i = 0; i < m; i++) {
        if (i == m - 1) {
            // Circular gap between last and first
            ll gap = n - a[i] + a[0] - 1;
            if (gap > 0) v.pb(gap);
        } else {
            ll gap = a[i + 1] - a[i] - 1;
            if (gap > 0) v.pb(gap);
        }
    }

    sort(v.rbegin(), v.rend());  // Largest gaps first

    ll houses = n;
    ll times = 0;
    ll saved = 0;

    for (ll i = 0; i < v.size(); i++) {
        ll sz = v[i] - 2 * times;

        if (sz <= 0) continue;

        if (sz == 1) {
            saved += 1;
            times += 1;
        } else if (sz == 2) {
            saved += 1;
            times += 1;
        } else {
            saved += sz - 1;
            times += 2;
        }
    }

    cout << houses - saved << endl;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) fahad();
}
