/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void fahad() {
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(all(v)); // sort the array!

    ll cnt = 0;

    for (int i = 0; i < n; i++) {
        int left = lower_bound(v.begin() + i + 1, v.end(), l - v[i]) - v.begin();
        int right = upper_bound(v.begin() + i + 1, v.end(), r - v[i]) - v.begin();
        cnt += (right - left);
    }

    cout << cnt << endl;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) fahad();
}
