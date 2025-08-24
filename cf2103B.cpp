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
    int n;
    cin >> n;

    string s;
    cin >> s;

    s="0"+s;
    int ans = 0, cur = s[0];

    for(int i = 1 ; i  <=  n ; i++)
    {
        int dig = s[i];
        if (cur != dig)
            ans++;
        cur = dig;
    }
    if(ans >= 3)
        cout << ans-2 + n << endl;
    else if(ans==2)
        cout << ans-1 + n << endl;
    else
        cout << ans+n << endl;

}

int main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--) fahad();
}
