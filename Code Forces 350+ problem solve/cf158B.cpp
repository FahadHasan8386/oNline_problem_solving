///In the name of Allah
#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    cin >> n;

    vector<int>v(n);
    for(int i = 0 ; i < n ;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    int l = 0, r = n - 1;
    int cnt = 0;


    while(l <= r)
    {
        if(v[l] + v[r] <= 4)
        {
            l++;
        }
        r--;
        cnt++;
    }
    cout << cnt << endl;
}
