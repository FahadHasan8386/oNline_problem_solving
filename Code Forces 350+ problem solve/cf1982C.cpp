/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

void fahad()
{
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int cnt = 0;
    int cur = 0;
    int L = 0, R = 0;

    while (L < n)
    {
        while (R < n && cur < l)
        {
            cur += v[R];
            R++;
        }

        if (cur >= l && cur <= r)
        {
            cnt++;
            L = R;
            cur = 0;
        }
        else
        {
            cur -= v[L];
            L++;
        }
    }

    cout << cnt << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        fahad();
    }
}
