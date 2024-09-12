///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n ;
    cin >> n;

    map<string ,int> mp;

    for (int i = 0 ; i < n ;i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }

    int ans = 0;

    for(auto u : mp)
    {
        if(u.second == 2)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
