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
    ll n , m ,k;
    cin >> n >> m >>k;

    ll l = 0 , r = m;
    ll ans = 0;
    while (l + 1 < r) {
        ll mid = (l + r) / 2;

        ll blocks = m / (mid + 1);
        ll extra = m % (mid + 1);
        ll total = blocks * mid + extra;

        if (total * n >= k) {
            r = mid;
        } else {
            l = mid;
        }
    }

    cout << r << endl;
}

int main() {
    fastio();
    int t ;
    cin >> t;
    while (t--) fahad();
}
