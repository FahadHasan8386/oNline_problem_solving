#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> ans;

        if (n == 1)
        {
            ans.push_back(0);
        }
        else
        {

            for (int i = 0; i < n / 2; i++)
            {
                ans.push_back(-1);
                ans.push_back(3);
            }
            if (n % 2 == 1)
            {
                ans.push_back(-1);
            }
            else
            {
                ans.back() = 2; //last element even lenht
            }
        }

        cout << ans[0];
        for (int i = 1; i < n; i++)
        {
            cout << " " << ans[i];
        }
        cout << "\n";

    }
}
