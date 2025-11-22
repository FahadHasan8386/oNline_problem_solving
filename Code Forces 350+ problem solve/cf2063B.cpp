#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    l--; // Convert to 0-based index

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> brr = arr, crr = arr;

    // Sort from index `l` to end (ascending)
    sort(brr.begin() + l, brr.end());

    // Sort from start to `r` (descending)
    sort(crr.begin(), crr.begin() + r, greater<int>());

    // Compute sum from index `l` to `r-1`
    long long  sum_brr = accumulate(brr.begin() + l, brr.begin() + r, 0);
    long long sum_crr = accumulate(crr.begin() + l, crr.begin() + r, 0);

    cout << min(sum_brr, sum_crr) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
