#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
    cin >> n;
    string s;
    cin >> s;

    map<char ,int>mp;

    int cnt = 0;

    for (int i = 0 ; i < n ; i++)
    {
        mp[s[i]]++;
    }
    int i = 1;

    for (auto u : mp)
    {
        if(u.second >= (u.first -'A' +1))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
