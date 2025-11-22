///IN the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if(a < b )
        {
            swap(a,b);
        }
        if(b % 2 == 1)
        {
            if(a % 2 == 0 && a != 2*b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
