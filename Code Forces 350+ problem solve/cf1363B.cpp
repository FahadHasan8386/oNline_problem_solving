#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        int totalZero = 0, totalOne = 0;
        for (char c : s) {
            if (c == '0') totalZero++;
            else totalOne++;
        }

        int ans = min(totalZero, totalOne);

        int prefZero = 0, prefOne = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') prefZero++;
            else prefOne++;

            int sufZero = totalZero - prefZero;
            int sufOne  = totalOne  - prefOne;


            ans = min(ans, prefOne + sufZero);


            ans = min(ans, prefZero + sufOne);
        }

        cout << ans << endl;
    }
    return 0;
}
