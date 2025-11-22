///IN the name of Allah
#include <bits/stdc++.h>
using namespace std ;

void solve ()
{
    long long l ,r;
    cin >> l >> r;
    long long length = 0;
    long long current = l;
    long long diff = 1;

    // Keep adding increasing differences while staying within bounds
    while (current + diff <= r) {
        current += diff;
        diff++;
        length++;
    }

    // Include the starting element
    cout << length + 1 << endl;
}

int main ()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
