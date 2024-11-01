///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x , y ,z;
        cin >> x >> y >> z;

        cout << "0 0 "  << min(x,y) << " " << min(x,y) << endl;
        cout << min(x,y) << " 0 0 " << min(x,y) << endl;
    }
}
