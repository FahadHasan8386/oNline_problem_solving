#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int a , b;
    cin >> a >> b;

    for(int i = 1 ; b*i <= a ;i++)
    {
        a++;
    }
    cout << a;
}
