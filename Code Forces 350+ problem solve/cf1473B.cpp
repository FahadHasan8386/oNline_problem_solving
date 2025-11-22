///IN the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int lcm (int a , int b)
{
    return (a * b) / __gcd(a,b);
}

void fahad(const string& s , const string& t)
{
    int lcm_length = lcm(s.size(), t.size());

    string s_lcm = "" ,t_lcm = "";

    for(int i = 0 ; i < lcm_length / s.size() ;i++)
    {
        s_lcm += s;
    }
    for(int i = 0 ; i < lcm_length / t.size() ;i++)
    {
        t_lcm += t;
    }

    if(s_lcm == t_lcm)
    {
        cout << s_lcm << endl;
    }
    else{
        cout << -1 << endl;
    }
}

int main()
{
    int tt ;
    cin >> tt;

    while(tt--)
    {
        string s ,t;
        cin >> s;
        cin >> t;

        fahad(s,t);
    }
}
