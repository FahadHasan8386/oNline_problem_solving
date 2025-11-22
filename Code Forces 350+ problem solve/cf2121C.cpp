#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));
        int max_val = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                max_val = max(max_val, a[i][j]);
            }
        }

        vector<int> row(n, 0), col(m, 0);
        int count_max = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == max_val) {
                    row[i]++;
                    col[j]++;
                    count_max++;
                }
            }
        }


        bool can_reduce = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int total = row[i] + col[j];
                if (a[i][j] == max_val) total--;
                if (total == count_max) {
                    can_reduce = true;
                    break;
                }
            }
            if (can_reduce) break;
        }

        if (can_reduce)
            cout << max_val - 1 << '\n';
        else
            cout << max_val << '\n';
    }

    return 0;
}
