///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    long  long int n;
    cin >> n;

    int arr[n];
    long long int cnt = 0;
    for (int i = 0 ; i < n ;i++)
    {
        cin >> arr[i];
    }
    for(int i = 1 ; i < n-1 ;i++)
    {
        if(arr[i] < arr[i-1])
        {
            cnt += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout << cnt << endl;
}
