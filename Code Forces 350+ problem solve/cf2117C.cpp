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
    int n, ans = 0;
    cin >> n;
    vector<int> a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    set<int> cur, seen;

    for(int i=0; i<n; i++)
    {
        cur.insert(a[i]);
        seen.insert(a[i]);
        if(cur.size() == seen.size())
        {
            ans++;
            seen.clear();
        }
    }
    cout << ans << endl;
}

int main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--) fahad();
}
