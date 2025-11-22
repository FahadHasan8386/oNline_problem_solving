#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        if (b > d) {
            sum += a + (b - d);  // অতিরিক্ত 1 নামাতে হলে সব 0 + extra 1
        } else if (a > c) {
            sum += (a - c);      // শুধু 0 নামাতে হবে
        }
    }
    cout << sum << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
