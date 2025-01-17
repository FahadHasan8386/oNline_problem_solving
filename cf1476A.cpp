///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n , k;
        cin >>  n >> k;

        if(n == 1 )
        {
            cout << k << endl;
            continue;
        }
        else if (n % k == 0)
        {
            cout << 1 << endl;
        }
        else if(n > k)
        {
            cout << 2 << endl;
        }
        else if( k % n == 0)
        {
            cout << k / n << endl;
        }
        else{
            cout << (k/n) + 1 << endl;
        }
    }
}
