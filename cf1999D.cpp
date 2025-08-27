/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long

void fahad()
{
    string s, t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();

    int i = 0 , j = 0;
    while(i < n && j < m)
    {
        if(s[i] == t[j] || s[i] == '?')
        {
            j++;
        }
        i++;
    }
    if( j < m )
    {
        cout << "NO" << endl;
        return;
    }
    i = 0 ,j = 0;
    string ans  = s;

    while(i < n)
    {
        if(ans[i] == '?' && j < m)
        {
            ans[i] = t[j];
            j++;
        }
        else if(ans[i] == '?')
        {
            ans[i] = 'a';
        }
        else if(ans[i] == t[j] && j < m)
        {
            j++;
        }
        i++;
    }
    cout << "YES" << endl;
    cout << ans << endl;
}

int main()
{
    fastio();
    int tc;
    cin >> tc;
    while (tc--)
    {
        fahad();
    }
}
