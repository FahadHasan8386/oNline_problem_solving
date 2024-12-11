///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;

    while (tt--) {
        string s, t;
        cin >> s >> t;

        int cnt = 0;
        int n = s.size();
        int m = t.size();

        // Iterate up to the smaller string size
        for (int i = 0; i < min(n, m); i++) {
            if (s[i] == t[i]) {
                if (n < m) {
                    cnt = m + 1; // Add +1 based on the given logic
                }
            } else {
                cnt = n + m; // Sum of sizes if mismatch occurs
            }
        }

        // Output the result
        cout << cnt << endl;
    }

    return 0;
}
