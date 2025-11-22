#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    int n;
    int arr[n];
    while (t--)
    {
        int n;
        cin >> n ;
        vector<int>arr(n);

        for (int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        sort (arr.begin(),arr.end());
    bool increment = true;
    for (int i = 1 ; i < n ; i++)
    {
        if(arr[i] == arr[i-1])
        {
            increment = false;
            break;
        }
    }
    if(increment)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" <<endl;
    }
    }
}
