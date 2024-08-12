///In the name of allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t ;
    cin >> t;

    while(t--)
    {
        int n ;
        cin >> n ;
        vector<long long>arr(n);

        for (int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());

        arr[0] += 1;

        long long sum = 1;

        for (int i = 0; i < n ;i++)
        {
            sum *= arr[i];
        }
        cout << sum << endl;
    }
}
