/// In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int maxScore = 0;
        for (int i = 1; i <= n; i++) {
            maxScore += freq[i] / 2;
        }

        cout << maxScore << "\n";
    }

    return 0;
}
