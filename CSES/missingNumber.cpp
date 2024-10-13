///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n;
    cin >> n;

    vector<int>v(n-1);
    int cnt = 0;
    for(int i = 0 ; i < n-1 ;i++)
    {
        cin >> v[i];
        cnt += v[i];
    }
    sort (v.begin(),v.end());
    int sum = 0;
    for (int i = 1 ; i <= n ;i++)
    {
        sum += i;
    }
    cout << sum - cnt << endl;

}
