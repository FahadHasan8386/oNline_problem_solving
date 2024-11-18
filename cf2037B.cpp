/// In the name of Allah

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        vector<int> a(k);
        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }

        int gridSize = k - 2;
        vector<int> divisors;


        for (int i = 1; i * i <= gridSize; i++) {
            if (gridSize % i == 0) {
                divisors.push_back(i);
                if (i != gridSize / i) {
                    divisors.push_back(gridSize / i);
                }
            }
        }


        for (int n : divisors) {
            int m = gridSize / n;


            if (find(a.begin(), a.end(), n) != a.end() &&
                find(a.begin(), a.end(), m) != a.end()) {
                cout << n << " " << m << "\n";
                break;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
