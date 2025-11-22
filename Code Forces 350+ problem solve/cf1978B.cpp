#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int sum = 0;

        if(a >= b)
        {
            sum = n * a;
        }
        else
        {
            int k = min(n, b - a);
            sum = b * k - (k * (k - 1)) / 2;
            n -= k;
            sum += n * a;
        }

        cout << sum << endl;
    }

    return 0;
}
