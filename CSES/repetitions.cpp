///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    string s;
    cin >> s;

    map<char , int>mp;

    for (int i = 0 ; i < s.size();i++)
    {
        mp[s[i]]++;
    }
    int maxcnt = 0;
    for (auto it : mp)
    {
        if(it.second > maxcnt)
        {
            maxcnt = it.second;
        }
    }
    cout << maxcnt << endl;
}
