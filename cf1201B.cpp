/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

void fahad()
{
    ll n;
    cin >> n;

    vector<ll> v(n);
    ll sum = 0;

    for(ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    ll mx = *max_element(v.begin(), v.end());

    if(sum % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    if(mx > sum / 2 )
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

}

int main()
{
    fastio();
    int t = 1;
    //cin >> t;
    while (t--) fahad();
}
