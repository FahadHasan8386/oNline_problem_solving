///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n , m;
    cin >> n >> m;

    int ma = 0;
    vector<int>v(n);
    for(int i = 0 ; i < n ;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    ma = 2 * max(v[0] ,  m - v[n-1]);

    for(int i = 0 ; i < n-1 ; ++i)
    {
        ma = max (ma , v[i + 1] - v[i]);
    }
    cout <<fixed<<setprecision(10)<< ma / 2.0 << endl;
}
