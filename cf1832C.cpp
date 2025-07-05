/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

void fahad() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];


    n = unique(v.begin(), v.end()) - v.begin();

    int ans = n;


    for (int i = 0; i + 2 < n; i++) {
        if ((v[i] < v[i + 1] && v[i + 1] < v[i + 2]) ||
            (v[i] > v[i + 1] && v[i + 1] > v[i + 2])) {
            ans--;
        }
    }

    cout << ans << endl;
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) fahad();
}
