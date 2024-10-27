///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t;
    cin >> t;

    for(int i = 1 ; i <= t ;i++)
    {
        vector<int>v(3);

        for(int i = 0 ; i < 3;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());

        if((v[0] * v[0]) + (v[1] * v[1])  == (v[2] * v[2]))
        {
            cout << "Case "<< i << ":" << " yes" << endl;
        }
        else{
            cout << "Case "<< i << ":" << " no" << endl;
        }
    }
}
