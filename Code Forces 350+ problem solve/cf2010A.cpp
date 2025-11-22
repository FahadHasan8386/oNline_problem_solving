///IN the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t ;
    cin >> t;
    int sum = 0;
    while(t--)
    {
        int n ;
        cin >> n;

        int arr[n];

        for(int i = 1 ; i <= n ; i++)
        {
            cin >> arr[i];
        }
        for(int i = 1 ; i <= n ; i++)
        {
            if(i % 2 != 0)
            {
                sum += arr[i];
            }
            else{
                sum -= arr[i];
            }
        }
        cout << sum << endl;
        sum = 0;
    }
}
