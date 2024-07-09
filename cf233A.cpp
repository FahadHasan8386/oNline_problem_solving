#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n ;
    cin >> n;

    if(n == 1 || n % 2 == 1)
    {
        cout << "-1" <<endl;
    }
    else{
        vector<int>v(n);
        for (int i = 0 ; i < n ;i+=2)
        {
            v[i] = i + 2;
            v[i+1] = i + 1;
        }

        for (int i = 0 ; i < n ; i++)
        {
            cout << v[i] << " ";
        }
    }
}
