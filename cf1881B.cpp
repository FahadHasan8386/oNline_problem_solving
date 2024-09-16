/// N the name of Allah

#include <bits/stdc++.h>
using namespace std ;
#define int long long
int32_t main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a , b  ,c;
        cin >> a >> b >> c;

        int mini = min(a, min( b, c));
        bool ok = 1;

        if(a % mini != 0 && b % mini != 0 && c % mini != 0)ok = 0;

        int cnt = 0;
        while(a != mini)
        {
            if(cnt > 3 || a %mini != 0)
            {
                ok = 0;
                break;
            }
            a -= mini;
            cnt++;
        }

        while(b != mini)
        {
            if(cnt > 3 || b %mini != 0)
            {
                ok = 0;
                break;
            }
            b -= mini;
            cnt++;
        }

        while(c != mini)
        {
            if(cnt > 3 || c %mini != 0)
            {
                ok = 0;
                break;
            }
            c -= mini;
            cnt++;
        }
        if(cnt <= 3 && ok )
        {
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
