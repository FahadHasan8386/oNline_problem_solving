/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll count_bad(ll n) {
    ll res = 0;

    res += n / 2;
    res += n / 3;
    res += n / 5;
    res += n / 7;

    res -= n / (2 * 3);
    res -= n / (2 * 5);
    res -= n / (2 * 7);
    res -= n / (3 * 5);
    res -= n / (3 * 7);
    res -= n / (5 * 7);

    res += n / (2 * 3 * 5);
    res += n / (2 * 3 * 7);
    res += n / (2 * 5 * 7);
    res += n / (3 * 5 * 7);

    res -= n / (2 * 3 * 5 * 7);

    return res;
}

ll count_good(ll l, ll r) {
    return (r - count_bad(r)) - (l - 1 - count_bad(l - 1));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        cout << count_good(l, r) << '\n';
    }
    return 0;
}
