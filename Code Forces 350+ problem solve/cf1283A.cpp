#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t ;
    cin >> t ;
    int re;
    while(t--)
    {
        int h , m;
        cin >> h >> m;

        if(h < 24)
        {
            re = ((24 - h) * 60) - m;
        }
        cout << re << endl;
    }
}
