#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t ;
        cin >> t;
    vector<int>v(t);
    for (int i = 0 ; i < t ; i++)
    {
        cin >> v[i];
    }
    for (int i = 0 ; i < t ; i++)
    {
        if ( v[i] >= 1900)
        {
            cout << "Division 1" << endl;
        }
        else if (1600 <= v[i] && v[i] <= 1899)
        {
            cout << "Division 2" << endl;
        }
        else if (1400 <= v[i] && v[i] <= 1599)
        {
            cout << "Division 3" << endl;
        }
        else if (v[i] <= 1399)
        {
            cout << "Division 4" << endl;
        }
    }
}
