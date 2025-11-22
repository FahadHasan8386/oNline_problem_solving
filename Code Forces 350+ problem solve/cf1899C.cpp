#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;
        vector<long long> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long ans = v[0], sum = v[0], mn = min(0LL, v[0]);

        for (int i = 1; i < n; ++i) {
            if (abs(v[i] % 2) == abs(v[i - 1] % 2)) {
                sum = 0;
                mn = 0;
            }
            sum += v[i];
            ans = max(ans, sum - mn);
            mn = min(mn, sum);
        }

        cout << ans << endl;
    }

    return 0;
}
