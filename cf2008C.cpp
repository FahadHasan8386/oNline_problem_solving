///IN the name of Allah
#include <bits/stdc++.h>
using namespace std ;

void solve ()
{
    long long l ,r;
    cin >> l >> r;
    long long max_len = 0;
    long long min_dif = 1;
    long long current_sum = 0;

    while(r-1 >= current_sum+min_dif)
    {
        max_len++;
        current_sum += min_dif;
        min_dif++;
    }
    cout << max_len + 1 << endl;
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
