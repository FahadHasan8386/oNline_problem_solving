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
        string s,t;
        cin >> s >> t;
        char res = 0;
        for(auto c : s) res ^= c;
        for(auto c : t) res ^= c;

        cout << res << endl;

}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) fahad();
}
