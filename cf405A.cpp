#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t;

    int number[t];

    for(int i = 0 ; i < t ;i++)
    {
        cin >> number[i];
    }
    sort(number ,number + t);
    for(int i = 0 ; i < t ;i++)
    {
    cout << number[i] << " ";
    }
}
