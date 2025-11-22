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
    ll n;
    cin >> n;

    if (n % 2 == 0) {
        cout << -1 << endl;
        return;
    }
    for (int i = n; i > 0; i--) {
        cout << i << ' ';
    }
    cout << endl;
}

int main ()
{
    int t ;
    cin >> t;

    while(t--)
    {
        fahad();
    }

}

