///IN the name of Allah
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l, r;
        cin >> l >> r;

        if(l % 2 == 0)
        {
            l++;
        }
        int ans = 0;

        if(abs(l-r) >= 2)
        {
            while(l+2 <= r)
            {
                ans++;
                l += 4;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
