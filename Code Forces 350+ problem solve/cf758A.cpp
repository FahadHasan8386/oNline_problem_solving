#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int t ;
    cin >> t;
    int arr[t];
    int sum = 0;
    for (int i = 0 ; i < t ; i++)
    {
        cin >> arr[i];
    }
    sort (arr,arr+t);

    for (int i = 0 ; i < t-1 ; i++)
    {

        sum = sum  + (arr[t - 1] - arr[i]);

    }
    cout << sum;

    return 0;
}
