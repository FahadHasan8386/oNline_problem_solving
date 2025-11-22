#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long ans = 0;

        if (k > 1) {
            // Sort the array in descending order and sum the largest (k+1) elements
            sort(a.rbegin(), a.rend());
            for (int i = 0; i <= k; i++) {
                ans += a[i];
            }
        } else {
            // For k = 1, consider two cases:
            // 1. Maximum of first n-1 elements + last element
            // 2. Maximum of last n-1 elements + first element
            int maxLeft = *max_element(a.begin(), a.end() - 1);
            int maxRight = *max_element(a.begin() + 1, a.end());
            ans = max(maxLeft + a.back(), maxRight + a[0]);
        }

        cout << ans << endl;
    }
    return 0;
}
