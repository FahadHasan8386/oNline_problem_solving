///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a ,b;
        cin >> a >> b;

        if(a >= b)
        {
            cout << a << endl;
        }
        if(a < b)
        {
            if(a <= (b/2))
            {
                cout << "0" << endl;
            }
            else{
                int num = abs(b-a);
                cout << a - num << endl;
            }
        }
    }
}
