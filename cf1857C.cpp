/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

void solve() {
    int n;
    cin >> n;

    int m = n * (n - 1) / 2;
    vector<ll> b(m);

    for (int i = 0; i < m; i++) cin >> b[i];

    sort(b.begin(), b.end());

    for (int i = 0; i < m; i += --n) {
        cout << b[i] << " ";
    }

    cout << 1000000000 << endl;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
}
