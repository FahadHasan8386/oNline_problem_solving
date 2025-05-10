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
    int n , m;
    cin >> n >> m;

    vector<int>v(n ,vector<int>(m));
    ll sum = 0, sum2 = 0;
    for(int i = 0 ; i < n ;i++)
    {
        for(int j = 0 ; j < m ;j++)
        {
            cin >> v[i][j];
        }
    }
    for(int i = 0 ; i < n ;i++)
    {
        for(int j = 0 ; j < m ;j++)
        {
            sum += sum + v[i][j];
        }
    }
     for(int j = m ; j > 0 ;j--)
    {
        for(int i = n ; i > 0 ;i--)
        {
            sum2 += sum + v[j][i];
        }
    }
    cout << max(sum, sum2) << endl;
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) fahad();
}
