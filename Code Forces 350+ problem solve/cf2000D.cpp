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
    int n ;
    cin >> n;

    vector<ll>a(n+1 , 0);

    for(int i = 1 ; i <= n ;++i)
    {
        ll x;
        cin >> x;
        a[i] = a[i-1] +x;
    }
    string s;
    cin >> s;

    ll ans = 0;
    int l = 0 ;
    int r = n-1;

    while(r > l)
    {
        while(l < n && s[l] == 'R')
        {
            l++;
        }
        while( r >= 0 && s[r] == 'L')
        {
            r--;
        }
        if(l < r)
        {
            ans += a[r+1] - a[l];
            l++;
            r--;
        }
    }
    cout << ans << endl;
}

    int main()
    {
        fastio();
        int t ;
        cin >> t;
        while (t--) fahad();
    }
