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

    int arr [n][m];
    ll sum = arr[0][0], sum2 = 0;
    for(int i = 0 ; i < n ;i++)
    {
        for(int j = 0 ; j < m ;j++)
        {
            cin >> arr[i][j];
        }
    }
    vector<ll>v;

    for(int i = 0 ; i < n-1 ;i++)
    {
        for(int j = 0 ; j < m ;j++)
        {
            sum += arr[i][j] + arr[i+1][j+1];
            v.push_back(sum);
        }
    }
     for(int i = n-1 ; i >= 0 ;i--)
    {
        for(int j = n ; j >= 0 ;j--)
        {
            sum2 += sum + arr[j][i];
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
