/// In the name of Allah

#include <bits/stdc++.h>
using namespace std;

void fahad()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());  // Sort in descending order

    int sum = 0;

    for (auto u : v)
    {
        if (sum + u <= k)
        {
            sum += u;
        }
        else
        {
            break;
        }
    }

    cout << k - sum << endl;
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        fahad();
    }

    return 0;
}
