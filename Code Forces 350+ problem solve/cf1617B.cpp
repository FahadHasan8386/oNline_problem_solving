#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t ;
    cin >> t ;
    while(t--)
    {
        int n,i,j;
        cin >> n ;
        for(i=1;i<=n;i++)
        {
            j=n-i-1 ;
            if(i!=1&&j!=1&&i!=j&&__gcd(i,j)==1)
            {
                break ;
            }
        }
        cout << i << " " << j << " " << 1 << endl ;
    }
}
