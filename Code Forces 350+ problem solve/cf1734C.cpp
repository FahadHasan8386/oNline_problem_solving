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
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<bool>deleted(n+1 ,false);
    ll total_cost = 0;


    for (int k = 1 ; k <= n ;k++)
    {
        for(int m = k ; m <= n ;m += k)
        {
            if(s[m-1] == '1')
            {
                break;
            }
            if(!deleted[m])
            {
                deleted[m] = true;
                total_cost += k;
            }
        }
    }
    cout << total_cost << endl;
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) fahad();
}
