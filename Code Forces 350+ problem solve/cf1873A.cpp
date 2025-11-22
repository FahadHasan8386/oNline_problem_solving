#include <bits/stdc++.h>
using namespace std ;

bool same(string s)
{
    if(s == "abc")
    {
        return true ;
    }

    if(s[0] == 'a' && s[1] == 'b' && s[2] ==  'c'){
        return true;
    }
    else if(s[0] =='b' && s[1] == 'a' && s[2] =='c')
    {
        return true;
    }
    else if(s[0] =='a' && s[1] == 'c' && s[2] =='b')
    {
        return true;
    }
    else if(s[0] == 'c'&& s[1] == 'b' && s[2] == 'a')
    {
        return true;
    }
    return false;
}

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        string s;
        cin >> s;
        if(same(s))
        {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
