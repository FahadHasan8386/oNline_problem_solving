///In the name of Allah

#include<bits/stdc++.h>
using namespace std ;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int>v(n);
        for(int i = 0 ; i < n ;i++)
        {
            cin >> v[i];
        }
        for(int i = 1 ; i < n ;i++)
        {
            cout << v[i] << " ";
        }
        cout <<v[0] << endl;
    }
}