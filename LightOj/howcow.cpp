///In the name of Allah
#include <bits/stdc++.h>
using namespace std ;

void fahad()
{
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2 ;

    int m;
    cin >> m;

    while(m--)
    {
        int a, b;
        cin >> a >> b;

        if(a > x1 && a < x2 && b > y1 && b < y2)
        {
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}

int main ()
{
    int t;
    cin >> t;

    for(int i = 1 ; i <= t ;i++)
    {
        cout << "Case " << i << ":" << endl;
        fahad();
    }
}
