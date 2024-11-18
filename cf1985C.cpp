/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long prefix_sum = 0;
        long long maxi = 0;
        int good_prefixes = 0;

        for (int i = 0; i < n; i++) {
            prefix_sum += a[i];
            maxi = max(maxi, a[i]);

            // Check if current prefix is good
            if (2 * maxi == prefix_sum) {
                good_prefixes++;
            }
        }

        cout << good_prefixes << '\n';
    }

    return 0;
}
