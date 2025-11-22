#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t ;
    cin >> t ;

    while (t--)
    {
        int n ;
        cin >> n ;
        int result = n / 2;
        if(n % 2 == 0 )
        {
            cout << result << endl;
        }
        else if (n % 2 != 0)
        {
            cout << result +1 << endl;
        }
    }
}
