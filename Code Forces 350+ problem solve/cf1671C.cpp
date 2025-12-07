/// In the name of ALLah
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        long long sum = accumulate(v.begin(), v.end(), 0LL);
        long long prevDay = -1;
        long long ans = 0;

        for (int i = n - 1; i >= 0; i--) {
            long long curDay = (sum <= x) ? (x - sum) / (i + 1) : -1;
            ans += (i + 1) * max(0LL, curDay - prevDay);
            prevDay = curDay;
            sum -= v[i];
        }

        cout << ans << endl;
    }
}
