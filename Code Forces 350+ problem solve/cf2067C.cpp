/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'


ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

bool has_seven(int x)
{
    while(x)
    {
        if( x % 10 == 7)return true;

    }
    return false;
}

void fahad() {

    int n;
    cin >> n;
    int ops = 0;

    while(!has_seven(n)){
        n += 9;
        ops++;
    }
    cout << ops << endl;
}

int main() {
    fastio();
    int t ;
    cin >> t;
    while (t--) fahad();
}
