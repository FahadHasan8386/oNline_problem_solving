///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Sort the array
        sort(a.begin(), a.end());

        int start = 0;
        long sum = 0, ans = 0;

        for (int i = 0; i < n; i++)
        {
            sum += a[i];

            // Check conditions for sum
            while (sum > m || (a[i] - a[start] > 1))
            {
                sum -= a[start];
                start++;
            }

            // Update the maximum sum
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }

    return 0;
}
