/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define endl '\n'

void fahad() {
    int n ,k;
    cin >> n >> k;

    string s;
    cin >> s;
    int cnt = 0;
   for(char c : s)
        if(c == '1')
            cnt++;

    cout << (cnt <= k || n < 2*k  ? "Alice" : "Bob" ) << endl;
 }

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) fahad();
}
