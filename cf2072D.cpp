#include <bits/stdc++.h>
using namespace std;

// inversion count function (O(n^2))
long long countInversions(vector<int> &a) {
    long long cnt = 0;
    for (int i = 0; i < (int)a.size(); i++) {
        for (int j = i + 1; j < (int)a.size(); j++) {
            if (a[i] > a[j]) cnt++;
        }
    }
    return cnt;
}

// cyclic shift [l, r]
vector<int> shift(vector<int> a, int l, int r) {
    int first = a[l];
    for (int i = l; i < r; i++) {
        a[i] = a[i + 1];
    }
    a[r] = first;
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long bestInv = LLONG_MAX;
        int bestL = 1, bestR = 1;

        // brute force: try every l, r
        for (int l = 0; l < n; l++) {
            for (int r = l; r < n; r++) {
                vector<int> b = shift(a, l, r);
                long long inv = countInversions(b);
                if (inv < bestInv) {
                    bestInv = inv;
                    bestL = l + 1; // 1-based index
                    bestR = r + 1;
                }
            }
        }

        cout << bestL << " " << bestR << "\n";
    }
}
