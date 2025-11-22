///In the name of Allah
#include <bits/stdc++.h>
using namespace std;

void fahad()
{
    int n , k ,p;
    cin >> n >> k >> p;

    if(-n * p <= k && k <= n * p)
    {
        cout << (abs(k) + p - 1)/ p << endl;
    }
    else{
        cout << "-1" << endl;
    }
}

int main ()
{
    int t ;
    cin >> t;

    while(t--)
    {
        fahad();
    }
    return 0;
}
