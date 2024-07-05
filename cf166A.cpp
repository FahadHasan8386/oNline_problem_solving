#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, count = 0;
    cin >> k >> n;

    vector<pair<int,int>> v(k);

    for (int i = 0; i < k; i++) {
        cin >> v[i].first >> v[i].second;
    }

    if (n < k) {
        pair<int,int> m = v[n-1];

        for (int i = 0; i < k; i++) {
            if (m == v[i]) {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}
