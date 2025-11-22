/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define endl '\n'

/// Pre define structure for pair (val,idx);
struct Item {
    ll val;
    int idx;
};

void fahad() {
    int n;
    cin >> n;

    ///Use user difine structure
    vector<Item> a(n), b(n), c(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].val;
        a[i].idx = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i].val;
        b[i].idx = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i].val;
        c[i].idx = i;
    }

    auto cmp = [](const Item &x, const Item &y) {
        return x.val > y.val;  // descending sort
    };

    sort(a.begin(), a.end(), cmp);
    sort(b.begin(), b.end(), cmp);
    sort(c.begin(), c.end(), cmp);

    int k = 5;
    a.resize(min(k, n));
    b.resize(min(k, n));
    c.resize(min(k, n));

    ll ans = 0;

    for (auto &x : a) {
        for (auto &y : b) {
            for (auto &z : c) {
                if (x.idx != y.idx && x.idx != z.idx && y.idx != z.idx) {
                    ans = max(ans, x.val + y.val + z.val);
                }
            }
        }
    }

    cout << ans << endl;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) fahad();
}
