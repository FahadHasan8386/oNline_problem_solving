#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t;

    while (t--)
    {
        int n;
        int m ;
        cin >> n >> m ;
        if ((n % 2 == m % 2 ) && (m <= n)){
            cout << "YES" <<endl;
        }else
        {
            cout << "NO" << endl;
        }
    }
}
