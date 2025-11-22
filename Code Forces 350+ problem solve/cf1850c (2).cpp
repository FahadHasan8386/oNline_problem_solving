#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t ;
    cin >> t;
    string m;
    while(t--)
    {
        for(int i = 0 ; i < 8 ; i++)
        {
            string s;
            cin >> s;

            for(int i = 0 ; i < s.size() ;i++)
            {
                if(s[i] != '.')
                {
                    m += s[i];
                }
            }
        }
      cout << m <<endl;
      m.clear();
    }
}
