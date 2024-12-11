///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;

    while (tt--) {
        string s;
        cin >> s;

        long long f = 0;
        int n = s.size();

        // Check for consecutive duplicate characters
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                cout << s[i] << s[i] << endl;
                f = 1;
                break;
            }
        }

        // Check for triplet of unique characters
        if (f == 0) {
            for (int i = 0; i < n - 2; i++) {
                set<char> st;
                st.insert(s[i]);
                st.insert(s[i + 1]);
                st.insert(s[i + 2]);
                if (st.size() == 3) {
                    cout << s[i] << s[i + 1] << s[i + 2] << endl;
                    f = 1;
                    break;
                }
            }
        }

        // If neither condition is satisfied
        if (f == 0) {
            cout << -1 << endl;
        }
    }

    return 0;
}
