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
    int n , p;
    cin >> n >> p;

    vector<int>v(n+1);
    for(int i = 1 ; i <= n ;i++)cin >> v[i];

    int cur = v[p];
    int dist = v[p];

    sort(v.begin() + 1, v.begin() + n + 1);


    bool ans = true;

    for(int i = 1 ; i <= n ;i++)
    {
        if(v[i] < cur )continue;
        if(v[i] - cur > dist)
        {
            ans = false;
        }
        cur = v[i];
    }
    if(ans)cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) fahad();
}
