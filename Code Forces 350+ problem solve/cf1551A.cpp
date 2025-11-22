#include <bits/stdc++.h>
using namespace std ;


void solve()
{
    int t ;
    cin >> t ;
    while (t--)
    {
        long long n;
        cin >> n ;

        long long k = n / 3 ;
        long long r = n % 3;

        if(r == 0)
        {
            cout << k << " " << k << endl;
        }
        else if (r == 1)
        {
            cout << k+1 << " " << k << endl;
        }
        else
        {
            cout << k << " " << k+1 << endl;
        }
    }
}
int main ()
{
    solve();
    return 0;
}
