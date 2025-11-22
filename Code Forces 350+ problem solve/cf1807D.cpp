#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<int> v(n);
        vector<long long >pref(n+1 ,0);

        long long first_sum = 0;


        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            first_sum += v[i];
            pref[i+1] = pref[i] + v[i];
        }

        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;

            long long range_sum = pref[r] - pref[l-1];

            long long new_range = (long long)(r - l + 1) * k;


            long long new_total_sum = first_sum - range_sum + new_range;


            if (new_total_sum % 2 != 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
