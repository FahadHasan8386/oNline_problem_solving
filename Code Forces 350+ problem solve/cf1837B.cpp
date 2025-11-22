///In the name of Allah
#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int t ;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        int cnt = 0 ,ans =0;
        for (int i = 0 ; i < n ;i++)
        {
            cnt++;
            if(i == n-1 || s[i+1] !=s[i])
            {
                ans = max (ans ,cnt);
                cnt = 0;
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}
