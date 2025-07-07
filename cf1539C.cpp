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
    ll n, k, x;
    cin >>  n >> k >> x;

    vector<ll>a(n);
    for(int i  = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());

    vector<ll>needed;
    ll dif = 0;
    for(int i = 1 ; i < n ; i++)
    {
        dif = a[i] - a[i-1];
        if(dif > x)
        {
            ll num = (dif + x-1)/x-1;
            needed.push_back(num);
        }
    }
    ll groups = needed.size()+1;

    sort(needed.begin(),needed.end());

    for(auto cost : needed)
    {
        if(k >= cost)
        {
            k -= cost;
            groups--;
        }
        else
        {
            break;
        }
    }

    cout << groups << endl;
}

int main()
{
    fastio();
    fahad();
}
