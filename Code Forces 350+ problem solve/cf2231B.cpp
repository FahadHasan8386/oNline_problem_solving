#include <bits/stdc++.h>
using namespace std;

void fahad()
{
    int n;
    cin >> n;

    vector<long long> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long k = 0;

    for(int i = 0; i < n - 1; i++)
    {
        if(v[i] > v[i + 1])
        {
            k = max(k, v[i] - v[i + 1]);
        }
    }

    if(k == 0)
    {
        cout << "YES" << endl;
        return;
    }

    for(int i = 0; i < n - 1; i++)
    {
        if(v[i] > v[i + 1])
        {
            v[i + 1] += k;
        }
    }

    // Check whether sorted
    for(int i = 0; i < n - 1; i++)
    {
        if(v[i] > v[i + 1])
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        fahad();
    }

    return 0;
}
