/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    int l = 0, r = n - 1;

    while (l < r)
    {
        int sum = v[l] + v[r];

        if (sum == x)
        {
            cout << l + 1 << " " << r + 1 << endl;
            return 0;
        }
        else if (sum < x)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    return 0;
}
