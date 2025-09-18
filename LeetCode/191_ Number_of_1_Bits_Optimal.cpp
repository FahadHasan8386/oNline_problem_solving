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
    cin >> n;

    int count = 0;
    while(n)
    {
        count += n & 1;///To addresing the the last value is 1 and count++
        n >>= 1; ///shift right ,update n
    }
    cout << count << endl;
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) fahad();
}
