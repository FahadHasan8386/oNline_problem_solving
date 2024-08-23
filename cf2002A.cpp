///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t ;
    cin >> t;

    while(t--)
    {
        int a , b, c;
        cin >> a >> b >> c;
        if(a>c && b>c){
            cout << c*c <<endl;
        }
        else if(a <= c && b <= c)
        {
            cout << a*b << endl;
        }
        else if(a > c && b <= c)
        {
            cout << c*b << endl;
        }
        else if(a <= c && b > c)
        {
            cout << a*c << endl;
        }
    }
}
