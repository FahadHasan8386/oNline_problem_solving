#include <bits/stdc++.h>
using namespace std;

void fahad()
{
    int n;
    cin >> n;

    int last = -1, ans = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a - last > 1)
        {
            ans++;
            last = a;
        }
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        fahad();
    }
    return 0;
}
