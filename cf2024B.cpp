///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;

    while(tt--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        long long presum = 0, ans = k;

        for(int i = 1; i <= n; i++)
        {
            long long mul = (n - i + 1);
            long long sum = mul * v[i - 1] + presum;
            presum += v[i - 1];

            if(sum >= k)
            {
                break;
            }
            else
            {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
