///In the name of Allah
#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    long long n ;
    cin >> n;

    vector<long long>v(n);
    vector<long long>v22(n+1);

    for(int i = 0 ; i < n ;i++)
    {
        cin >> v[i];
        v22[v[i]] = i;//store the index value
    }
    int round = 1;

    for(int i = 1 ; i <= n ;i++)
    {
        if(v22[i] < v22[i-1])
        {
            round++;
        }
    }
    cout << round << endl;
}
