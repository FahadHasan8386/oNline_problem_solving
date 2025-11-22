#include <bits/stdc++.h>
using namespace std ;

bool issuqure(string s )
{
    int len = s .length();
    if(len % 2 != 0)
    {
        return false;
    }
    int half = len / 2;
    return s.substr(0,half) == s.substr(half ,half);
}

int main ()
{
    int t ;
    cin >> t;
    int count = 0;
    while(t--)
    {
        string s;
        cin >> s;
    if(issuqure(s))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
}
