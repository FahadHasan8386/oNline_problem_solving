#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t;
    cin >> t;
    int sub ;
    while(t--)
    {
        int n ;
        cin >> n;
        vector<int>v(n);

        for (int i = 0 ; i < n ;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());

        int min_dif = INT_MAX;

        for (int i = 1 ; i < n ;i++)
        {
            int dif = abs(v[i] - v[i-1]);
            min_dif = min (min_dif ,dif);

        }
        cout << min_dif << endl;
    }
return 0;
}
