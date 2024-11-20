/// In the name of Allah

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (n <= 4)
        {
            cout << -1 << "\n";
        }
        else
        {
            for (int i = 1; i <= n; i+=2)
            {
                if(i != 5)
                {
                    cout << i << " ";
                }

            }
            cout << 5 << " " << 4 << " ";
            for (int i = 2; i <= n; i+=2)
            {
                if(i != 4)
                {
                    cout << i << " ";
                }

            }
            cout << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
