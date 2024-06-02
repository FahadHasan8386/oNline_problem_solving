#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t , c , d;
    cin >> t;

    c = 1;
    d = 0;
    string s1 ;
    cin >> s1;
    string s2,s3;
    for (int i = 0 ; i < t-1 ; i++)
    {
        cin >> s2;
        if(s1 == s2)
        {
            c = c + 1;
        }
        else
        {
            s3 = s2;
            d = d + 1;
        }
    }
    if(c>d)
    {
        cout << s1;
    }
    else
    {
        cout << s3;
    }

}
