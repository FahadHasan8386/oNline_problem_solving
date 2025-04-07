#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s, m;
        cin >> s >> m;

        long long ans = s.size() + m.size();
        long long max1 = ans;

        long long l = 0, r = 0;

        while (l < s.size() && r < m.size() && s[l] == m[r]) {
            ans -= 1;
            l++;
            r++;
        }

        cout << min(ans + 1, max1) << endl;
    }

    return 0;
}
