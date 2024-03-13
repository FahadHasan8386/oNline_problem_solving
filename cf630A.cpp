#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
        cin >> n;
    int num = 5;

    int power = pow (num,n);
        cout << power << endl;
    int lastdigit = power % 10;
    power / 10;
     cout << power << endl;;
    int last2nddigit = power % 10;
     cout << power << endl;
    cout << last2nddigit ;
}
