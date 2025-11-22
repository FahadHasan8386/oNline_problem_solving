#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t ;
    cin >> t ;
    int num[t],count = 0;
    for (int i = 0 ; i < t ; i++)
    {
        cin >> num[i];
        if (num[i] == 0)
        {
            count++;
        }
    }
    if(count == t)
    {
        cout << "EASY";
    }
    else
    {
        cout << "HARD";
    }
}
