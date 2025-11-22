///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

void  solve()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        long long pi = pow(2, n);

        for(int i = 1 ; i < n/2 ;i++)
        {
            pi += pow(2,i);
        }

        long long pi2 = 0;
        for(int i = n/2 ;i < n ;i++)
        {
            pi2 += pow(2,i);
        }

        cout << abs(pi - pi2) <<endl;
    }
}

int main ()
{
    solve();
    return 0;
}
