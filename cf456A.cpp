#include <bits/stdc++.h>
using namespace std ;


void solve()
{
    int n ;
    cin >> n ;

    for (int i = 0 ; i < n ;i++)
    {
        int a , b;
        cin >> a >> b;

        if(a < b )
        {
            cout << "Happy Alex" << endl;
            return;
        }
    }
    cout << "Poor Alex" << endl;
}
int main ()
{
    solve();
    return 0;
}
