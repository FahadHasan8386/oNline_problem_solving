///In the name of allah

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> v(m);

        for (int i = 0; i < m; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        long long cnt = 0;  // Reset cnt for each test case

        for (int i = 0; i < m - 1; i++) {
            cnt += (v[i] * 2) - 1;
        }

        cout << cnt << endl;
    }

    return 0;
}
