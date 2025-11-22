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

        int maxColor = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                maxColor = max(maxColor, a[i][j]);
            }
        }

        vector<int> hasColor(maxColor + 1, 0), hasBad(maxColor + 1, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int color = a[i][j];
                hasColor[color] = 1;

                if (i + 1 < n && a[i][j] == a[i + 1][j]) {
                    hasBad[color] = 1;
                }
                if (j + 1 < m && a[i][j] == a[i][j + 1]) {
                    hasBad[color] = 1;
                }
            }
        }

        int sumColor = accumulate(hasColor.begin(), hasColor.end(), 0);
        int sumBad   = accumulate(hasBad.begin(), hasBad.end(), 0);
        int maxBad   = *max_element(hasBad.begin(), hasBad.end());

        cout << sumColor + sumBad - 1 - maxBad << "\n";
    }
    return 0;
}
