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

    ll max_brench_length = (k + n - 1)/n;

    max_brench_length = min (max_brench_length , m);

    cout << max_brench_length << endl;
}

int main() {
    fastio();
    int t ;
    cin >> t;
    while (t--) fahad();
}
