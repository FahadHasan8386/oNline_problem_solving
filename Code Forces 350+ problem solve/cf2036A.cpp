///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t ;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        bool isPerfect = true;

        for(int i = 1 ; i < n ;i++ )
        {
            int interval = abs(arr[i-1] - arr[i]);
            if(interval != 5 && interval != 7)
            {
                isPerfect = false;
                break;
            }
        }
        if(isPerfect)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
}
