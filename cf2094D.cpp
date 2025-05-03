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
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();

    if(m < n || m > 2*n || a[0] != b[0])
    {
        cout  << "NO" << endl;
        return;
    }
    vector<int>aa, bb;
    int cnt = 1;
    for(int i = 1 ; i < n ; i++)
    {
        if(a[i] != a[i-1])
        {
            aa.push_back(cnt);
            cnt = 1;
        }
        else cnt++;
    }
    aa.push_back(cnt);
    cnt = 1;
    for (int i = 1; i < m; i++)
    {
        if (b[i] != b[i-1])
        {
            bb.push_back(cnt);
            cnt = 1;
        }
        else cnt++;
    }
    bb.push_back(cnt);
    if (aa.size() != bb.size())
    {
        cout << "NO" << endl;
        return;
    }
    n = aa.size();
    for (int i = 0; i < n; i++)
    {
        if (aa[i] > bb[i] || aa[i] * 2 < bb[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES"<< endl;


}

int main()
{
    fastio();
    int t ;
    cin >> t;
    while (t--) fahad();
}
