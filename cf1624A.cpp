#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t ;
    cin >> t;

    while(t--)
    {
        int num ;
        cin >> num;

        int arr[num];
        for (int i = 0 ; i < num ; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+num);
        int n = sizeof(arr) /sizeof(arr[0]);
        int result = arr[n - 1] - arr[0];

        cout << result << endl;
    }
}
