/// IN the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();

        if(n >= 2 && s[n-2] == 'u' && s[n-1] == 's')
        {
            s.erase(n-2, 2);
            s.push_back('i');
        }
        cout << s << endl;
    }
}
