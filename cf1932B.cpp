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
    int n ;
    cin >> n ;

    vector<ll>a(n);
    for(int i = 0 ; i < n ;i++)cin >> a[i];
    ll year = 0;
    for(int i = 0 ; i < n ;i++)
    {
       year = ((year + 1 + a[i] - 1) / a[i]) * a[i];
    }
    cout << year << endl;
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) fahad();
}
