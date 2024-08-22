///In the name of ALLAH
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, k;
    cin >> n >> k;

    int ans = 0;
    if(n == 1)cout << ans << endl;
    else
    {
        k = k - 1;
        while(n >= 2)
        {
            n = n-k;
            ans++;
        }
         cout << ans << endl;

    }

}
int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
