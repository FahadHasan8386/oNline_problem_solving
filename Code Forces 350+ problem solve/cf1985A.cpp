#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t ;
    cin >> t ;
    string s , s1;
    while(t--)
    {
        cin >> s >> s1;

        char temp = s[0];
        s[0] = s1[0];
        s1[0] = temp;
        cout << s << " " << s1 << endl;
    }
}
