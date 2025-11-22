#include <bits/stdc++.h>
using namespace std;

void fahad() {
    string s;
    cin >> s;
    int b = 0, cnt = 0;
    for(auto c : s){
        if(c == '0') cnt++;
        else b = max(b, cnt + 1);
    }
    cout << s.size() - b << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;

    while(t--)
    {
        fahad();
    }
}
