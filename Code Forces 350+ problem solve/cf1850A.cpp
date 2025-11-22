#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;

    while (t--)
    {
        int a ,b , c;
        cin >> a >> b >> c ;

        int sum1 = a + b;
        int sum2 = a + c;
        int sum3 = b + c;
        if(sum1 >= 10 || sum2 >= 10 || sum3 >= 10)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
