#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t ;
    cin >> t ;

    string correct = "Timur";
    sort(correct.begin(), correct.end());

    while(t--)
    {
        int n ;
        cin >> n ;
        string arr;
        cin >> arr;

        sort(arr.begin(), arr.end());

        if(correct == arr)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
